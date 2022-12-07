cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(ex1 LANGUAGES CXX)
add_executable(ex1)

add_subdirectory(include)
add_subdirectory(src)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

target_link_options(${PROJECT_NAME} PRIVATE "-fuse-ld=gold")