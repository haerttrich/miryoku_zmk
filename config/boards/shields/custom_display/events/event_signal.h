#ifndef EVENT_SIGNAL_H
#define EVENT_SIGNAL_H

#include <stdint.h>
#include "../widgets/widget_signal.h"

/**
 * Initialize signal event system
 * 
 * @param signal_widget Pointer to the signal widget to update
 */
void event_signal_init(void *signal_widget);

/**
 * Set connection to USB
 * 
 * This function should be called:
 * - In simulator: By timer callback
 * - In ZMK: When USB connection is detected
 */
void event_signal_set_usb(void);

/**
 * Set connection to Bluetooth with specific profile
 * 
 * @param profile Bluetooth profile number (0-3, displays as 1-4)
 * 
 * This function should be called:
 * - In simulator: By timer callback
 * - In ZMK: When Bluetooth profile is activated
 */
void event_signal_set_bluetooth(uint8_t profile);

/**
 * Get the current connection status
 * 
 * @return Current signal status
 */
signal_status_t event_signal_get_status(void);

/**
 * Get the current Bluetooth profile
 * 
 * @return Current BT profile (0-3), or 0 if USB
 */
uint8_t event_signal_get_bt_profile(void);

#endif