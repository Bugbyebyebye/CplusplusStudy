cmake_minimum_required(VERSION 3.26)
project(study)

set(CMAKE_CXX_STANDARD 17)

add_executable(study class/enum.cpp
        basic/local_static.cpp
        class/constructor.cpp
        class/inherit.cpp
        "virtual/virtual_function .cpp"
        virtual/interface.cpp
        basic/arrays.cpp
        basic/string.cpp
        const/const.cpp
        basic/operator_reload.cpp
        basic/smart_pointer.cpp
        basic/copy_func.cpp
        standardlib/vector.cpp
        basic/template.cpp
        basic/macro.cpp
)
