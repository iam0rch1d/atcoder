cmake_minimum_required(VERSION 3.17)
project(atcoder)

set(CMAKE_CXX_STANDARD 17)

add_executable(template template.cpp)
add_executable(practice_contest_a practice-contest/a.cpp)
add_executable(practice_contest_b practice-contest/b.cpp)
add_executable(abc185_a abc185/a.cpp)
add_executable(abc185_b abc185/b.cpp)
add_executable(abc185_c abc185/c.cpp)
add_executable(abc185_d abc185/d.cpp)
add_executable(abc185_e abc185/e.cpp)
add_executable(abc185_f abc185/f.cpp)

include_directories(.)