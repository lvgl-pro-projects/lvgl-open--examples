/**
 * @file lv_example_arc_value_range_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_arc_value_range_gen.h"
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

lv_obj_t * lv_example_arc_value_range_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_arc_value_range_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Arc: value and range");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_x(lv_arc_0, 14);
    lv_obj_set_y(lv_arc_0, 34);
    lv_obj_set_width(lv_arc_0, 96);
    lv_obj_set_height(lv_arc_0, 96);
    lv_arc_set_min_value(lv_arc_0, -50);
    lv_arc_set_max_value(lv_arc_0, 50);
    lv_arc_set_value(lv_arc_0, 20);
    lv_arc_set_bg_start_angle(lv_arc_0, 135);
    lv_arc_set_bg_end_angle(lv_arc_0, 45);
    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "-50..50\nv=20");
    
    lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
    lv_obj_set_x(lv_arc_1, 130);
    lv_obj_set_y(lv_arc_1, 34);
    lv_obj_set_width(lv_arc_1, 96);
    lv_obj_set_height(lv_arc_1, 96);
    lv_arc_set_min_value(lv_arc_1, 20);
    lv_arc_set_max_value(lv_arc_1, 220);
    lv_arc_set_value(lv_arc_1, 140);
    lv_arc_set_bg_start_angle(lv_arc_1, 135);
    lv_arc_set_bg_end_angle(lv_arc_1, 45);
    lv_obj_t * lv_label_2 = lv_label_create(lv_arc_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "20..220\nv=140");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

