cmake_minimum_required(VERSION 3.0.0)
project(test1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(test1 stock10.cc usestock2.cc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)