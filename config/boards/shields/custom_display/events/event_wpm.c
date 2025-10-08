#include "event_wpm.h"
#include "../widgets/widget_wpm.h"


#if IS_ZMK
    #include <zmk/wpm.h>
#else
    static uint16_t keystroke_count = 0;
    static uint32_t last_calculation_time = 0;
#endif

// state
static uint16_t current_wpm = 0;
static lv_obj_t *wpm_widget = NULL;


void event_wpm_init(void *widget) {
    wpm_widget = (lv_obj_t *)widget;
    current_wpm = 0;

#if !IS_ZMK
    keystroke_count = 0; 
    last_calculation_time = 0;
#endif
    
    // Set initial WPM display
    if (wpm_widget) {
#if IS_ZMK
        widget_wpm_update(wpm_widget, zmk_wpm_get_state());
#else
        widget_wpm_update(wpm_widget, 0);
#endif
    }
}

void event_wpm_set(uint16_t wpm) {
    current_wpm = wpm;
    
    // Update the widget
    if (wpm_widget) {
        widget_wpm_update(wpm_widget, wpm);
    }
}

uint16_t event_wpm_get(void) {
#if IS_ZMK
    return zmk_wpm_get_state();
#else
    return current_wpm;
#endif
}
