cmake_minimum_required(VERSION 3.22.20211116-g49c870b)

project(main)

add_executable(main src/main.cc)

target_compile_features(main PRIVATE cxx_std_17)
