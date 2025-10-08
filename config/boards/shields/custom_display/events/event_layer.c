#include "event_layer.h"
#include "../widgets/widget_layer_indicator.h"

// Layer names mapping
static const char *layer_names[] = {"BSE", "MED", "TAP", "BTN", "NAV", "MSE", "SYM", "NUM", "FKT"};
static const int num_layers = 9;

// state
static uint8_t current_layer_index = 0;
static lv_obj_t *layer_widget = NULL;

void event_layer_init(void *widget) {
    layer_widget = (lv_obj_t *)widget;
    current_layer_index = 0;
    
    // Set initial layer display
    if (layer_widget) {
        widget_layer_indicator_update(layer_widget, layer_names[0]);
    }
}

void event_layer_set_active(uint8_t layer_index) {
    if (layer_index >= num_layers) {
        layer_index = 0;  // Fallback to base layer
    }
    
    current_layer_index = layer_index;
    
    // Update the widget
    if (layer_widget) {
        widget_layer_indicator_update(layer_widget, layer_names[layer_index]);
    }
}

uint8_t event_layer_get_active(void) {
    return current_layer_index;
}