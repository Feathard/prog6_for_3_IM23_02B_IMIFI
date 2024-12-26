cmake_minimum_required(VERSION 3.5.0)
project(prog6_3_im23_02b VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 23)
include_directories(include)

add_executable(prog6_3_im23_02b
    test.cpp
    include/polynomiac_basic.cpp
    include/MenuManager.cpp
    include/polynomiac_basic.cpp
    include/polynomiac_basic_operations.cpp
    include/PolynomialOperations.cpp
)

#TODO : Добавить сюда свои файлы для компиляции