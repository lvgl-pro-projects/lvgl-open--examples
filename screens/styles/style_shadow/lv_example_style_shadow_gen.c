/**
 * @file lv_example_style_shadow_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_shadow_gen.h"
#include "../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

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

lv_obj_t * lv_example_style_shadow_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_elevated;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_elevated);
        lv_style_set_radius(&style_elevated, 20);
        lv_style_set_bg_opa(&style_elevated, (255 * 100 / 100));
        lv_style_set_bg_color(&style_elevated, lv_color_hex(0xffffff));
        lv_style_set_border_width(&style_elevated, 0);
        lv_style_set_shadow_color(&style_elevated, lv_color_hex(0x312e81));
        lv_style_set_shadow_width(&style_elevated, 30);
        lv_style_set_shadow_offset_y(&style_elevated, 12);
        lv_style_set_shadow_opa(&style_elevated, 80);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_shadow_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: box shadow");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 210);
    lv_obj_set_height(lv_obj_1, 130);
    lv_obj_add_style(lv_obj_1, &style_elevated, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Elevated");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

