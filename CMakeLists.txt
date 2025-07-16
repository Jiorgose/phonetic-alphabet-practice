cmake_minimum_required(VERSION 3.10)
project(phoneticAlphabet VERSION 0.1.0 LANGUAGES C CXX)

add_executable(phoneticAlphabet phoneticAlphabet/main.cpp)

set(OUTPUT_DIR "${CMAKE_SOURCE_DIR}/bin/win")
set_target_properties(phoneticAlphabet PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/win")