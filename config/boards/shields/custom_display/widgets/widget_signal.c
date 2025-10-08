#include "widget_signal.h"
#include "../common.h"
#include <stdio.h>


LV_IMG_DECLARE(icon_usb);
LV_IMG_DECLARE(icon_bluetooth);


static signal_widget_t signal_data;


lv_obj_t *widget_signal_create(lv_obj_t *parent, int16_t x, int16_t y) {
    // Create container for the whole signal widget
    lv_obj_t *container = lv_obj_create(parent);
    lv_obj_set_size(container, SCREEN_WIDTH - (2 * PADDING), 15);
    lv_obj_set_pos(container, x, y);
    lv_obj_set_style_bg_opa(container, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_width(container, 0, 0);
    lv_obj_set_style_pad_all(container, 0, 0);
    
    // create sig label
    signal_data.label_text = lv_label_create(container);
    lv_label_set_text(signal_data.label_text, "SIG");
    lv_obj_set_style_text_font(signal_data.label_text, FONT_STATUS, 0);
    lv_obj_set_style_text_color(signal_data.label_text, COLOR_FG, 0);
    lv_obj_align(signal_data.label_text, LV_ALIGN_LEFT_MID, 0, 0);
    
    // create bt profile number
    signal_data.label_status = lv_label_create(container);
    lv_label_set_text(signal_data.label_status, "");
    lv_obj_set_style_text_font(signal_data.label_status, FONT_STATUS, 0);
    lv_obj_set_style_text_color(signal_data.label_status, COLOR_FG, 0);
    lv_obj_align(signal_data.label_status, LV_ALIGN_RIGHT_MID, -20, 0);
    
    // create usb icon
    signal_data.icon_usb = lv_img_create(container);
    lv_img_set_src(signal_data.icon_usb, &icon_usb);
    lv_obj_align(signal_data.icon_usb, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_flag(signal_data.icon_usb, LV_OBJ_FLAG_HIDDEN);
    
    // create bluetooth icon
    signal_data.icon_bluetooth = lv_img_create(container);
    lv_img_set_src(signal_data.icon_bluetooth, &icon_bluetooth);
    lv_obj_align(signal_data.icon_bluetooth, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_flag(signal_data.icon_bluetooth, LV_OBJ_FLAG_HIDDEN);
    
    return container;
}

void widget_signal_update(lv_obj_t *widget, signal_status_t status, uint8_t bt_profile) {
    (void)widget;
    
    switch (status) {
        case SIGNAL_STATUS_USB:
            // Show USB icon, hide BT icon and number
            lv_obj_clear_flag(signal_data.icon_usb, LV_OBJ_FLAG_HIDDEN);
            lv_obj_add_flag(signal_data.icon_bluetooth, LV_OBJ_FLAG_HIDDEN);
            lv_label_set_text(signal_data.label_status, "");
            break;
            
        case SIGNAL_STATUS_BLUETOOTH:
        default:
            // Show BT icon and profile number, hide USB icon
            lv_obj_add_flag(signal_data.icon_usb, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(signal_data.icon_bluetooth, LV_OBJ_FLAG_HIDDEN);
            char buf[4];
            snprintf(buf, sizeof(buf), "%d", bt_profile + 1);
            lv_label_set_text(signal_data.label_status, buf);
            break;
    }
}