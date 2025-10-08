#include "widget_battery.h"
#include "../common.h"
#include <stdio.h>


LV_IMG_DECLARE(icon_charge);


static battery_widget_t battery_data;


lv_obj_t *widget_battery_create(lv_obj_t *parent, int16_t x, int16_t y) {
    // create container of widget
    lv_obj_t *container = lv_obj_create(parent);
    lv_obj_set_size(container, SCREEN_WIDTH - (2 * PADDING), 15);
    lv_obj_set_pos(container, x, y);
    lv_obj_set_style_bg_opa(container, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_width(container, 0, 0);
    lv_obj_set_style_pad_all(container, 0, 0);
    
    // create bat label
    battery_data.label_text = lv_label_create(container);
    lv_label_set_text(battery_data.label_text, "BAT");
    lv_obj_set_style_text_font(battery_data.label_text, FONT_STATUS, 0);
    lv_obj_set_style_text_color(battery_data.label_text, COLOR_FG, 0);
    lv_obj_align(battery_data.label_text, LV_ALIGN_LEFT_MID, 0, 0);

    // create charge icon
    battery_data.icon_charge = lv_img_create(container);
    lv_img_set_src(battery_data.icon_charge, &icon_charge);
    lv_obj_align(battery_data.icon_charge, LV_ALIGN_LEFT_MID, 26, 0);
    lv_obj_add_flag(battery_data.icon_charge, LV_OBJ_FLAG_HIDDEN);
    
    // create value label
    battery_data.label_value = lv_label_create(container);
    lv_label_set_text(battery_data.label_value, "100");
    lv_obj_set_style_text_font(battery_data.label_value, FONT_STATUS, 0);
    lv_obj_set_style_text_color(battery_data.label_value, COLOR_FG, 0);
    lv_obj_align(battery_data.label_value, LV_ALIGN_RIGHT_MID, 0, 0);
    
    return container;
}

void widget_battery_update(lv_obj_t *widget, uint8_t percentage, bool charging) {
    (void)widget;
    
    // update charge icon visibility
    if (charging) {
        lv_obj_clear_flag(battery_data.icon_charge, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(battery_data.icon_charge, LV_OBJ_FLAG_HIDDEN);
    }
    
    // update remaining charge
    char buf[8];
    snprintf(buf, sizeof(buf), "%d", percentage);
    lv_label_set_text(battery_data.label_value, buf);
}