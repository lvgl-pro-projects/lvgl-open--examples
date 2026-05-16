/**
 * @file lv_example_scroll_one_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scroll_one_gen.h"
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

lv_obj_t * lv_example_scroll_one_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scroll_one_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Scroll: one at a time");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 290);
    lv_obj_set_height(lv_obj_1, 150);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_column(lv_obj_1, 10, 0);
    lv_obj_set_scroll_snap_x(lv_obj_1, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLL_ONE, true);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_0, 80);
    lv_obj_set_height(lv_button_0, lv_pct(100));
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Panel 1");
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_1, 80);
    lv_obj_set_height(lv_button_1, lv_pct(100));
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "Panel 2");
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_2, 80);
    lv_obj_set_height(lv_button_2, lv_pct(100));
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_2);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "Panel 3");
    
    lv_obj_t * lv_button_3 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_3, 80);
    lv_obj_set_height(lv_button_3, lv_pct(100));
    lv_obj_t * lv_label_4 = lv_label_create(lv_button_3);
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_4, "Panel 4");
    
    lv_obj_t * lv_button_4 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_4, 80);
    lv_obj_set_height(lv_button_4, lv_pct(100));
    lv_obj_t * lv_label_5 = lv_label_create(lv_button_4);
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_5, "Panel 5");
    
    lv_obj_t * lv_button_5 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_5, 80);
    lv_obj_set_height(lv_button_5, lv_pct(100));
    lv_obj_t * lv_label_6 = lv_label_create(lv_button_5);
    lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_6, "Panel 6");
    
    lv_obj_t * lv_button_6 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_6, 80);
    lv_obj_set_height(lv_button_6, lv_pct(100));
    lv_obj_t * lv_label_7 = lv_label_create(lv_button_6);
    lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_7, "Panel 7");
    
    lv_obj_t * lv_button_7 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_7, 80);
    lv_obj_set_height(lv_button_7, lv_pct(100));
    lv_obj_t * lv_label_8 = lv_label_create(lv_button_7);
    lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_8, "Panel 8");
    
    lv_obj_t * lv_button_8 = lv_button_create(lv_obj_1);
    lv_obj_set_width(lv_button_8, 80);
    lv_obj_set_height(lv_button_8, lv_pct(100));
    lv_obj_t * lv_label_9 = lv_label_create(lv_button_8);
    lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_9, "Panel 9");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

