target_sources(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.c
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.h
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

add_library(${PROJECT_NAME}_lib STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.c
    ${CMAKE_CURRENT_SOURCE_DIR}/HelloWorld.h
)
add_library(son8::${PROJECT_NAME}_lib ALIAS ${PROJECT_NAME}_lib)
target_link_libraries(${PROJECT_NAME}_lib PRIVATE son8::c-header)
target_include_directories(${PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
