//
// Created by 郝建斌 on 2024/7/13.
//

#include <iostream>

struct Vector {
    float x,y;

    Vector(float x, float y):x(x),y(y){}

    Vector operator+(const Vector& other) const {
        return Vector{x+other.x, y+other.y};
    }

    Vector operator*(const Vector& other) const {
        return Vector{x*other.x, y*other.y};
    }
};

//int main(){
//    Vector a(1,2);
//    Vector b(3,4);
//    Vector c = a+b;
//    Vector d = a*b;
//    std::cout << c.x << " " << c.y << std::endl;
//    std::cout << d.x << " " << d.y << std::endl;
//    return 0;
//}