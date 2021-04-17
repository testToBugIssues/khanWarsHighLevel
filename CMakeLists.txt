cmake_minimum_required(VERSION 3.19.3)
project(khanWars)
enable_testing()


find_package(Qt6 6.0.3 EXACT REQUIRED)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-fPIC)

add_subdirectory(api)
add_subdirectory(user)
add_subdirectory(console)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE Qt6::core)
target_link_libraries(main PRIVATE user)
target_link_libraries(main PRIVATE console)
target_link_libraries(main PRIVATE api)




add_test(NAME findUsernameAndPassword COMMAND main)
set(sucessTestEnv "KHANWARS_USERNAME=petrolifero" "KHANWARS_PASSWORD=123")
set_tests_properties(findUsernameAndPassword PROPERTIES ENVIRONMENT "${sucessTestEnv}")

add_test(NAME dontFindUsernameOrPassword COMMAND main)
set_tests_properties(dontFindUsernameOrPassword PROPERTIES WILL_FAIL true)
