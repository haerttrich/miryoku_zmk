#include "event_signal.h"

// state
static signal_status_t current_status = SIGNAL_STATUS_USB;
static uint8_t current_bt_profile = 0;
static lv_obj_t *signal_widget = NULL;

void event_signal_init(void *widget) {
    signal_widget = (lv_obj_t *)widget;
    current_status = SIGNAL_STATUS_USB;
    current_bt_profile = 0;
    
    // Set initial signal display
    if (signal_widget) {
        widget_signal_update(signal_widget, SIGNAL_STATUS_USB, 0);
    }
}

void event_signal_set_usb(void) {
    current_status = SIGNAL_STATUS_USB;
    current_bt_profile = 0;
    
    // Update the widget
    if (signal_widget) {
        widget_signal_update(signal_widget, SIGNAL_STATUS_USB, 0);
    }
}

void event_signal_set_bluetooth(uint8_t profile) {
    // Clamp profile to valid range (0-3)
    if (profile > 3) {
        profile = 0;
    }
    
    current_status = SIGNAL_STATUS_BLUETOOTH;
    current_bt_profile = profile;
    
    // Update the widget
    if (signal_widget) {
        widget_signal_update(signal_widget, SIGNAL_STATUS_BLUETOOTH, profile);
    }
}

signal_status_t event_signal_get_status(void) {
    return current_status;
}

uint8_t event_signal_get_bt_profile(void) {
    return current_bt_profile;
}