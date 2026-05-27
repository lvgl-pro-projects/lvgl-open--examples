/**
 * @file lv_example_label_recolor_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_recolor_gen.h"
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

lv_obj_t * lv_example_label_recolor_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_recolor_#");

    lv_obj_t * label = lv_label_create(lv_obj_0);
    lv_obj_set_name(label, "label");
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_label_set_recolor(label, true);
    lv_label_set_text(label, "Write a #ff0000 red# word, a #00a000 green# word, and a #0000ff blue# word.");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

