project (AppBase)

cmake_minimum_required( VERSION 3.5 )

file(GLOB HEADERS "include/appbase/*.hpp")

add_library( appbase 
	     application.cpp
	     ${HEADERS}
	   )

