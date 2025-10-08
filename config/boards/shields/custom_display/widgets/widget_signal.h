#ifndef WIDGET_SIGNAL_H
#define WIDGET_SIGNAL_H

#include <stdint.h>
#include "../common.h"

typedef enum {
    SIGNAL_STATUS_DISCONNECTED,
    SIGNAL_STATUS_USB,
    SIGNAL_STATUS_BLUETOOTH
} signal_status_t;

typedef struct {
    lv_obj_t *label_text;
    lv_obj_t *label_status;
    lv_obj_t *icon_usb;
    lv_obj_t *icon_bluetooth;
} signal_widget_t;

/**
 * Create the signal widget
 * 
 * @param parent The parent object to attach the widget to
 * @param x X position
 * @param y Y position
 * @return Pointer to the created widget object
 */
lv_obj_t *widget_signal_create(lv_obj_t *parent, int16_t x, int16_t y);

/**
 * Update the signal status
 * 
 * @param widget Pointer to the signal widget
 * @param status Connection status
 * @param bt_profile Bluetooth profile number (0-4), only used when status is BLUETOOTH
 */
void widget_signal_update(lv_obj_t *widget, signal_status_t status, uint8_t bt_profile);

#endif