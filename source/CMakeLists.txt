target_sources(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.c
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.h
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

add_library(${PROJECT_NAME}_lib STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.c
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.h
)
target_link_libraries(${PROJECT_NAME}_lib PRIVATE son8::c-header)
