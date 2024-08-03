//
// Created by 郝建斌 on 2024/8/3.
// thread c++ 线程

#include <iostream>
#include <thread>
#include <chrono>

void DoWork(){
    using namespace std::chrono_literals;

    std::cout << "DoWork: id=" << std::this_thread::get_id() << std::endl;
    std::this_thread::sleep_for(1s);
}

//int main(){
//    auto start = std::chrono::high_resolution_clock::now();
//    std::thread worker(DoWork);
//    worker.join();
//    auto end = std::chrono::high_resolution_clock::now();
//    std::chrono::duration<float> duration = end - start;
//    std::cout << duration.count() << "ms" << std::endl;
//    std::cin.get();
//}