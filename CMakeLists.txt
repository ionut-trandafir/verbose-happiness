cmake_minimum_required (VERSION 2.6)
project (CppTraining)

# The version number.
set (CppTraining_VERSION_MAJOR 1)
set (CppTraining_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/CppTrainingConfig.h.in"
  "${PROJECT_BINARY_DIR}/CppTraining.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")

add_executable(working working.cpp)
add_executable(func func.cpp)
