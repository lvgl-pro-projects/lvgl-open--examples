/**
 * @file lv_example_checkbox_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_checkbox_styling_gen.h"
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

lv_obj_t * lv_example_checkbox_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_cb_indicator;
    static lv_style_t style_cb_indicator_checked;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_cb_indicator);
        lv_style_set_bg_opa(&style_cb_indicator, (255 * 100 / 100));
        lv_style_set_bg_color(&style_cb_indicator, lv_color_hex(0xf9fafb));
        lv_style_set_radius(&style_cb_indicator, 6);
        lv_style_set_border_color(&style_cb_indicator, lv_color_hex(0x9ca3af));
        lv_style_set_border_width(&style_cb_indicator, 2);
        lv_style_set_pad_all(&style_cb_indicator, 4);

        lv_style_init(&style_cb_indicator_checked);
        lv_style_set_bg_color(&style_cb_indicator_checked, lv_color_hex(0x16a34a));
        lv_style_set_border_color(&style_cb_indicator_checked, lv_color_hex(0x14532d));
        lv_style_set_outline_color(&style_cb_indicator_checked, lv_color_hex(0x16a34a));
        lv_style_set_outline_width(&style_cb_indicator_checked, 4);
        lv_style_set_outline_pad(&style_cb_indicator_checked, 2);
        lv_style_set_outline_opa(&style_cb_indicator_checked, 80);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_checkbox_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 14, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Checkbox: styling parts and states");
    
    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_0, "Default look");
    lv_obj_set_style_text_color(lv_checkbox_0, lv_color_hex(0x111827), 0);
    lv_obj_set_style_pad_column(lv_checkbox_0, 10, 0);
    lv_obj_add_style(lv_checkbox_0, &style_cb_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_checkbox_0, &style_cb_indicator_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
    
    lv_obj_t * lv_checkbox_1 = lv_checkbox_create(lv_obj_0);
    lv_checkbox_set_text(lv_checkbox_1, "Pre-checked");
    lv_obj_set_state(lv_checkbox_1, LV_STATE_CHECKED, true);
    lv_obj_set_style_text_color(lv_checkbox_1, lv_color_hex(0x111827), 0);
    lv_obj_set_style_pad_column(lv_checkbox_1, 10, 0);
    lv_obj_add_style(lv_checkbox_1, &style_cb_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_checkbox_1, &style_cb_indicator_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

