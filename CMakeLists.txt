cmake_minimum_required(VERSION 3.4)
project(snake)

set(CMAKE_C_COMPILER "g++")
set(CMAKE_SUPPRESS_REGENERATION 1)
set(CMAKE_USE_RELATIVE_PATHS ON)

SET(BUILD_DIR ./)
#SET(EXECUTABLE_OUTPUT_PATH ${BUILD_DIR}/${CMAKE_BUILD_TYPE})
#MESSAGE(STATUS " output path is ${EXECUTABLE_OUTPUT_PATH}")

aux_source_directory(src SRC_LIST)
aux_source_directory(src/controller SRC_LIST)
aux_source_directory(src/model SRC_LIST)
aux_source_directory(src/view SRC_LIST)
aux_source_directory(src/common SRC_LIST)

include_directories(
	src
	src/common
	src/controller
	src/model
	src/view
	
)

add_definitions(-g -std=c++14 -Wall)

# snake
aux_source_directory(demo/snake SRC_LIST)

add_executable(snake ${SRC_LIST} ${OBJ_LIST})
target_link_libraries(snake ncurses)
