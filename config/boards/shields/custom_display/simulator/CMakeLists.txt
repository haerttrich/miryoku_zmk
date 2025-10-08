cmake_minimum_required(VERSION 3.13)
project(display_simulator)

set(CMAKE_C_STANDARD 11)

# Find SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# LVGL Configuration
set(LV_CONF_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lv_conf.h CACHE STRING "" FORCE)

# Add LVGL
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lvgl lvgl)

# Display source files (from parent directory)
set(DISPLAY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/..)
file(GLOB_RECURSE DISPLAY_SOURCES
    ${DISPLAY_DIR}/widgets/*.c
    ${DISPLAY_DIR}/events/*.c
    ${DISPLAY_DIR}/screens/*.c
    ${DISPLAY_DIR}/assets/*.c
)

# Exclude ZMK-specific display_init.c
list(FILTER DISPLAY_SOURCES EXCLUDE REGEX "display_init.c$")

# SDL driver for LVGL
set(LV_DRIVERS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lv_drivers)
file(GLOB LV_DRIVER_SOURCES
    ${LV_DRIVERS_DIR}/sdl/*.c
)

# Simulator executable
add_executable(display_simulator
    main.c
    ${DISPLAY_SOURCES}
    ${LV_DRIVER_SOURCES}
)

target_include_directories(display_simulator PRIVATE
    ${DISPLAY_DIR}
    ${LV_DRIVERS_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(display_simulator
    lvgl
    ${SDL2_LIBRARIES}
    m
    pthread
)

# Compiler flags
target_compile_options(display_simulator PRIVATE
    -Wall
    -Wextra
    -DLV_CONF_INCLUDE_SIMPLE
)