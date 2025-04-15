
cmake_minimum_required(VERSION 3.10)
project(NodeImageEditor)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(NodeImageEditor ${SOURCES})
target_link_libraries(NodeImageEditor ${OpenCV_LIBS} glfw GL dl pthread)
