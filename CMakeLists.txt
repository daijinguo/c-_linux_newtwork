cmake_minimum_required(VERSION 3.4)

project(network)

set(CMAKE_CXX_STANDARD 11)


include_directories(
        include
)


set(SOURCE_FILES
        include/core/IProcess.h
        main.cpp
        source/core/IProcess.cpp
)

add_executable(network ${SOURCE_FILES})

###cmake_minimum_required(VERSION 3.6)
###project(network)
###
###set(CMAKE_CXX_STANDARD 11)
###
###message("*************************************************************************************************************")
###message("This project will use the makefile to mange source files")
###message("Source dir:" ${network_SOURCE_DIR})
###message("Binary dir:" ${PROJECT_BINARY_DIR})
###message("*************************************************************************************************************")
###
###add_custom_target(network COMMAND make -C ${network_SOURCE_DIR}
###        CLION_EXE_DIR=${PROJECT_BINARY_DIR} && cp ${network_SOURCE_DIR}/network ./
###        )