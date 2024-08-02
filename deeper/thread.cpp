//
// Created by 郝建斌 on 2024/8/3.
// thread c++ 线程

#include <iostream>
#include <thread>

void DoWork(){
    using namespace std::chrono_literals;

    std::cout << "DoWork: id=" << std::this_thread::get_id() << std::endl;
    std::this_thread::sleep_for(1s);
}

int main(){
    std::thread worker(DoWork);
    worker.join();

    std::cin.get();
}