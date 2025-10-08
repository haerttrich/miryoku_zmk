#ifndef LV_CONF_H
#define LV_CONF_H

#include <stdint.h>

// Color settings
#define LV_COLOR_DEPTH 16
#define LV_COLOR_16_SWAP 0

// Memory settings
#define LV_MEM_CUSTOM 0
#define LV_MEM_SIZE (32U * 1024U)

// Display settings
#define LV_DISP_DEF_REFR_PERIOD 30

// Input device settings
#define LV_INDEV_DEF_READ_PERIOD 30

// Feature usage
#define LV_USE_ANIMATION 1
#define LV_USE_SHADOW 1
#define LV_USE_BLEND_MODES 1
#define LV_USE_OPA_SCALE 1
#define LV_USE_IMG_TRANSFORM 1

// Enable widgets needed
#define LV_USE_ARC 1
#define LV_USE_BAR 1
#define LV_USE_BTN 1
#define LV_USE_BTNMATRIX 1
#define LV_USE_CANVAS 1
#define LV_USE_CHECKBOX 1
#define LV_USE_DROPDOWN 1
#define LV_USE_IMG 1
#define LV_USE_LABEL 1
#define LV_USE_LINE 1
#define LV_USE_ROLLER 1
#define LV_USE_SLIDER 1
#define LV_USE_SWITCH 1
#define LV_USE_TEXTAREA 1
#define LV_USE_TABLE 1

// Font settings
#define LV_FONT_MONTSERRAT_12 1
#define LV_FONT_MONTSERRAT_14 1
#define LV_FONT_MONTSERRAT_16 1
#define LV_FONT_MONTSERRAT_18 1
#define LV_FONT_MONTSERRAT_20 1
#define LV_FONT_DEFAULT &lv_font_montserrat_14

// Logging
#define LV_USE_LOG 1
#define LV_LOG_LEVEL LV_LOG_LEVEL_WARN
#define LV_LOG_PRINTF 1

// Debug
#define LV_USE_ASSERT_NULL 1
#define LV_USE_ASSERT_MALLOC 1
#define LV_USE_ASSERT_MEM_INTEGRITY 0
#define LV_USE_ASSERT_OBJ 0
#define LV_USE_ASSERT_STYLE 0

#endif