/**
 * @file lv_example_checkbox_states_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_checkbox_states_gen.h"
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

lv_obj_t * lv_example_checkbox_states_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_checkbox_states_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Checkbox: states");
    
    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_0, "Unchecked");
    
    lv_obj_t * lv_checkbox_1 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_1, "Checked");
    lv_obj_set_state(lv_checkbox_1, LV_STATE_CHECKED, true);
    
    lv_obj_t * lv_checkbox_2 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_2, "Disabled");
    lv_obj_set_state(lv_checkbox_2, LV_STATE_DISABLED, true);
    
    lv_obj_t * lv_checkbox_3 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_3, "Disabled + Checked");
    lv_obj_set_state(lv_checkbox_3, LV_STATE_DISABLED, true);
    lv_obj_set_state(lv_checkbox_3, LV_STATE_CHECKED, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

