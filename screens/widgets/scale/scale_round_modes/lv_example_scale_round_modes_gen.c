/**
 * @file lv_example_scale_round_modes_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scale_round_modes_gen.h"
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

lv_obj_t * lv_example_scale_round_modes_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scale_round_modes_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_column(lv_obj_0, 24, 0);

    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_0, 180);
    lv_obj_set_height(lv_scale_0, 180);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_ROUND_INNER);
    lv_scale_set_total_tick_count(lv_scale_0, 11);
    lv_scale_set_major_tick_every(lv_scale_0, 2);
    lv_scale_set_label_show(lv_scale_0, true);
    lv_scale_set_angle_range(lv_scale_0, 270);
    lv_scale_set_rotation(lv_scale_0, 135);
    lv_scale_set_min_value(lv_scale_0, 0);
    lv_scale_set_max_value(lv_scale_0, 100);
    
    lv_obj_t * lv_scale_1 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_1, 180);
    lv_obj_set_height(lv_scale_1, 180);
    lv_scale_set_mode(lv_scale_1, LV_SCALE_MODE_ROUND_OUTER);
    lv_scale_set_total_tick_count(lv_scale_1, 11);
    lv_scale_set_major_tick_every(lv_scale_1, 2);
    lv_scale_set_label_show(lv_scale_1, true);
    lv_scale_set_angle_range(lv_scale_1, 270);
    lv_scale_set_rotation(lv_scale_1, 135);
    lv_scale_set_min_value(lv_scale_1, 0);
    lv_scale_set_max_value(lv_scale_1, 100);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

