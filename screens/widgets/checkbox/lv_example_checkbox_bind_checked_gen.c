/**
 * @file lv_example_checkbox_bind_checked_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_checkbox_bind_checked_gen.h"
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

lv_obj_t * lv_example_checkbox_bind_checked_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_checkbox_bind_checked_#");

    lv_obj_t * checkbox = lv_checkbox_create(lv_obj_0);
    lv_obj_set_name(checkbox, "checkbox");
    lv_checkbox_set_text(checkbox, "Show extra details");
    lv_obj_set_align(checkbox, LV_ALIGN_CENTER);
    lv_obj_bind_checked(checkbox, &subject_flag);

    lv_obj_t * label = lv_label_create(lv_obj_0);
    lv_obj_set_name(label, "label");
    lv_label_set_text(label, "Extra details only visible while the box is ticked.");
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_obj_set_y(label, 30);
    lv_obj_bind_flag_if_eq(label, &subject_flag, LV_OBJ_FLAG_HIDDEN, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

