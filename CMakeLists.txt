cmake_minimum_required(VERSION 4.4.5)

project(monel
    VERSION 0.1.0
    LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(external/EmIL)

add_subdirectory(lib/interpreter)

add_executable(monel
    src/main.cpp
)

target_link_libraries(monel PRIVATE
    monel_interpreter
)

