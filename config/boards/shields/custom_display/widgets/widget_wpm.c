#include "widget_wpm.h"
#include "../common.h"
#include <stdio.h>


static wpm_widget_t wpm_data;


lv_obj_t *widget_wpm_create(lv_obj_t *parent, int16_t x, int16_t y) {
    // Create container for the whole WPM widget
    lv_obj_t *container = lv_obj_create(parent);
    lv_obj_set_size(container, SCREEN_WIDTH - (2 * PADDING), 15);
    lv_obj_set_pos(container, x, y);
    lv_obj_set_style_bg_opa(container, LV_OPA_TRANSP, 0);  
    lv_obj_set_style_border_width(container, 0, 0);  
    lv_obj_set_style_pad_all(container, 0, 0);  
    
    // Create "WPM" label (left aligned within container)
    wpm_data.label_text = lv_label_create(container);
    lv_label_set_text(wpm_data.label_text, "WPM");
    lv_obj_set_style_text_font(wpm_data.label_text, FONT_STATUS, 0);
    lv_obj_set_style_text_color(wpm_data.label_text, COLOR_FG, 0);
    lv_obj_align(wpm_data.label_text, LV_ALIGN_LEFT_MID, 0, 0);
    
    // Create value label (right aligned within container)
    wpm_data.label_value = lv_label_create(container);
    lv_label_set_text(wpm_data.label_value, "0");
    lv_obj_set_style_text_font(wpm_data.label_value, FONT_STATUS, 0);
    lv_obj_set_style_text_color(wpm_data.label_value, COLOR_FG, 0);
    lv_obj_align(wpm_data.label_value, LV_ALIGN_RIGHT_MID, 0, 0);
    
    return container;
}

void widget_wpm_update(lv_obj_t *widget, uint16_t wpm) {
    (void)widget;
    
    // update wpm number string
    char buf[8];
    snprintf(buf, sizeof(buf), "%d", wpm);
    lv_label_set_text(wpm_data.label_value, buf);
}