cmake_minimum_required(VERSION 3.9)
project(cs162_lab_6)

set(CMAKE_CXX_STANDARD 11)

add_executable(cs162_lab_6
        InputValidation.cpp
        InputValidation.hpp
        main.cpp
        Menu.cpp
        Menu.hpp
        DriverFunctions.cpp DriverFunctions.hpp Node.cpp Node.hpp DoubleLinkedList.cpp DoubleLinkedList.hpp)
