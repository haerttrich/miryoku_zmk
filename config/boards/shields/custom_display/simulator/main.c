#include <stdbool.h>
#include "lvgl/lvgl.h"
#include <SDL2/SDL.h>
#include "lv_drivers/sdl/sdl.h"
#include "display/common.h"
#include "display/screens/screen_layouts.h"
#include "display/events/event_layer.h"
#include "display/events/event_signal.h"
#include "display/events/event_wpm.h"
#include "display/events/event_battery.h"

// --- DEFINES

// Screen selection: 1 - left, 0 - right
#define IS_LEFT_SCREEN 0

// Initialize the Hardware Abstraction Layer (HAL)
static lv_disp_t * hal_init(int32_t w, int32_t h) {
    lv_group_set_default(lv_group_create());

    // Initialize SDL first
    sdl_init();

    // Set up display buffer
    static lv_disp_draw_buf_t disp_buf;
    static lv_color_t buf1[DISP_BUF_SIZE];
    static lv_color_t buf2[DISP_BUF_SIZE];
    lv_disp_draw_buf_init(&disp_buf, buf1, buf2, w * 10);

    // Register display driver
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf = &disp_buf;
    disp_drv.flush_cb = sdl_display_flush;
    disp_drv.hor_res = w;
    disp_drv.ver_res = h;
    lv_disp_t * disp = lv_disp_drv_register(&disp_drv);

    return disp;
}

// Timer callback to simulate layer changes
static void layer_change_timer_cb(lv_timer_t *timer) {
    (void)timer;
    
    uint8_t layer = event_layer_get_active();
    layer = (layer + 1) % 9;
    printf("Layer changing to: %d\n", layer);
    event_layer_set_active(layer);
}

// Timer callback to simulate signal changes
static void signal_update_timer_cb(lv_timer_t *timer) {
    (void)timer;
    
    static int cycle = 0;
    cycle = (cycle + 1) % 5;
    printf("Signal update cycle: %d\n", cycle);
    
    if (cycle == 0) {
        event_signal_set_usb();
    } else {
        event_signal_set_bluetooth((cycle - 1) % 4);
    }
}

// Timer callback to simulate wpm changes
static void wpm_update_timer_cb(lv_timer_t *timer) {
    (void)timer;
    
    uint16_t wpm = (event_wpm_get() + 5) % 120;
    printf("WPM update: %d\n", wpm);
    event_wpm_set(wpm);
}

// Timer callback to simulate battery charge changes
static void battery_update_timer_cb(lv_timer_t *timer) {
    (void)timer;
    
    uint8_t pct = event_battery_get_percentage();
    bool charging = event_battery_is_charging();
    printf("Battery: %d%% charging: %d\n", pct, charging);
    
    if (charging) {
        pct = (pct + 1) % 101;
        if (pct == 100) charging = false;
    } else {
        pct = pct > 0 ? pct - 1 : 0;
        if (pct == 80) charging = true;
    }
    event_battery_set(pct, charging);
}

int main(void) {
    lv_init();

    lv_disp_t * disp = hal_init(SCREEN_WIDTH, SCREEN_HEIGHT);
    lv_disp_set_default(disp);

    // Create screen layout based on IS_LEFT_SCREEN
#if IS_LEFT_SCREEN
    screen_create_left(lv_scr_act());
    printf("Displaying LEFT screen\n");
#else
    screen_create_right(lv_scr_act());
    printf("Displaying RIGHT screen\n");
#endif

    // Create timers to simulate events (every 2 seconds)
    lv_timer_create(layer_change_timer_cb, 2000, NULL);
    lv_timer_create(signal_update_timer_cb, 3000, NULL);
    lv_timer_create(wpm_update_timer_cb, 1000, NULL);
    lv_timer_create(battery_update_timer_cb, 500, NULL);

    printf("\nSimulator started. Close window to exit.\n");

    // Main loop
    bool quit = false;
    uint32_t last_tick = SDL_GetTicks();
    
    while(!quit) {
        SDL_Event event;
        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }

        // Update LVGL tick
        uint32_t current_tick = SDL_GetTicks();
        uint32_t elapsed = current_tick - last_tick;
        lv_tick_inc(elapsed);
        last_tick = current_tick;
        
        lv_timer_handler();
        SDL_Delay(5);
    }

    lv_deinit();
    return 0;
}