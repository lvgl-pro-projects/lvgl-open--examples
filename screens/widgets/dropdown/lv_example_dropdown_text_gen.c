/**
 * @file lv_example_dropdown_text_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_dropdown_text_gen.h"
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

lv_obj_t * lv_example_dropdown_text_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_dropdown_text_#");

    lv_obj_t * dropdown_1 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_name(dropdown_1, "dropdown_1");
    lv_obj_set_align(dropdown_1, LV_ALIGN_CENTER);
    lv_obj_set_x(dropdown_1, -100);
    lv_obj_set_width(dropdown_1, 110);
    lv_dropdown_set_options(dropdown_1, "Cut\nCopy\nPaste");

    lv_obj_t * dropdown_2 = lv_dropdown_create(lv_obj_0);
    lv_obj_set_name(dropdown_2, "dropdown_2");
    lv_obj_set_align(dropdown_2, LV_ALIGN_CENTER);
    lv_obj_set_x(dropdown_2, 100);
    lv_obj_set_width(dropdown_2, 110);
    lv_dropdown_set_text(dropdown_2, "Menu");
    lv_dropdown_set_options(dropdown_2, "Cut\nCopy\nPaste");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

