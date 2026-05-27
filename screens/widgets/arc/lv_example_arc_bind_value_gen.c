/**
 * @file lv_example_arc_bind_value_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_arc_bind_value_gen.h"
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

lv_obj_t * lv_example_arc_bind_value_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_arc_bind_value_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * arc = lv_arc_create(lv_obj_0);
    lv_obj_set_name(arc, "arc");
    lv_obj_set_width(arc, 160);
    lv_obj_set_height(arc, 160);
    lv_arc_bind_value(arc, &subject_value);
    lv_obj_set_flag(arc, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_set_style_bg_opa(arc, (255 * 0 / 100), LV_PART_KNOB);
    lv_obj_t * lv_label_0 = lv_label_create(arc);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_label_bind_text(lv_label_0, &subject_value, "%d %%");

    lv_obj_t * slider = lv_slider_create(lv_obj_0);
    lv_obj_set_name(slider, "slider");
    lv_obj_set_width(slider, 220);
    lv_slider_bind_value(slider, &subject_value);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

