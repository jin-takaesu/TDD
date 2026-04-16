cmake_minimum_required(VERSION 3.14)
project(TDD)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP true
)
FetchContent_MakeAvailable(googletest)

add_executable(tests test_money.cpp)
target_link_libraries(tests gtest_main)

enable_testing()
add_test(NAME MoneyTest COMMAND tests)




