cmake_minimum_required(VERSION 3.8)

project(HelloWorld)

add_executable(${PROJECT_NAME})
add_subdirectory(source)
add_subdirectory(submodules/c-header)

target_link_libraries(${PROJECT_NAME} PRIVATE c-header)
