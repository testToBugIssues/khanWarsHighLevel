add_library(api STATIC api.cpp)


#I know this is the worst, but now (03/12/2021)
#the conan qt dont generate separated components
target_link_libraries(api PUBLIC Qt6)

target_include_directories(api PUBLIC .)

add_subdirectory(tests)
