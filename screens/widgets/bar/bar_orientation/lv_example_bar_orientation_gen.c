/**
 * @file lv_example_bar_orientation_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_bar_orientation_gen.h"
#include "../../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define TEXT_COLOR lv_color_hex(0x013992)

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

lv_obj_t * lv_example_bar_orientation_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_bar_orientation_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Bar: orientation and size");
    
    lv_obj_t * lv_bar_0 = lv_bar_create(lv_obj_0);
    lv_obj_set_width(lv_bar_0, 220);
    lv_obj_set_height(lv_bar_0, 16);
    lv_bar_set_min_value(lv_bar_0, 0);
    lv_bar_set_max_value(lv_bar_0, 100);
    lv_bar_set_value(lv_bar_0, 60, false);
    lv_obj_t * lv_label_1 = lv_label_create(lv_bar_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "horizontal");
    lv_obj_set_style_text_color(lv_label_1, TEXT_COLOR, 0);
    
    lv_obj_t * lv_bar_1 = lv_bar_create(lv_obj_0);
    lv_obj_set_width(lv_bar_1, 18);
    lv_obj_set_height(lv_bar_1, 130);
    lv_bar_set_orientation(lv_bar_1, LV_BAR_ORIENTATION_VERTICAL);
    lv_bar_set_min_value(lv_bar_1, 0);
    lv_bar_set_max_value(lv_bar_1, 100);
    lv_bar_set_value(lv_bar_1, 60, false);
    lv_obj_t * lv_label_2 = lv_label_create(lv_bar_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "V\ne\nr");
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_2, TEXT_COLOR, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

