cmake_minimum_required(VERSION 3.20)
project(cpp_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

function(add_lesson name source)
    add_executable(${name} ${source})
endfunction()

add_lesson(hello 01_fundamentals/examples/01_hello.cpp)
add_lesson(control_flow 01_fundamentals/examples/02_control_flow.cpp)
add_lesson(functions 01_fundamentals/examples/03_functions.cpp)
add_lesson(vector_basics 02_core/examples/01_vector_basics.cpp)
add_lesson(raii 03_oop/examples/01_raii.cpp)
add_lesson(stl_algorithms 04_stl/examples/01_algorithms.cpp)
add_lesson(modern_cpp 05_modern/examples/01_modern_cpp.cpp)
add_lesson(templates 06_templates/examples/01_templates.cpp)

