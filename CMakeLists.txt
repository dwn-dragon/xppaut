cmake_minimum_required(VERSION 3.10.0)
project(xppaut VERSION 0.1.0 LANGUAGES C CXX)

find_package(X11 REQUIRED)

file(GLOB SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*")
list(FILTER SOURCES EXCLUDE REGEX "\\.dis$")

add_executable(xppaut ${SOURCES})

target_include_directories(xppaut 
	PRIVATE include/ include/old ${X11_INCLUDE_DIRS}
)
target_link_libraries(xppaut
	PRIVATE ${X11_LIBRARIES}
	PRIVATE m
)

target_compile_definitions(xppaut PRIVATE
    _XOPEN_SOURCE=600
    NOERRNO
    NON_UNIX_STDIO
    AUTO
    CVODE_YES
    HAVEDLL
    MYSTR1=8.0
    MYSTR2=0
)

target_compile_options(xppaut PRIVATE
    -Wall
    -pedantic
    -O2
	-Wno-error=implicit-function-declaration
	$<$<COMPILE_LANGUAGE:C>:-fcommon>
)
