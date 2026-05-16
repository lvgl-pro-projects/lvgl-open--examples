/**
 * @file lv_example_flex_flow_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_flex_flow_gen.h"
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

lv_obj_t * lv_example_flex_flow_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_flex_flow_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Buttons Arranged in a row with automatic wrapping");
    
    lv_obj_t * example_flex_flow = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(example_flex_flow, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_width(example_flex_flow, lv_pct(100));
    lv_obj_set_height(example_flex_flow, lv_pct(50));
    lv_obj_set_name(example_flex_flow, "example_flex_flow");
    lv_obj_t * lv_button_0 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_1, "First");
    
    lv_obj_t * lv_button_1 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_2, "Second");
    
    lv_obj_t * lv_button_2 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_2);
    lv_label_set_text(lv_label_3, "Third");
    
    lv_obj_t * lv_button_3 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_4 = lv_label_create(lv_button_3);
    lv_label_set_text(lv_label_4, "Forth");
    
    lv_obj_t * lv_button_4 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_5 = lv_label_create(lv_button_4);
    lv_label_set_text(lv_label_5, "Fifth");
    
    lv_obj_t * lv_button_5 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_6 = lv_label_create(lv_button_5);
    lv_label_set_text(lv_label_6, "Sixth");
    
    lv_obj_t * lv_button_6 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_7 = lv_label_create(lv_button_6);
    lv_label_set_text(lv_label_7, "Seventh");
    
    lv_obj_t * lv_button_7 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_8 = lv_label_create(lv_button_7);
    lv_label_set_text(lv_label_8, "Eighth");
    
    lv_obj_t * lv_button_8 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_9 = lv_label_create(lv_button_8);
    lv_label_set_text(lv_label_9, "Ninth");
    
    lv_obj_t * lv_button_9 = lv_button_create(example_flex_flow);
    lv_obj_t * lv_label_10 = lv_label_create(lv_button_9);
    lv_label_set_text(lv_label_10, "Tenth");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

