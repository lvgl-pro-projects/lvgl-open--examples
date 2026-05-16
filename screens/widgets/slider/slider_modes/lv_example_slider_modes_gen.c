/**
 * @file lv_example_slider_modes_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_slider_modes_gen.h"
#include "../../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define TEXT_COLOR lv_color_hex(0x013992)

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

lv_obj_t * lv_example_slider_modes_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_slider_modes_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Slider: modes");
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_x(lv_slider_0, 12);
    lv_obj_set_y(lv_slider_0, 36);
    lv_obj_set_width(lv_slider_0, 220);
    lv_obj_set_height(lv_slider_0, 16);
    lv_slider_set_mode(lv_slider_0, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_min_value(lv_slider_0, 0);
    lv_slider_set_max_value(lv_slider_0, 100);
    lv_slider_set_value(lv_slider_0, 70, false);
    lv_obj_t * lv_label_1 = lv_label_create(lv_slider_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "normal");
    lv_obj_set_style_text_color(lv_label_1, TEXT_COLOR, 0);
    
    lv_obj_t * lv_slider_1 = lv_slider_create(lv_obj_0);
    lv_obj_set_x(lv_slider_1, 12);
    lv_obj_set_y(lv_slider_1, 82);
    lv_obj_set_width(lv_slider_1, 220);
    lv_obj_set_height(lv_slider_1, 16);
    lv_slider_set_mode(lv_slider_1, LV_SLIDER_MODE_SYMMETRICAL);
    lv_slider_set_min_value(lv_slider_1, -100);
    lv_slider_set_max_value(lv_slider_1, 100);
    lv_slider_set_value(lv_slider_1, 45, false);
    lv_obj_t * lv_label_2 = lv_label_create(lv_slider_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "symmetrical");
    lv_obj_set_style_text_color(lv_label_2, TEXT_COLOR, 0);
    
    lv_obj_t * lv_slider_2 = lv_slider_create(lv_obj_0);
    lv_obj_set_x(lv_slider_2, 12);
    lv_obj_set_y(lv_slider_2, 128);
    lv_obj_set_width(lv_slider_2, 220);
    lv_obj_set_height(lv_slider_2, 16);
    lv_slider_set_mode(lv_slider_2, LV_SLIDER_MODE_RANGE);
    lv_slider_set_min_value(lv_slider_2, 0);
    lv_slider_set_max_value(lv_slider_2, 100);
    lv_slider_set_start_value(lv_slider_2, 25, false);
    lv_slider_set_value(lv_slider_2, 80, false);
    lv_obj_t * lv_label_3 = lv_label_create(lv_slider_2);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "range");
    lv_obj_set_style_text_color(lv_label_3, TEXT_COLOR, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

