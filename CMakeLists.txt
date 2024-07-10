cmake_minimum_required(VERSION 3.26)
project(study)

set(CMAKE_CXX_STANDARD 17)

add_executable(study enum.cpp
        local_static.cpp
        constructor.cpp
        inherit.cpp
)
