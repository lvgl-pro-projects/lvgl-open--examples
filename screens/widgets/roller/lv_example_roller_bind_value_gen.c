/**
 * @file lv_example_roller_bind_value_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_roller_bind_value_gen.h"
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

lv_obj_t * lv_example_roller_bind_value_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_roller_bind_value_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * roller = lv_roller_create(lv_obj_0);
    lv_obj_set_name(roller, "roller");
    lv_obj_set_width(roller, 160);
    lv_roller_set_visible_row_count(roller, 3);
    lv_roller_set_options(roller, "Mon\nTue\nWed\nThu\nFri\nSat\nSun", LV_ROLLER_MODE_NORMAL);
    lv_roller_bind_value(roller, &subject_index);

    lv_obj_t * button = lv_button_create(lv_obj_0);
    lv_obj_set_name(button, "button");
    lv_obj_t * label = lv_label_create(button);
    lv_obj_set_name(label, "label");
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_label_set_text(label, "Jump to Wed");

    lv_obj_add_subject_set_int_event(button, &subject_index, LV_EVENT_CLICKED, 2);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

