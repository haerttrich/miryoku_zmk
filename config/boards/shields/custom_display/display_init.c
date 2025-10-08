#ifdef IS_ZMK

#include "display_init.h"
#include "common.h"
#include "screens/screen_layouts.h"

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/layer_state_changed.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/keymap.h>
#include <zmk/usb.h>
#include <zmk/ble.h>
#include <zmk/wpm.h>

#include "events/event_layer.h"
#include "events/event_wpm.h"
#include "events/event_battery.h"
#include "events/event_signal.h"

// LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);
LOG_MODULE_REGISTER(custom_display, CONFIG_ZMK_LOG_LEVEL);

// ... rest of your display_init.c code ...

// WPM update handler
static struct k_work_delayable wpm_update_work;

static void wpm_update_handler(struct k_work *work) {
    uint16_t wpm = zmk_wpm_get_state();
    custom_display_update_wpm(wpm);
    
    k_work_schedule(&wpm_update_work, K_MSEC(1000));
}

int custom_display_init(void) {
    lv_obj_t *screen = lv_scr_act();
    if (screen == NULL) {
        LOG_ERR("Failed to get active screen");
        return -1;
    }
    
#if IS_LEFT_KEYBOARD_SIDE
    screen_create_left(screen);
#else
    screen_create_right(screen);
    
    // Start periodic WPM updates (only on right screen)
    k_work_init_delayable(&wpm_update_work, wpm_update_handler);
    k_work_schedule(&wpm_update_work, K_MSEC(1000));
#endif
    
    uint8_t current_layer = zmk_keymap_highest_layer_active();
    custom_display_update_layer(current_layer);
    
    LOG_INF("Custom display initialized");
    return 0;
}

// ... rest of event listeners ...

SYS_INIT(custom_display_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);

#endif