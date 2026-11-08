add_library(monel_interpreter
    include/monel/interpreter/op_code.hpp
    src/op_code.cpp
    include/monel/interpreter/runtime.hpp
    src/step.cpp
)

target_include_directories(monel_interpreter
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(monel_interpreter
    PRIVATE
)