//
// Created by 郝建斌 on 2024/7/28.
// Vector 动态数组
//

#include <iostream>
#include <vector>

struct Vertex{
    float x,y,z;

    Vertex(float x,float y,float z):x(x),y(y),z(z){}

    Vertex(const Vertex& vertex)
        :x(vertex.x),y(vertex.y),z(vertex.z){
        std::cout << "copy" << std::endl;

    }
};

std::ostream& operator<<(std::ostream& os, const Vertex& v){
    return os << v.x << "," << v.y << "," << v.z;
}

//int main(){
//    std::vector<Vertex> vertices; // 一个动态数组
//    vertices.reserve(3); // 提前告知 预留空间为 3
//
////    vertices.push_back(Vertex(1,2,3));
////    vertices.push_back(Vertex(4,5,6));
////    vertices.push_back(Vertex(7,8,9));
//    // 优化
//    vertices.emplace_back(1,2,3);
//    vertices.emplace_back(4,5,6);
//
//    for(int i=0;i<vertices.size();i++){
//        std::cout << vertices[i] << std::endl;
//    }
//
////    vertices.erase(vertices.begin()); // 删除第一个元素
////
////    for(Vertex v: vertices){
////        std::cout << v << std::endl;
////    }
//
//    vertices.clear(); // 清空
//}