cmake_minimum_required(VERSION 3.10)
project(Dorsa C)

set(CMAKE_C_STANDARD 99)

if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    set(Dorsa_Is_Top_Level_Project TRUE)
else()
    set(Dorsa_Is_Top_Level_Project FALSE)
endif()


set(Dorsa_Platform CUSTOM CACHE STRING "A more specific platform selector to choose from.")
set_property(CACHE Dorsa_Platform PROPERTY STRINGS SDL CUSTOM)

add_subdirectory(Vendor)
add_subdirectory(Core)
if (Dorsa_Is_Top_Level_Project)
    add_subdirectory(SandBox)
endif ()
