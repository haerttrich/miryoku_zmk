#include "event_battery.h"
#include "../widgets/widget_battery.h"

// state
static uint8_t current_percentage = 100;
static bool is_charging = false;
static lv_obj_t *battery_widget = NULL;

void event_battery_init(void *widget) {
    battery_widget = (lv_obj_t *)widget;
    current_percentage = 100;
    is_charging = false;
    
    // Set initial battery display
    if (battery_widget) {
        widget_battery_update(battery_widget, 100, false);
    }
}

void event_battery_set(uint8_t percentage, bool charging) {
    // Clamp percentage to valid range
    if (percentage > 100) {
        percentage = 100;
    }
    
    current_percentage = percentage;
    is_charging = charging;
    
    // Update the widget
    if (battery_widget) {
        widget_battery_update(battery_widget, percentage, charging);
    }
}

uint8_t event_battery_get_percentage(void) {
    return current_percentage;
}

bool event_battery_is_charging(void) {
    return is_charging;
}