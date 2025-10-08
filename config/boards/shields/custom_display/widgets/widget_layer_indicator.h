#ifndef WIDGET_LAYER_INDICATOR_H
#define WIDGET_LAYER_INDICATOR_H

#include "../common.h"

/**
 * Create the layer indicator widget
 * 
 * @param parent The parent object to attach the widget to
 * @param x X position
 * @param y Y position
 * @return Pointer to the created widget object
 */
lv_obj_t *widget_layer_indicator_create(lv_obj_t *parent, int16_t x, int16_t y);

/**
 * Update the layer name
 * 
 * @param widget Pointer to the layer widget
 * @param layer_name Name of the current layer (e.g., "BASE", "NAV", "NUM")
 */
void widget_layer_indicator_update(lv_obj_t *widget, const char *layer_name);

#endif