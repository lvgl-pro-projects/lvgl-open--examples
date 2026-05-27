/**
 * @file lv_example_switch_state_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_switch_state_gen.h"
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

lv_obj_t * lv_example_switch_state_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_switch_state_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * sw_1 = lv_switch_create(lv_obj_0);
    lv_obj_set_name(sw_1, "sw_1");

    lv_obj_t * sw_2 = lv_switch_create(lv_obj_0);
    lv_obj_set_name(sw_2, "sw_2");
    lv_obj_set_state(sw_2, LV_STATE_CHECKED, true);

    lv_obj_t * sw_3 = lv_switch_create(lv_obj_0);
    lv_obj_set_name(sw_3, "sw_3");
    lv_obj_set_state(sw_3, LV_STATE_DISABLED, true);

    lv_obj_t * sw_4 = lv_switch_create(lv_obj_0);
    lv_obj_set_name(sw_4, "sw_4");
    lv_obj_set_state(sw_4, LV_STATE_DISABLED, true);
    lv_obj_set_state(sw_4, LV_STATE_CHECKED, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

