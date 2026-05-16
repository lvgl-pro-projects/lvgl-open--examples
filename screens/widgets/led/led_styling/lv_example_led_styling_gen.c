/**
 * @file lv_example_led_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_led_styling_gen.h"
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

lv_obj_t * lv_example_led_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_led_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_pad_top(lv_obj_0, 56, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, 8);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "LED: styling");
    
    lv_obj_t * lv_led_0 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_0, 50);
    lv_obj_set_height(lv_led_0, 50);
    lv_led_set_color(lv_led_0, lv_color_hex(0x22c55e));
    lv_obj_set_style_border_color(lv_led_0, lv_color_hex(0x14532d), 0);
    lv_obj_set_style_border_width(lv_led_0, 2, 0);
    lv_obj_set_style_outline_color(lv_led_0, lv_color_hex(0x22c55e), 0);
    lv_obj_set_style_outline_width(lv_led_0, 6, 0);
    lv_obj_set_style_outline_pad(lv_led_0, 4, 0);
    lv_obj_set_style_outline_opa(lv_led_0, 80, 0);
    lv_obj_set_style_shadow_color(lv_led_0, lv_color_hex(0x22c55e), 0);
    lv_obj_set_style_shadow_width(lv_led_0, 20, 0);
    lv_obj_set_style_shadow_opa(lv_led_0, 200, 0);
    
    lv_obj_t * lv_led_1 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_1, 50);
    lv_obj_set_height(lv_led_1, 50);
    lv_led_set_color(lv_led_1, lv_color_hex(0xef4444));
    lv_obj_set_style_radius(lv_led_1, 6, 0);
    lv_obj_set_style_border_color(lv_led_1, lv_color_hex(0x7f1d1d), 0);
    lv_obj_set_style_border_width(lv_led_1, 3, 0);
    lv_obj_set_style_shadow_width(lv_led_1, 0, 0);
    
    lv_obj_t * lv_led_2 = lv_led_create(lv_obj_0);
    lv_obj_set_width(lv_led_2, 50);
    lv_obj_set_height(lv_led_2, 50);
    lv_led_set_color(lv_led_2, lv_color_hex(0xf59e0b));
    lv_led_set_brightness(lv_led_2, 120);
    lv_obj_set_style_outline_color(lv_led_2, lv_color_hex(0xf59e0b), 0);
    lv_obj_set_style_outline_width(lv_led_2, 3, 0);
    lv_obj_set_style_outline_pad(lv_led_2, 6, 0);
    lv_obj_set_style_outline_opa(lv_led_2, 180, 0);
    lv_obj_set_style_shadow_width(lv_led_2, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

