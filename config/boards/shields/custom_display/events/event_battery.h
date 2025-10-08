#ifndef EVENT_BATTERY_H
#define EVENT_BATTERY_H

#include <stdint.h>
#include <stdbool.h>

/**
 * Initialize battery event system
 * 
 * @param battery_widget Pointer to the battery widget to update
 */
void event_battery_init(void *battery_widget);

/**
 * Update the battery status
 * 
 * @param percentage Battery level 0-100
 * @param charging Whether the battery is currently charging
 * 
 * This function should be called:
 * - In simulator: By timer callback
 * - In ZMK: By battery monitoring system
 */
void event_battery_set(uint8_t percentage, bool charging);

/**
 * Get the current battery percentage
 * 
 * @return Current battery level (0-100)
 */
uint8_t event_battery_get_percentage(void);

/**
 * Get the current charging status
 * 
 * @return true if charging, false otherwise
 */
bool event_battery_is_charging(void);

#endif