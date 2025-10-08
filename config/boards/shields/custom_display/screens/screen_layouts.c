#include "screen_layouts.h"
#include "../display_config.h"

#include "../common.h"
#include "../events/event_layer.h"
#include "../events/event_signal.h"
#include "../events/event_wpm.h"
#include "../events/event_battery.h"
#include "../widgets/widget_miryoku_logo.h"
#include "../widgets/widget_maha_logo.h"
#include "../widgets/widget_layer_indicator.h"
#include "../widgets/widget_wpm.h"
#include "../widgets/widget_battery.h"
#include "../widgets/widget_signal.h"

static left_screen_widgets_t left_widgets;
static right_screen_widgets_t right_widgets;

// Helper function to create widgets based on config
static void create_widget(lv_obj_t *parent, widget_config_t *config, 
                         left_screen_widgets_t *left_w, right_screen_widgets_t *right_w) {
    if (!config->enabled) {
        return;
    }
    
    lv_obj_t *widget = NULL;
    int16_t x = PADDING;
    
    switch (config->type) {
        case WIDGET_MAHA_LOGO:
            widget_maha_logo_create(parent, x, config->y_position);
            break;
            
        case WIDGET_MIRYOKU_LOGO:
            x = (SCREEN_WIDTH - 60) / 2;  // Center it
            widget_miryoku_logo_create(parent, x, config->y_position);
            break;
            
        case WIDGET_LAYER_INDICATOR:
            widget = widget_layer_indicator_create(parent, x, config->y_position);
            event_layer_init(widget);
            if (left_w) left_w->layer_widget = widget;
            if (right_w) right_w->layer_widget = widget;
            break;
            
        case WIDGET_WPM:
#if IS_ZMK_BUILD && defined(CONFIG_ZMK_WPM)
            widget = widget_wpm_create(parent, x, config->y_position);
            event_wpm_init(widget);
            if (right_w) right_w->wpm_widget = widget;
            break;
#endif
            
        case WIDGET_BATTERY:
            widget = widget_battery_create(parent, x, config->y_position);
            event_battery_init(widget);
            if (left_w) left_w->battery_widget = widget;
            if (right_w) right_w->battery_widget = widget;
            break;
            
        case WIDGET_SIGNAL:
            widget = widget_signal_create(parent, x, config->y_position);
            event_signal_init(widget);
            if (left_w) left_w->signal_widget = widget;
            break;
            
        default:
            break;
    }
}

left_screen_widgets_t *screen_create_left(lv_obj_t *parent) {
    lv_obj_set_style_bg_color(parent, COLOR_BG, 0);
    
    // Create widgets from config
    for (uint8_t i = 0; i < DISPLAY_CONFIG.left_screen.widget_count; i++) {
        create_widget(parent, 
                     (widget_config_t *)&DISPLAY_CONFIG.left_screen.widgets[i], 
                     &left_widgets, 
                     NULL);
    }
    
    return &left_widgets;
}

right_screen_widgets_t *screen_create_right(lv_obj_t *parent) {
    lv_obj_set_style_bg_color(parent, COLOR_BG, 0);
    
    // Create widgets from config
    for (uint8_t i = 0; i < DISPLAY_CONFIG.right_screen.widget_count; i++) {
        create_widget(parent, 
                     (widget_config_t *)&DISPLAY_CONFIG.right_screen.widgets[i], 
                     NULL, 
                     &right_widgets);
    }
    
    return &right_widgets;
}