//
// Created by 郝建斌 on 2024/7/11.
// c++ arrays

#include <iostream>
#include <array>

//int main(){
//    static const int size = 5;
//    // 在栈上分配
//    int example[size];
//    // 在堆上分配 之所以在堆上分配内存 是因为生存期
//    int* another = new int[5];
//    // 释放堆上分配的内存
//    delete[] another;
//
//    //c++ 11 array
//    std::array<int, size> example2;
//    for (int i = 0; i < example2.size(); ++i) {
//        example2[i] = i;
//    }
//}

// 标准数组

namespace basic { // 命名空间
    void PrintArray(int a) {
        std::cout << a << std::endl;
    }
}

namespace special {
    void PrintArray(int a) {
        std::cout << a << std::endl;
    }
}

void ForEach(const std::array<int,5>& array,void(*func)(int)){ // 函数指针
    for (int i = 0; i < array.size(); ++i) {
        func(array[i]);
    }
}

//int main(){
//    std::array<int, 5> example = {1,2,3,4,5};
//    example.size();
//
//    ForEach(example,basic::PrintArray); // 函数指针
//    auto lambda = [](int a){std::cout << a << std::endl;};
//
//    auto l = [=]{std::cout << "lambda" << std::endl;}; // = 捕获所有变量
//    auto l2 = [&]{std::cout << "lambda2" << std::endl;}; // & 捕获所有引用
//    auto l3 = [&,a=1]{std::cout << "lambda3" << std::endl;}; // 捕获所有引用，a=1 捕获值
//
//    ForEach(example,lambda);// 匿名函数 lambda
//
//}