cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)
project(MyProject)

add_executable(MyProjectEXE 
    ./Pattern01/main.cpp 
    ./Pattern01/sql_query_builder.cpp 
)
include_directories(
    ./Pattern01/sql_query_builder.h 
)