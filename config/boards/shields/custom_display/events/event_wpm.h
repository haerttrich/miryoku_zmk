#ifndef EVENT_WPM_H
#define EVENT_WPM_H

#include <stdint.h>

/**
 * Initialize WPM event system
 * 
 * @param wpm_widget Pointer to the WPM widget to update
 */
void event_wpm_init(void *wpm_widget);

/**
 * Update the WPM value
 * 
 * @param wpm Current words per minute value
 * 
 * This function should be called:
 * - In simulator: By timer callback
 * - In ZMK: By keystroke tracking system
 */
void event_wpm_set(uint16_t wpm);

/**
 * Get the current WPM value
 * 
 * @return Current WPM
 */
uint16_t event_wpm_get(void);

#endif