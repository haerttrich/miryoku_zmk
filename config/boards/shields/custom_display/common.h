/**
 * common definitions shared across widgets
 */

#ifndef COMMON_H
#define COMMON_H

// detect environment
#ifdef CONFIG_ZMK_DISPLAY
    // ZMK environment
    #define IS_ZMK 1
    #include <zephyr/kernel.h>
    #include <lvgl.h>
#else
    // Simulator environment
    #define IS_ZMK 0
    #include "lvgl/lvgl.h"
#endif

// detect lvgl version
#if LVGL_VERSION_MAJOR >= 9
    #define IS_LVGL_V9 1
#else
    #define IS_LVGL_V9 0
#endif

// Ensure expected LVGL versions
#if IS_ZMK && IS_LVGL_V9
    #error "ZMK upgraded to LVGL v9! Update image descriptors and API calls throughout codebase."
#endif

// Type compatibility between LVGL versions
// #define LV_IMG_DSC_T lv_img_dsc_t

// Display dimensions
#define SCREEN_WIDTH  68
#define SCREEN_HEIGHT 160
#define DISP_BUF_SIZE (SCREEN_WIDTH * 10)

// Layout constants
#define PADDING 4

// Color definitions that work for both 16-bit and 1-bit
#define COLOR_BG lv_color_black()
#define COLOR_FG lv_color_white()

// font handling 
LV_FONT_DECLARE(font_montserrat_bold_20);
LV_FONT_DECLARE(font_montserrat_regular_12);

#define FONT_LAYER &font_montserrat_bold_20
#define FONT_STATUS &font_montserrat_regular_12

#endif 