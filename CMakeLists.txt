
cmake_minimum_required (VERSION 2.6) 
project (XMLMessagesGenerator) 

add_definitions(-std=c++11)
add_definitions(-Wall)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/")  
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2-master/")  
link_directories("${CMAKE_CURRENT_SOURCE_DIR}/tinyxml2-master/")

add_executable(generator 
        src/XMLMessageGenerator.cpp
        src/BatchControlInfo_XmlTag.cpp
        src/AccountInfo_XmlTag.cpp
        src/NetworkInfo_XmlTag.cpp
        src/AuditControlInfo_XmlTag.cpp
        src/CallEventDetails_XmlTag.cpp
        src/MobileOriginatedCall_XmlTag.cpp
        src/BasicCallInformation_XmlTag.cpp
        src/LocationInformation_XmlTag.cpp
        src/BasicServiceUsedList_XmlTag.cpp
        src/OperatorSpecInformation_XmlTag.cpp
        src/ChargeableSubscriber_XmlTag.cpp
        src/CallEventStartTimeStamp_XmlTag.cpp
        src/TotalCallEventDuration_XmlTag.cpp
        src/SimChargeableSubscriber_XmlTag.cpp
        src/Imsi_XmlTag.cpp
        src/NetworkLocation_XmlTag.cpp
        src/RecEntityCode_XmlTag.cpp
        src/CallReference_XmlTag.cpp
        src/LocationArea_XmlTag.cpp
        src/CellId_XmlTag.cpp
        src/ImsiGenerator.cpp
        src/CellIdGenerator.cpp
        src/main.cpp)

target_link_libraries(generator tinyxml2)  
