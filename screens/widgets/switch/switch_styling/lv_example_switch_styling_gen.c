/**
 * @file lv_example_switch_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_switch_styling_gen.h"
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

lv_obj_t * lv_example_switch_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_switch_main;
    static lv_style_t style_switch_indicator_checked;
    static lv_style_t style_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_switch_main);
        lv_style_set_bg_color(&style_switch_main, lv_color_hex(0xc4d8cb));
        lv_style_set_bg_opa(&style_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&style_switch_main, 999);
        lv_style_set_pad_all(&style_switch_main, 6);
        lv_style_set_border_width(&style_switch_main, 0);

        lv_style_init(&style_switch_indicator_checked);
        lv_style_set_bg_color(&style_switch_indicator_checked, lv_color_hex(0x22c55e));
        lv_style_set_bg_opa(&style_switch_indicator_checked, (255 * 100 / 100));

        lv_style_init(&style_switch_knob);
        lv_style_set_bg_color(&style_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&style_switch_knob, (255 * 100 / 100));
        lv_style_set_pad_all(&style_switch_knob, 2);
        lv_style_set_border_color(&style_switch_knob, lv_color_hex(0xd1d5db));
        lv_style_set_border_width(&style_switch_knob, 1);
        lv_style_set_shadow_color(&style_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&style_switch_knob, (255 * 40 / 100));
        lv_style_set_shadow_width(&style_switch_knob, 16);
        lv_style_set_shadow_offset_y(&style_switch_knob, 2);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_switch_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Switch: styling parts");
    
    lv_obj_t * lv_switch_0 = lv_switch_create(lv_obj_0);
    lv_obj_set_width(lv_switch_0, 60);
    lv_obj_set_height(lv_switch_0, 30);
    lv_obj_add_style(lv_switch_0, &style_switch_main, LV_PART_MAIN);
    lv_obj_add_style(lv_switch_0, &style_switch_indicator_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_add_style(lv_switch_0, &style_switch_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_switch_1 = lv_switch_create(lv_obj_0);
    lv_obj_set_width(lv_switch_1, 60);
    lv_obj_set_height(lv_switch_1, 30);
    lv_obj_set_state(lv_switch_1, LV_STATE_CHECKED, true);
    lv_obj_add_style(lv_switch_1, &style_switch_main, LV_PART_MAIN);
    lv_obj_add_style(lv_switch_1, &style_switch_indicator_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_add_style(lv_switch_1, &style_switch_knob, LV_PART_KNOB);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

