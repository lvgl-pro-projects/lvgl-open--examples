/**
 * @file lv_example_qrcode_basic_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_qrcode_basic_gen.h"
#include "../../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define QR_DARK lv_color_hex(0x1d4ed8)

#define QR_LIGHT lv_color_hex(0xdbeafe)

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_example_qrcode_basic_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_qrcode_basic_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "QR code: colors");
    
    lv_obj_t * lv_qrcode_0 = lv_qrcode_create(lv_obj_0);
    lv_qrcode_set_size(lv_qrcode_0, 150);
    lv_qrcode_set_dark_color(lv_qrcode_0, QR_DARK);
    lv_qrcode_set_light_color(lv_qrcode_0, QR_LIGHT);
    lv_qrcode_set_data(lv_qrcode_0, "https://lvgl.io");
    lv_qrcode_set_quiet_zone(lv_qrcode_0, true);
    lv_obj_set_style_border_color(lv_qrcode_0, QR_DARK, 0);
    lv_obj_set_style_border_width(lv_qrcode_0, 4, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

