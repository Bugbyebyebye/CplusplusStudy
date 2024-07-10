//
// Created by 郝建斌 on 2024/7/10.
// c++继承

#include <iostream>

class Entity {
public:
    float X,Y;
    void move(float x,float y){
        X+=x;
        Y+=y;
    }
};

class Player: public Entity{
    const char* name;

    void printName(){
        std::cout<<name<<std::endl;
    }
};

//int main(){
//    Player player;
//    player.move(1,2);
//    player.X = 4;
//}