cmake_minimum_required(VERSION 3.22.20211116-g49c870b)
project(main VERSION 1.0 LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
  )

FetchContent_MakeAvailable(googletest)

include_directories(include)

file(GLOB SOURCES "src/*.cc")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED FALSE)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_EXTENSIONS NO)

add_executable(${PROJECT_NAME} ${SOURCES})

#include_directories(${CMAKE_CXX_STANDARDE_CURRENT_SOURCE_DIR}/include)
#add_executable(main src/main.cc)


#target_link_libraries(main PUBLIC impl)
#target_include_directories(main PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/impl")


#option(USE_MYMATH "Use tutorial provided math implementation" ON)
#
#include_directories(${CMAKE_CXX_STANDARDE_CURRENT_SOURCE_DIR}/inc)
#
##configure_file("${PROJECT_SOURCE_DIR}/src/config.h.in" "${PROJECT_BINARY_DIR}/config.h")
#include_directories("${PROJECT_BINARY_DIR}")
#
#add_subdirectory(impl)
#
#file(GLOB SOURCES "src/main.cc")
#
#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED NO)
#set(CMAKE_BUILD_TYPE debug)
#set(CMAKE_CXX_EXTENSIONS NO)
#
##set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
#
#add_executable(${PROJECT_NAME} ${SOURCES})
#
#target_link_libraries(main PUBLIC impl)
#
#target_include_directories(main PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/impl")
