/**
 * @file lv_example_switch_orientation_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_switch_orientation_gen.h"
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

lv_obj_t * lv_example_switch_orientation_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_switch_orientation_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_column(lv_obj_0, 32, 0);

    lv_obj_t * lv_switch_0 = lv_switch_create(lv_obj_0);
    lv_obj_set_width(lv_switch_0, 60);
    lv_obj_set_height(lv_switch_0, 30);
    lv_switch_set_orientation(lv_switch_0, LV_SWITCH_ORIENTATION_HORIZONTAL);
    lv_obj_set_state(lv_switch_0, LV_STATE_CHECKED, true);
    
    lv_obj_t * lv_switch_1 = lv_switch_create(lv_obj_0);
    lv_obj_set_width(lv_switch_1, 30);
    lv_obj_set_height(lv_switch_1, 60);
    lv_switch_set_orientation(lv_switch_1, LV_SWITCH_ORIENTATION_VERTICAL);
    lv_obj_set_state(lv_switch_1, LV_STATE_CHECKED, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

