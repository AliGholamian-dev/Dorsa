# Common Library--------------------------------------------------------------------
add_library(
        Common
        INTERFACE
        Common/NameManglingGuard.h
        Common/CompilerDetection.h
        Common/BasicDataTypes.h
        Common/Keywords.h
        Common/Endian.h
        Common/Packed.h)
target_include_directories(Common INTERFACE ${CMAKE_CURRENT_LIST_DIR})
# Common Library--------------------------------------------------------------------

# SDL Library--------------------------------------------------------------------
if(Dorsa_Platform STREQUAL "SDL")
    set(SDL_STATIC ON CACHE BOOL "Build SDL statically" FORCE)
    set(SDL_SHARED OFF CACHE BOOL "Do not build SDL shared library" FORCE)
    add_subdirectory(SDL)
endif()
# SDL Library--------------------------------------------------------------------

