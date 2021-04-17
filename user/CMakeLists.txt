add_library(user user.cpp)
target_link_libraries(user PUBLIC api)
target_include_directories(user PUBLIC .)
