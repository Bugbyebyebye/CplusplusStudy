// c++ 枚举类型
#include <iostream>

class Log{
public:
    enum Level{
        INFO,
        WARNING,
        ERROR
    };
    void setLevel(Level level){
        m_level = level;
    }
    void Info(const char* message){
        if(m_level <= INFO){
            std::cout << "[INFO] " << message << std::endl;
        }
    }
    void Warn(const char* message){
        if(m_level <= WARNING){
            std::cout << "[WARNING] " << message << std::endl;
        }
    }
    void Error(const char* message){
        if(m_level <= ERROR){
            std::cout << "[ERROR] " << message << std::endl;
        }
    }
private:
    Level m_level = INFO;
};

//int main() {
//   Log log;
//   log.setLevel(Log::WARNING);
//   log.Info("Hello");
//   log.Warn("Hello");
//   log.Error("Hello");
//}
//