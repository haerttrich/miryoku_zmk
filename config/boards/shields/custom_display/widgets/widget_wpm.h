#ifndef WIDGET_WPM_H
#define WIDGET_WPM_H

#include "../common.h"

typedef struct {
    lv_obj_t *label_text;
    lv_obj_t *label_value;
} wpm_widget_t;

/**
 * Create the WPM widget
 * 
 * @param parent The parent object to attach the widget to
 * @param x X position
 * @param y Y position
 * @return Pointer to the created widget object
 */
lv_obj_t *widget_wpm_create(lv_obj_t *parent, int16_t x, int16_t y);

/**
 * Update the WPM value
 * 
 * @param widget Pointer to the WPM widget
 * @param wpm Current words per minute value
 */
void widget_wpm_update(lv_obj_t *widget, uint16_t wpm);

#endif