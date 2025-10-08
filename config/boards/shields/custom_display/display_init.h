/**
 * Corne Custom Display - ZMK Integration
 * Display initialization and event handling
 */

#ifndef DISPLAY_INIT_H
#define DISPLAY_INIT_H

#include <lvgl.h>
#include <zephyr/kernel.h>

/**
 * Initialize the custom display
 * Creates all widgets and sets up event listeners
 * 
 * Call this from your ZMK initialization code
 */
int custom_display_init(void);

/**
 * Update layer display
 * Called by ZMK layer state change event
 */
void custom_display_update_layer(uint8_t layer_index);

/**
 * Update battery display
 * Called by ZMK battery state change event
 */
void custom_display_update_battery(uint8_t percentage, bool charging);

/**
 * Update connection status display
 * Called by ZMK USB/BT connection events
 */
void custom_display_update_connection_usb(void);
void custom_display_update_connection_bt(uint8_t profile);

/**
 * Update WPM display
 * Called by ZMK on keystroke events
 */
void custom_display_update_wpm(uint16_t wpm);

#endif // DISPLAY_INIT_H