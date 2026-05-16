/**
 * @file lv_example_dropdown_text_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_dropdown_text_gen.h"
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

lv_obj_t * lv_example_dropdown_text_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_dropdown_text_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Dropdown: fixed text");
    
    lv_obj_t * lv_dropdown_0 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_0, LV_ALIGN_TOP_LEFT);
    lv_obj_set_x(lv_dropdown_0, 14);
    lv_obj_set_y(lv_dropdown_0, 46);
    lv_obj_set_width(lv_dropdown_0, 110);
    lv_dropdown_set_options(lv_dropdown_0, "Cut\nCopy\nPaste");
    
    lv_obj_t * lv_dropdown_1 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_align(lv_dropdown_1, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_x(lv_dropdown_1, -14);
    lv_obj_set_y(lv_dropdown_1, 46);
    lv_obj_set_width(lv_dropdown_1, 110);
    lv_dropdown_set_text(lv_dropdown_1, "Menu");
    lv_dropdown_set_options(lv_dropdown_1, "Cut\nCopy\nPaste");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

