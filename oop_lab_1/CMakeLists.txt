cmake_minimum_required(VERSION 3.14)
project(BinaryCounter CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp count_bin.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
  DOWNLOAD_EXTRACT_TIMESTAMP ON
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(test_count_bin test_count_bin.cpp count_bin.cpp)
target_link_libraries(test_count_bin PRIVATE GTest::gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(test_count_bin)