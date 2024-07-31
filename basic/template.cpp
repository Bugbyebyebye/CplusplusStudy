//
// Created by 郝建斌 on 2024/7/31.
// template 模板

#include <iostream>

//template<typename T> //或者 template<class T> 当我们实际调用函数时，编译器会根据传入的参数类型来确定模板参数的类型
//void Print(T value) {
//    std::cout << value << std::endl;
//}
//
//int main(){
//    Print(10); //隐式
//    Print<int>(100); //显式
//    Print("hello");
//    Print(10.5);
//}

template<typename T, int N>
class Array{
private:
    T arr[N];
public:
    int getSize() const {
        return N;
    }
};

//int main(){
//    Array<int,10> arr;
//    std::cout << arr.getSize() << std::endl;
//}