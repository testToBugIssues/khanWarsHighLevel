add_library(console
		STATIC
		console.cpp
		console.hpp)
target_include_directories(console PUBLIC .)
target_link_libraries(console PUBLIC Qt6::Core)
target_link_libraries(console PRIVATE user)
