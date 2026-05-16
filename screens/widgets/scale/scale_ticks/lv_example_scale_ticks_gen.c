/**
 * @file lv_example_scale_ticks_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scale_ticks_gen.h"
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

lv_obj_t * lv_example_scale_ticks_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scale_ticks_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 20, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Scale: tick configuration");
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_0, 260);
    lv_obj_set_height(lv_scale_0, 60);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_0, 5);
    lv_scale_set_major_tick_every(lv_scale_0, 2);
    lv_scale_set_label_show(lv_scale_0, true);
    lv_scale_set_min_value(lv_scale_0, 0);
    lv_scale_set_max_value(lv_scale_0, 100);
    
    lv_obj_t * lv_scale_1 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_1, 260);
    lv_obj_set_height(lv_scale_1, 60);
    lv_scale_set_mode(lv_scale_1, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_1, 11);
    lv_scale_set_major_tick_every(lv_scale_1, 5);
    lv_scale_set_label_show(lv_scale_1, true);
    lv_scale_set_min_value(lv_scale_1, 0);
    lv_scale_set_max_value(lv_scale_1, 100);
    
    lv_obj_t * lv_scale_2 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_2, 260);
    lv_obj_set_height(lv_scale_2, 60);
    lv_scale_set_mode(lv_scale_2, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_2, 21);
    lv_scale_set_major_tick_every(lv_scale_2, 4);
    lv_scale_set_label_show(lv_scale_2, true);
    lv_scale_set_min_value(lv_scale_2, 0);
    lv_scale_set_max_value(lv_scale_2, 100);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

