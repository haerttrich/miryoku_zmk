/**
 * Miryoku Logo Widget Implementation
 */

#include <stdio.h>
#include "widget_miryoku_logo.h"

// Declare the Miryoku logo image
LV_IMG_DECLARE(miryoku_logo);

lv_obj_t *widget_miryoku_logo_create(lv_obj_t *parent, int16_t x, int16_t y) {

    // Create image object
    lv_obj_t *logo = lv_img_create(parent);
    lv_img_set_src(logo, &miryoku_logo);
    
    // Position the logo
    lv_obj_set_pos(logo, x, y);
    
    return logo;
}