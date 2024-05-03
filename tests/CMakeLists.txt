add_definitions(-D_CRT_SECURE_NO_WARNINGS)
link_libraries(son8::c-header ${PROJECT_NAME}_lib)

add_executable(test-HelloWorld test-HelloWorld.c)
add_test(NAME test-HelloWorld COMMAND test-HelloWorld)
