cmake_minimum_required(VERSION 3.5)
project(demoEd)

set(CMAKE_CXX_STANDARD 11)

#----------------------------------------#
#The version number.
set (APP_VERSION_MAJOR 1)
set (APP_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/APPRevision.h.in"
  "${PROJECT_BINARY_DIR}/APPRevision.h"
  )
#---------------------------------------#

# add the binary tree to the search path for include files
# so that we will find APPRevison.h
include_directories("${PROJECT_BINARY_DIR}")

#---------------------------------------#

# should we use our own math functions
option(USE_MYMATH "Use tutorial provided math implementation" ON)
# add the MathFunctions library?
if (USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
    add_subdirectory (MathFunctions)
    set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif ()


#---------------------------------------#
set(SOURCE_FILES main.cpp)

add_executable(demoEd ${SOURCE_FILES})

target_link_libraries (demoEd  ${EXTRA_LIBS})

#---------------------------------------#
message("**---------default build type is ${PROJECT_BINARY_DIR} ----***")
message("**---------default build type is ${PROJECT_SOURCE_DIR} ----***")