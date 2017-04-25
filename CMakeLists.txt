cmake_minimum_required(VERSION 2.8)

#log4cplus
include_directories("/usr/local/include")
link_directories("/usr/local/lib64")

set(CMAKE_VERBOSE_MAKEFILE on)
enable_testing()
enable_language(C)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "debug")
endif()

if(${CMAKE_BUILD_TYPE} STREQUAL "debug")
    set(CMAKE_C_FLAGS_DEBUG "-g -static -Wall -std=gnu99 -O0")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -static -Wall -std=gnu++98 -O0")
else()
    set(CMAKE_C_FLAGS_RELEASE "-O2 -DNDEBUG -std=gnu99")
    set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG -std=gnu++98")
endif()

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(src)