cmake_minimum_required(VERSION 3.22.1)
project(finite_state_machine)

set(CMAKE_CXX_STANDARD 20)

file(GLOB RESOURCE CMAKE_CONFIGURE_DEPENDS
    ./*.cpp
    ./*.h
)

add_executable(MyMachine ${RESOURCE})