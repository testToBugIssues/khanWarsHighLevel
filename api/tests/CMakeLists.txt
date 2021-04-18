add_executable(timeout timeout.cpp)
target_link_libraries(timeout PRIVATE api)
target_link_libraries(timeout PRIVATE Qt6::Test)
add_test(NAME timeout COMMAND timeout)
