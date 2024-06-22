option(BUILD_SHARED_LIBS "Build using shared libraries" TRUE)

project(foo
    VERSION 0.1.0.0
    DESCRIPTION "a very nice Template"
    LANGUAGES C
)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} 
    PRIVATE
    "src/foo.c"
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
    "src"
    PUBLIC
    "include"
)

target_compile_definitions(${PROJECT_NAME} 
    PRIVATE 
    FOO_EXPORT
)

set_target_properties(${PROJECT_NAME} 
    PROPERTIES
    POSITION_INDEPENDENT_CODE ${BUILD_SHARED_LIBS}
)