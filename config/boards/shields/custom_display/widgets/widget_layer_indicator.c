#include "widget_layer_indicator.h"
#include "../common.h"


lv_obj_t *widget_layer_indicator_create(lv_obj_t *parent, int16_t x, int16_t y) {
    lv_obj_t *label = lv_label_create(parent);
    lv_label_set_text(label, "BSE");
    
    // style the label
    lv_obj_set_style_text_color(label, COLOR_FG, 0);
    lv_obj_set_style_text_font(label, FONT_LAYER, 0);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    
    // position widget
    lv_obj_set_width(label, SCREEN_WIDTH - (2 * PADDING));
    lv_obj_set_pos(label, x, y);
    
    return label;
}

void widget_layer_indicator_update(lv_obj_t *widget, const char *layer_name) {
    // update layer
    if (widget && layer_name) {
        lv_label_set_text(widget, layer_name);
    }
}