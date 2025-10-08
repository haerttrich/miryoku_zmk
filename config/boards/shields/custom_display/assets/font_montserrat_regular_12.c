/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font Montserrat-Regular.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-% --format lvgl -o font_monserrat_regular_12.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef FONT_MONTSERRAT_REGULAR_12
#define FONT_MONTSERRAT_REGULAR_12 1
#endif

#if FONT_MONTSERRAT_REGULAR_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x62, 0x4a, 0x25, 0x13, 0x7, 0x30, 0xa4, 0x92,
    0x86,

    /* U+002D "-" */
    0xe0,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0031 "1" */
    0xe4, 0x92, 0x49,

    /* U+0032 "2" */
    0x7a, 0x10, 0x41, 0x8, 0xc4, 0x3f,

    /* U+0033 "3" */
    0xfc, 0x21, 0xe, 0xc, 0x18, 0xde,

    /* U+0034 "4" */
    0x8, 0x18, 0x10, 0x24, 0x44, 0xff, 0x4, 0x4,

    /* U+0035 "5" */
    0x7d, 0x8, 0x3e, 0xc, 0x18, 0x5e,

    /* U+0036 "6" */
    0x39, 0x8, 0x2e, 0xc6, 0x14, 0x5e,

    /* U+0037 "7" */
    0xfe, 0x10, 0x82, 0x10, 0x42, 0x8,

    /* U+0038 "8" */
    0x79, 0xa, 0x13, 0xec, 0x70, 0x71, 0xbe,

    /* U+0039 "9" */
    0x7a, 0x28, 0x61, 0x7c, 0x10, 0x9c,

    /* U+0041 "A" */
    0x8, 0xc, 0x5, 0x4, 0x82, 0x23, 0xf1, 0x5,
    0x2,

    /* U+0042 "B" */
    0xfd, 0x6, 0xf, 0xe8, 0x30, 0x60, 0xfe,

    /* U+0043 "C" */
    0x3c, 0x60, 0x80, 0x80, 0x80, 0x80, 0x60, 0x3e,

    /* U+0044 "D" */
    0xfc, 0x86, 0x81, 0x81, 0x81, 0x81, 0x86, 0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x3e, 0x82, 0x8, 0x3f,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20,

    /* U+0047 "G" */
    0x3e, 0x61, 0xc0, 0x80, 0x81, 0x81, 0x61, 0x3e,

    /* U+0048 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x78, 0x42, 0x10, 0x86, 0x2e,

    /* U+004B "K" */
    0x87, 0x1a, 0x45, 0xd, 0x11, 0x21, 0x41,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x3f,

    /* U+004D "M" */
    0x80, 0xe0, 0xf0, 0x74, 0x5b, 0x6c, 0xa6, 0x23,
    0x1,

    /* U+004E "N" */
    0x83, 0x86, 0x8c, 0x99, 0x31, 0x61, 0xc1,

    /* U+004F "O" */
    0x3e, 0x31, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x8c,
    0x7c,

    /* U+0050 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa0, 0x40,

    /* U+0051 "Q" */
    0x3e, 0x31, 0xa0, 0x30, 0x18, 0xc, 0x5, 0x8c,
    0x7c, 0x4, 0x1, 0xc0,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa1, 0x41,

    /* U+0053 "S" */
    0x7a, 0x8, 0x10, 0x38, 0x18, 0x5e,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x71, 0xbe,

    /* U+0056 "V" */
    0x81, 0x41, 0x42, 0x22, 0x24, 0x14, 0x18, 0x8,

    /* U+0057 "W" */
    0x42, 0xa, 0x18, 0x91, 0x44, 0x4a, 0x22, 0x8a,
    0x14, 0x50, 0x62, 0x82, 0x8,

    /* U+0058 "X" */
    0x42, 0x24, 0x24, 0x18, 0x18, 0x24, 0x46, 0x42,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x41, 0x2, 0x4, 0x8,

    /* U+005A "Z" */
    0xfe, 0x8, 0x20, 0x82, 0xc, 0x10, 0x7f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 159, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 73, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 10, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 69, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 127, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 138, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 159, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 148, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 156, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 58, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 183, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 156, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 161, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 138, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 193, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 118, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 152, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 213, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x8
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 37, .range_length = 9, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t font_montserrat_regular_12 = {
#else
lv_font_t font_montserrat_regular_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    // .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if FONT_MONTSERRAT_REGULAR_12*/
