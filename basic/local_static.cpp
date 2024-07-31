// c++ 定义静态变量
#include <iostream>

//class Singleton { //不使用static 指针的写法
//private:
//    static Singleton* s_Instance;
//public:
//    static Singleton& Get(){
//        return *s_Instance;
//    }
//
//    void Hello(){
//        std::cout << "Hello" << std::endl;
//    }
//};
//
//Singleton* Singleton::s_Instance = nullptr;

//直接使用static 定义指针，只会创建一次变量
class Singleton {
public:
    static Singleton& Get(){
        static Singleton s_Instance;
        return s_Instance;
    }

    void Hello(){
        std::cout << "Hello" << std::endl;
    }
};

//int main(){
//    Singleton::Get().Hello();
//}