cmake_minimum_required(VERSION 3.26.0)

project(OpenGLProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library
add_library(custom-lib
    src/person.cpp    
)

target_include_directories(custom-lib
    PUBLIC
    ${PROJECT_SOURCE_DIR}/includes
)

# Executable
add_executable(${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    custom-lib
)