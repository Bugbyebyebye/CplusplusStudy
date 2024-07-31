// c++构造器函数
#include <iostream>

class Entity{
public:
    float x, y;

    // 成员初始化列表
    Entity()
        :x(0.0f), y(0.0f){
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
//    // 在栈上创建实体
//    Entity e = Entity(5.0f, 5.0f); //Entity e(5.0f, 5.0f);
//    e.Print();
//    e.~Entity(); //手动调用析构函数
//
//    // 在堆上创建实体
//    Entity* e2 = new Entity(5.0f, 5.0f);
//    e2->Print();
//    delete e2; // 手动调用释放内存
//
//}