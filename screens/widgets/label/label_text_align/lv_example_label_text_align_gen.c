/**
 * @file lv_example_label_text_align_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_text_align_gen.h"
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

lv_obj_t * lv_example_label_text_align_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_text_align_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Label: text alignment");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_1, 30);
    lv_obj_set_width(lv_label_1, 220);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_LEFT, 0);
    lv_label_set_text(lv_label_1, "Left aligned\nSecond line");
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_2, 72);
    lv_obj_set_width(lv_label_2, 220);
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_2, "Centered\nSecond line");
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_3, 114);
    lv_obj_set_width(lv_label_3, 220);
    lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_RIGHT, 0);
    lv_label_set_text(lv_label_3, "Right aligned\nSecond line");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

