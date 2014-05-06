
cmake_minimum_required (VERSION 2.6) 
project (XMLMessagesGenerator) 

add_definitions(-std=c++11)
add_definitions(-Wall)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2-master/")  

add_executable(generator 
        main.cpp)
