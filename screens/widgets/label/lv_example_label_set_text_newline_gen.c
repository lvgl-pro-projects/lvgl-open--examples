/**
 * @file lv_example_label_set_text_newline_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_set_text_newline_gen.h"
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

lv_obj_t * lv_example_label_set_text_newline_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_set_text_newline_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * label_1 = lv_label_create(lv_obj_0);
    lv_obj_set_name(label_1, "label_1");
    lv_label_set_text(label_1, "First line\nSecond line\n\nFourth line");

    lv_obj_t * label_2 = lv_label_create(lv_obj_0);
    lv_obj_set_name(label_2, "label_2");
    lv_label_set_text(label_2, "Just a normal single line text.");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

