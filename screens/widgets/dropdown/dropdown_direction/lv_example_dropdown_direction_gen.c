/**
 * @file lv_example_dropdown_direction_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_dropdown_direction_gen.h"
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

lv_obj_t * lv_example_dropdown_direction_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_dropdown_direction_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Dropdown: open direction");
    
    lv_obj_t * lv_dropdown_0 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_dropdown_0, 34);
    lv_dropdown_set_options(lv_dropdown_0, "Apple\nBanana\nOrange\nMelon");
    
    lv_obj_t * lv_dropdown_1 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(lv_dropdown_1, -10);
    lv_dropdown_set_dir(lv_dropdown_1, LV_DIR_TOP);
    lv_dropdown_set_options(lv_dropdown_1, "Apple\nBanana\nOrange\nMelon");
    
    lv_obj_t * lv_dropdown_2 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_dropdown_2, 10);
    lv_obj_set_width(lv_dropdown_2, 80);
    lv_dropdown_set_dir(lv_dropdown_2, LV_DIR_RIGHT);
    lv_dropdown_set_options(lv_dropdown_2, "Apple\nBanana\nOrange\nMelon");
    
    lv_obj_t * lv_dropdown_3 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_dropdown_3, -10);
    lv_obj_set_width(lv_dropdown_3, 80);
    lv_dropdown_set_dir(lv_dropdown_3, LV_DIR_LEFT);
    lv_dropdown_set_options(lv_dropdown_3, "Apple\nBanana\nOrange\nMelon");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

