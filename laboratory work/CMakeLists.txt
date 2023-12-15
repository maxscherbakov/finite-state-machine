cmake_minimum_required(VERSION 3.22.1)
project(finite_state_machine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB RESOURCE CMAKE_CONFIGURE_DEPENDS
    ./*.cpp
    ./*.h
)

add_executable(MyMachine ${RESOURCE})
target_link_libraries(MyMachine GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(MyMachine)