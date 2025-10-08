#ifndef SCREEN_LAYOUTS_H
#define SCREEN_LAYOUTS_H

#include <lvgl.h>

/**
 * Left screen widget references
 * Used to access widgets for event updates
 * Note: Pointers may be NULL if widget is disabled in config
 */
typedef struct {
    lv_obj_t *layer_widget;
    lv_obj_t *signal_widget;
    lv_obj_t *battery_widget;
} left_screen_widgets_t;

/**
 * Right screen widget references
 * Used to access widgets for event updates
 * Note: Pointers may be NULL if widget is disabled in config
 */
typedef struct {
    lv_obj_t *layer_widget;
    lv_obj_t *wpm_widget;
    lv_obj_t *battery_widget;
} right_screen_widgets_t;

/**
 * Create left screen layout based on display_config.h
 * 
 * @param parent The parent LVGL object (screen)
 * @return Pointer to static widget references structure
 */
left_screen_widgets_t *screen_create_left(lv_obj_t *parent);

/**
 * Create right screen layout based on display_config.h
 * 
 * @param parent The parent LVGL object (screen)
 * @return Pointer to static widget references structure
 */
right_screen_widgets_t *screen_create_right(lv_obj_t *parent);

#endif