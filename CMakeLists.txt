cmake_minimum_required(VERSION 3.26)
project(Vosgi VERSION 0.0.1 DESCRIPTION "Vosgi is a C++ library for creating Interactive applications using Raylib and ImGui")

set(CMAKE_CXX_STANDARD 23)

add_library(Vosgi SHARED
        include/Vosgi.h
        src/Vosgi.cpp)
set_target_properties( Vosgi PROPERTIES OUTPUT_NAME ${CMAKE_PROJECT_NAME} )

include_directories( "include" )
#add_subdirectory( "lib" )
add_subdirectory( "src" )
add_subdirectory( "vendor" )