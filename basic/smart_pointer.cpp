//
// Created by 郝建斌 on 2024/7/13.
// C++ 智能指针

#include<iostream>
#include<memory>
#include<string>

class Entity{
public:
    Entity(){
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity(){
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print(){
        std::cout << "Entity!" << std::endl;
    }
};

//int main(){
//    {
//        // 单独作用域 当作用域结束时，释放内存
////        std::unique_ptr<Entity> entity(new Entity());
//        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // 智能指针的构造函数 避免返回空指针
//        entity->Print();
//
//        // 共享指针 当指针引用的次数为0时，释放内存
//        std::shared_ptr<Entity> entity1 = std::make_shared<Entity>();
//
//        // 弱指针 当把智能指针赋值给弱指针时，弱指针不会增加智能指针的引用计数
//        std::weak_ptr<Entity> entity2 = entity1;
//    }
//
//
//}
