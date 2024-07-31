//
// Created by 郝建斌 on 2024/7/10.
// 纯虚函数 - 接口

#include <iostream>

class Printable{
public:
    virtual std::string GetClassName() = 0;
};

class Interface: public Printable{
public:
    // 纯虚函数
    virtual std::string GetName() {return "Interface";};

    std::string GetClassName() override{
        return "Interface";
    }
};

class Impl : public Interface{
private:
    std::string name;
public:
    Impl(const std::string& name)
        : name(name){}

    std::string GetName() override{
        return name;
    }
    std::string GetClassName() override{
        return "Impl";
    }
};

void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

//int main(){
//    Impl* in = new Impl("Hao");
//    Print(in);
//}