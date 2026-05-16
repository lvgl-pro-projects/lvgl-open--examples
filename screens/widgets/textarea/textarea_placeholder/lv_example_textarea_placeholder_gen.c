/**
 * @file lv_example_textarea_placeholder_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_textarea_placeholder_gen.h"
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

lv_obj_t * lv_example_textarea_placeholder_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_textarea_placeholder_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Text area: placeholder");
    
    lv_obj_t * lv_textarea_0 = lv_textarea_create(lv_obj_0);
    lv_obj_set_width(lv_textarea_0, 240);
    lv_textarea_set_one_line(lv_textarea_0, true);
    lv_textarea_set_placeholder_text(lv_textarea_0, "Search…");
    
    lv_obj_t * lv_textarea_1 = lv_textarea_create(lv_obj_0);
    lv_obj_set_width(lv_textarea_1, 240);
    lv_textarea_set_one_line(lv_textarea_1, true);
    lv_textarea_set_placeholder_text(lv_textarea_1, "Search…");
    lv_textarea_set_text(lv_textarea_1, "lv_textarea");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

