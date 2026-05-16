/**
 * @file lv_example_spinner_basic_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_spinner_basic_gen.h"
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

lv_obj_t * lv_example_spinner_basic_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_spinner_basic_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_column(lv_obj_0, 32, 0);

    lv_obj_t * lv_spinner_0 = lv_spinner_create(lv_obj_0);
    lv_obj_set_width(lv_spinner_0, 80);
    lv_obj_set_height(lv_spinner_0, 80);
    lv_spinner_set_anim_duration(lv_spinner_0, 1500);
    lv_spinner_set_arc_sweep(lv_spinner_0, 270);
    
    lv_obj_t * lv_spinner_1 = lv_spinner_create(lv_obj_0);
    lv_obj_set_width(lv_spinner_1, 80);
    lv_obj_set_height(lv_spinner_1, 80);
    lv_spinner_set_anim_duration(lv_spinner_1, 600);
    lv_spinner_set_arc_sweep(lv_spinner_1, 180);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

