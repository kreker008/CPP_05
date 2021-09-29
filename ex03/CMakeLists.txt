cmake_minimum_required(VERSION 3.20)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

AUX_SOURCE_DIRECTORY(. SRC)

add_executable(ex03
        ${SRC}
        )
