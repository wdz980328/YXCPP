#cmake_minimum_required(VERSION 4.3)
#project(YXCPP)
#
#set(CMAKE_CXX_STANDARD 20)
#
#add_executable(YXCPP main.cpp
#        01_Base/demo02_变量.cpp)




cmake_minimum_required(VERSION 4.3)
project(YXCPP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE ALL_CPP_SOURCES *.cpp)

foreach(cpp_file ${ALL_CPP_SOURCES})
    get_filename_component(file_dir ${cpp_file} DIRECTORY)
    get_filename_component(exe_name ${cpp_file} NAME_WE)

    add_executable(${exe_name} ${cpp_file})
    # 输出到对应源码目录结构的bin文件夹
    set_target_properties(${exe_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/${file_dir}
    )
endforeach()