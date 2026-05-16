/**
 * @file lv_example_led_color_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_led_color_gen.h"
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

lv_obj_t * lv_example_led_color_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_led_color_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_pad_top(lv_obj_0, 56, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, 8);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "LED: color");
    
    lv_obj_t * lv_led_0 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_0, 40);
    lv_obj_set_height(lv_led_0, 40);
    lv_led_set_color(lv_led_0, lv_color_hex(0xff3030));
    
    lv_obj_t * lv_led_1 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_1, 40);
    lv_obj_set_height(lv_led_1, 40);
    lv_led_set_color(lv_led_1, lv_color_hex(0x30c050));
    
    lv_obj_t * lv_led_2 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_2, 40);
    lv_obj_set_height(lv_led_2, 40);
    lv_led_set_color(lv_led_2, lv_color_hex(0x3080ff));

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

