cmake_minimum_required(VERSION 2.8.8)
project(arduino-lib-googletest-sample)

file(GLOB SRCS "src/*.cpp")
add_library(arduino-googletest-sample STATIC ${SRCS})

target_include_directories(arduino-googletest-sample PUBLIC "src")

set_target_properties(arduino-googletest-sample
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/dist/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/dist/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/dist/bin"
)

option(test "build all tests" OFF)

if(test)
  add_subdirectory(test)
endif()
