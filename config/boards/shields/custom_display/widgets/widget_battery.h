#ifndef WIDGET_BATTERY_H
#define WIDGET_BATTERY_H

#include <stdbool.h>
#include "../common.h"

typedef struct {
    lv_obj_t *label_text;
    lv_obj_t *label_value;
    lv_obj_t *icon_charge;
} battery_widget_t;

/**
 * Create the battery widget
 * 
 * @param parent The parent object to attach the widget to
 * @param x X position
 * @param y Y position
 * @return Pointer to the created widget object
 */
lv_obj_t *widget_battery_create(lv_obj_t *parent, int16_t x, int16_t y);

/**
 * Update the battery level
 * 
 * @param widget Pointer to the battery widget
 * @param percentage Battery level 0-100
 * @param charging Whether the battery is currently charging
 */
void widget_battery_update(lv_obj_t *widget, uint8_t percentage, bool charging);

#endif