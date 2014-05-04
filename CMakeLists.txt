
cmake_minimum_required (VERSION 2.6) 
project (XMLMessagesGenerator) 

add_definitions(-std=c++11)
add_definitions(-Wall)

add_executable(generator 
        main.cpp)
