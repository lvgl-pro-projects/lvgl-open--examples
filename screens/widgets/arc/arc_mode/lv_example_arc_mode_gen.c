/**
 * @file lv_example_arc_mode_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_arc_mode_gen.h"
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

lv_obj_t * lv_example_arc_mode_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_arc_mode_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Arc: indicator modes");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_align(lv_arc_0, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_arc_0, 90);
    lv_obj_set_height(lv_arc_0, 90);
    lv_obj_set_x(lv_arc_0, 10);
    lv_arc_set_mode(lv_arc_0, LV_ARC_MODE_NORMAL);
    lv_arc_set_value(lv_arc_0, 75);
    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "normal");
    
    lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
    lv_obj_set_align(lv_arc_1, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_arc_1, 90);
    lv_obj_set_height(lv_arc_1, 90);
    lv_arc_set_mode(lv_arc_1, LV_ARC_MODE_REVERSE);
    lv_arc_set_value(lv_arc_1, 75);
    lv_obj_t * lv_label_2 = lv_label_create(lv_arc_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "rev.");
    
    lv_obj_t * lv_arc_2 = lv_arc_create(lv_obj_0);
    lv_obj_set_align(lv_arc_2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_arc_2, 90);
    lv_obj_set_height(lv_arc_2, 90);
    lv_obj_set_x(lv_arc_2, -10);
    lv_arc_set_mode(lv_arc_2, LV_ARC_MODE_SYMMETRICAL);
    lv_arc_set_value(lv_arc_2, 75);
    lv_obj_t * lv_label_3 = lv_label_create(lv_arc_2);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "sym.");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

