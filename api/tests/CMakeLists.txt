add_executable(timeout timeout.cpp)
target_link_libraries(timeout api)
add_test(NAME timeout COMMAND timeout)
