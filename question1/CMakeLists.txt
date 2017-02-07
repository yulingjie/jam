cmake_minimum_required (VERSION 2.6)
project (test1)
set( CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set (SOURCES
        ./src/MergeSort.cpp
        ./src/MergeSort.h
        ./src/main.cpp
        )

add_executable (test1 ${SOURCES} )

find_package(CxxTest)
if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
    CXXTEST_ADD_TEST(testMergeInMemory 
                    gen_testMergeInMemory.cpp
                    ${CMAKE_SOURCE_DIR}/test/TestMergeInMemory.h
                    ${CMAKE_SOURCE_DIR}/src/MergeSort.cpp)
    CXXTEST_ADD_TEST(testGenData
                    gen_testGenData.cpp
                    ${CMAKE_SOURCE_DIR}/test/TestGenerateData.h
                    )
    CXXTEST_ADD_TEST(testIntSize
                    gen_testIntSize.cpp
                    ${CMAKE_SOURCE_DIR}/test/TestDataCorrect.h)
endif()
