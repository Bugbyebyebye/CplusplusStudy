//
// Created by 郝建斌 on 2024/7/13.
//

#include <string>

class Entity{
private:
    std::string m_name;
    mutable int m_count = 0; //mutable 使得const成员函数可以改变成员变量
public:
    // 承诺不会改变类 无法对m_name赋值
    const std::string& GetName() const{
        m_count++;
        return m_name;
    }
};

//int main(){
//    const Entity e;
//    e.GetName();
//
//    //三元运算符
//    int x = 5,y;
//    y = x == 5 ? 10 : 20;
//
//}