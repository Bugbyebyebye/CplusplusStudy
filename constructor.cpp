// c++构造器函数
#include <iostream>

class Entity{
public:
    float x, y;

    Entity(){
        std::cout << "Created" << std::endl;
    }

    Entity(float x, float y){
        this->x = x;
        this->y = y;
    }

    //析构函数
    ~Entity(){
        std::cout << "Destroyed" << std::endl;
    }

    void Print(){
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

//int main(){
//    Entity e;
//    e.Print();
////    e.~Entity(); 手动调用析构函数
//}