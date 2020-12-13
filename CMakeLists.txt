cmake_minimum_required(VERSION 3.17)
project(atcoder)

set(CMAKE_CXX_STANDARD 17)

add_executable(template template.cpp)
add_executable(abc185_a abc185_a.cpp)
add_executable(abc185_b abc185_b.cpp)
add_executable(abc185_c abc185_c.cpp)
add_executable(abc185_d abc185_d.cpp)
add_executable(abc185_e abc185_e.cpp)
add_executable(abc185_f abc185_f.cpp)

include_directories(.)