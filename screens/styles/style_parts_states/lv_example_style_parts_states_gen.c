/**
 * @file lv_example_style_parts_states_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_parts_states_gen.h"
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

lv_obj_t * lv_example_style_parts_states_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_indicator;
    static lv_style_t style_indicator_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_indicator);
        lv_style_set_bg_opa(&style_indicator, (255 * 100 / 100));
        lv_style_set_bg_color(&style_indicator, lv_color_hex(0x8b5cf6));
        lv_style_set_bg_grad_color(&style_indicator, lv_color_hex(0xec4899));
        lv_style_set_bg_grad_dir(&style_indicator, LV_GRAD_DIR_HOR);
        lv_style_set_radius(&style_indicator, 10);

        lv_style_init(&style_indicator_pressed);
        lv_style_set_shadow_color(&style_indicator_pressed, lv_color_hex(0xec4899));
        lv_style_set_shadow_width(&style_indicator_pressed, 18);
        lv_style_set_shadow_spread(&style_indicator_pressed, 2);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_parts_states_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 20, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: parts and states");
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_0, 220);
    lv_obj_set_height(lv_slider_0, 16);
    lv_slider_set_min_value(lv_slider_0, 0);
    lv_slider_set_max_value(lv_slider_0, 100);
    lv_slider_set_value(lv_slider_0, 65, false);
    lv_obj_add_style(lv_slider_0, &style_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_slider_0, &style_indicator_pressed, LV_PART_INDICATOR | LV_STATE_PRESSED);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

