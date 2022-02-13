cmake_minimum_required(VERSION 2.8)

project(first)

set(first_src main.cpp CIntN.cpp operators.cpp AT.cpp)
set(first_hdr head.hpp CIntN.hpp AT.hpp CIntN0.hpp CIntN1.hpp)

add_executable(${PROJECT_NAME} ${first_src} ${first_hdr})

