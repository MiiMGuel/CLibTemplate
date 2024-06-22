cmake_minimum_required(VERSION 3.17)

option(FOO_SHARED "Build using shared libraries" TRUE)

project(foo
    VERSION 0.1.0.0
    DESCRIPTION "a very nice Template"
    LANGUAGES C
)

configure_file(foo_config.h.in foo_config.h)

if (${FOO_SHARED})
    add_library(${PROJECT_NAME} SHARED)
else()
    add_library(${PROJECT_NAME} STATIC)
endif()

target_sources(${PROJECT_NAME} 
    PRIVATE
    "src/foo.c"
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    "src"
    "${PROJECT_BINARY_DIR}"
    PUBLIC
    "include"
)

target_compile_definitions(${PROJECT_NAME} 
    PRIVATE 
    FOO_EXPORT
)

set_target_properties(${PROJECT_NAME} 
    PROPERTIES
    POSITION_INDEPENDENT_CODE ${FOO_SHARED}
)

add_executable(basic
    "example/basic/main.c"
)

target_link_libraries(basic
    PRIVATE
    foo
)

set_target_properties(basic
    PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/example/basic"
)