add_executable( nodeos main.cpp )

target_link_libraries( nodeos 
	PRIVATE appbase )

target_include_directories(nodeos PUBLIC ${CMAKE_CURRENT_BINARY_DIR})


