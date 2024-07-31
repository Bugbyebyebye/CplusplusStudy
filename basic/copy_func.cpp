//
// Created by 郝建斌 on 2024/7/28.
// 实现了一个字符串类 支持浅层复制和深层复制，涉及到运算符重载、析构函数、友元函数、以及函数传递引用
//

#include <iostream>
#include <string>
#include <cstring>

class String{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string){
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size + 1);
        m_Buffer[m_Size] = 0;

        std::cout << "String Created: " << m_Buffer << std::endl;
    }

    // 深层复制构造函数
    String(const String& other)
        :m_Size(other.m_Size){
            std::cout << "String Copied: " << std::endl;

            m_Buffer = new char[m_Size + 1];
            memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
        }

    char& operator[](unsigned int index){  // 重载[]运算符
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string); // 友元函数

    ~String(){
        delete[] m_Buffer; // 释放内存
    }
};

std::ostream& operator<<(std::ostream& stream, const String& string){
    stream << string.m_Buffer;
    return stream;
}

void PrintString(const String& string){
    std::cout << string << std::endl;
}

//int main(){
//    String string = "Hello World!"; //浅层复制 调用String(const char* string)构造函数
//    String second = string; // 深层复制 调用String(const String& other)构造函数
//
//    second[2] = 'h';
//
//    PrintString(string);
//    PrintString(second);
//}