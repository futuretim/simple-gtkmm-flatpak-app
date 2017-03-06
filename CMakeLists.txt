# Set the name and the supported language of the project
project(simple-gtkmm-app)

# Set the minimum version of cmake required to build this project
cmake_minimum_required(VERSION 3.0)

SET( CMAKE_CXX_FLAGS  "-std=c++11" )

# Use the package PkgConfig to detect GTK+ headers/library files
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(GTKMM gtkmm-3.0) # look into FindPkgConfig.cmake, 


# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
include_directories(${GTK3_INCLUDE_DIRS} ${GTKMM_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS} ${GTKMM_LIBRARY_DIRS})

# Add other flags to the compiler
add_definitions(${GTK3_CFLAGS_OTHER})

# Add an executable compiled from hello.c
add_executable(simple-gtkmm-app main.cpp MainWindow.cpp)

# Link the target to the GTK+ libraries
target_link_libraries(simple-gtkmm-app ${GTK3_LIBRARIES} ${GTKMM_LIBRARIES})

install(TARGETS simple-gtkmm-app DESTINATION bin)
install(FILES main.glade DESTINATION bin)