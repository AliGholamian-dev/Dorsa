cmake_minimum_required(VERSION 3.10)
project(DorsaCore C)

add_library(${PROJECT_NAME} STATIC
        Geometry/Size2DUInt16.h
        Pixel/PixelFormat.h
        Pixel/PixelFormat.c
        Pixel/PixelRGB565.h
        Color/ColorFormat.h
        Color/ColorRGBA8888.h
        Color/Color.h
        Color/Color.c
        Dorsa.h
        Dorsa.c
        Platform/Platform.h
        Graphics/Graphics.h)

target_link_libraries(${PROJECT_NAME} PUBLIC Common)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/..)
