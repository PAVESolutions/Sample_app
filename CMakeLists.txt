cmake_minimum_required(VERSION 3.16)
project(sample_app VERSION 0.1.0)
cmake_policy(SET CMP0072 NEW)

# Set the path to the library directory
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)

find_package(OpenGL REQUIRED)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} 
    ${OPENGL_INCLUDE_DIRS} 
    include
)

add_executable(sample_app
    src/main.cpp

)

target_link_libraries(
    sample_app PRIVATE ${LIB_DIR}/libImageUnwrapper.so
    ${OpenCV_LIBS}
)
