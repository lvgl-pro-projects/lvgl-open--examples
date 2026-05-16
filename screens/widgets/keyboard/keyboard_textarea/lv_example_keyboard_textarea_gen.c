/**
 * @file lv_example_keyboard_textarea_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_keyboard_textarea_gen.h"
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

lv_obj_t * lv_example_keyboard_textarea_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_keyboard_textarea_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Keyboard: with text area");
    
    lv_obj_t * lv_textarea_0 = lv_textarea_create(lv_obj_0);
    lv_obj_set_align(lv_textarea_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_textarea_0, 40);
    lv_obj_set_width(lv_textarea_0, 280);
    lv_obj_set_height(lv_textarea_0, 80);
    lv_textarea_set_one_line(lv_textarea_0, true);
    lv_textarea_set_placeholder_text(lv_textarea_0, "Type here...");
    
    lv_obj_t * lv_keyboard_0 = lv_keyboard_create(lv_obj_0);
    lv_obj_set_align(lv_keyboard_0, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_width(lv_keyboard_0, lv_pct(100));
    lv_obj_set_height(lv_keyboard_0, lv_pct(40));
    lv_keyboard_set_mode(lv_keyboard_0, LV_KEYBOARD_MODE_TEXT_LOWER);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

