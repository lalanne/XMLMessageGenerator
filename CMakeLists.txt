
cmake_minimum_required (VERSION 2.6) 
project (XMLMessagesGenerator) 

add_definitions(-std=c++11)
add_definitions(-Wall)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2-master/")  
link_directories("${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2-master/")

add_executable(generator 
        XMLMessageGenerator.cpp
        BatchControlInfo_XmlTag.cpp
        AccountInfo_XmlTag.cpp
        NetworkInfo_XmlTag.cpp
        AuditControlInfo_XmlTag.cpp
        CallEventDetails_XmlTag.cpp
        MobileOriginatedCall_XmlTag.cpp
        BasicCallInformation_XmlTag.cpp
        main.cpp)

target_link_libraries(generator tinyxml2)  
