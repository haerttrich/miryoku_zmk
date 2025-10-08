#ifndef EVENT_LAYER_H
#define EVENT_LAYER_H

#include <stdint.h>

/**
 * Set the active layer by index
 * 
 * @param layer_index The index of the active layer (0-6 for your setup)
 * 
 * This function should be called whenever the layer changes:
 * - In simulator: Called by timer callback
 * - In ZMK: Called by layer change event handler
 */
void event_layer_set_active(uint8_t layer_index);

/**
 * Get the current layer index
 * 
 * @return Current layer index
 */
uint8_t event_layer_get_active(void);

/**
 * Initialize layer event system
 * 
 * @param layer_widget Pointer to the layer widget to update
 */
void event_layer_init(void *layer_widget);

#endif 