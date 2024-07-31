//
// Created by 郝建斌 on 2024/7/10.
// 虚函数
//

#include <string>
#include <iostream>

class Entity{
public:
    virtual std::string GetName(){
        return "Entity";
    }
};

class Player:public Entity{
private:
    std::string name;
public:
    Player(const std::string& name):name(name){}

    std::string GetName(){
        return name;
    }
};

void PrintName(Entity* e){
    std::cout<<e->GetName()<<std::endl;
}

//int main(){
//    Entity* e = new Entity();
//    PrintName(e);
//
//    Player* p = new Player("Hao");
//    PrintName(p);
//
//    return 0;
//}