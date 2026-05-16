/**
 * @file lv_example_style_image_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_image_gen.h"
#include "../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define ACCENT lv_color_hex(0x2196f3)

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

lv_obj_t * lv_example_style_image_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_img;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_img);
        lv_style_set_radius(&style_img, 5);
        lv_style_set_bg_opa(&style_img, (255 * 100 / 100));
        lv_style_set_bg_color(&style_img, lv_color_hex(0xf5f5f5));
        lv_style_set_border_width(&style_img, 2);
        lv_style_set_border_color(&style_img, ACCENT);
        lv_style_set_image_recolor(&style_img, ACCENT);
        lv_style_set_image_recolor_opa(&style_img, (255 * 50 / 100));
        lv_style_set_transform_rotation(&style_img, 300);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_image_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: image recolor and rotation");
    
    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_0, img_lvgl_logo);
    lv_obj_add_style(lv_image_0, &style_img, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

