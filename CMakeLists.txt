cmake_minimum_required(VERSION 3.0.0)
project(Visitor VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()
include_directories(Expressions Visitors)

add_executable(Visitor main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
