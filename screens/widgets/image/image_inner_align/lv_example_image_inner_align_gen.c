/**
 * @file lv_example_image_inner_align_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_image_inner_align_gen.h"
#include "../../../../lvgl_open_examples.h"

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

lv_obj_t * lv_example_image_inner_align_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_image_inner_align_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_column(lv_obj_0, 16, 0);

    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_0, img_lvgl_logo);
    lv_obj_set_width(lv_image_0, 140);
    lv_obj_set_height(lv_image_0, 100);
    lv_image_set_inner_align(lv_image_0, LV_IMAGE_ALIGN_TOP_LEFT);
    lv_obj_set_style_bg_color(lv_image_0, lv_color_hex(0xe5e7eb), 0);
    lv_obj_set_style_bg_opa(lv_image_0, (255 * 100 / 100), 0);
    
    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_1, img_lvgl_logo);
    lv_obj_set_width(lv_image_1, 140);
    lv_obj_set_height(lv_image_1, 100);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_CENTER);
    lv_obj_set_style_bg_color(lv_image_1, lv_color_hex(0xe5e7eb), 0);
    lv_obj_set_style_bg_opa(lv_image_1, (255 * 100 / 100), 0);
    
    lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_2, img_lvgl_logo);
    lv_obj_set_width(lv_image_2, 140);
    lv_obj_set_height(lv_image_2, 100);
    lv_image_set_inner_align(lv_image_2, LV_IMAGE_ALIGN_BOTTOM_RIGHT);
    lv_obj_set_style_bg_color(lv_image_2, lv_color_hex(0xe5e7eb), 0);
    lv_obj_set_style_bg_opa(lv_image_2, (255 * 100 / 100), 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

