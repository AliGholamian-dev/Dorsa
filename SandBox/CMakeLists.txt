cmake_minimum_required(VERSION 3.10)
project(DorsaSandBox C)

add_executable(${PROJECT_NAME} SandBox.c)
target_link_libraries(${PROJECT_NAME} PRIVATE DorsaCore)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
