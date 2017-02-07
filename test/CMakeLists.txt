cmake_minimum_required (VERSION 2.6)
project (test1)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set (SOURCES
        ./src/main.cpp
        ./src/tl.h
        ./src/tl.cpp)

find_package(CxxTest)
if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(unittest_foo 
                    tests.cpp 
                    ${CMAKE_CURRENT_SOURCE_DIR}/test/MyTestSuite.h
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/tl.cpp)


endif()

add_executable (test1 ${SOURCES} )


