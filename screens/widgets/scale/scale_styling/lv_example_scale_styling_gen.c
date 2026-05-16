/**
 * @file lv_example_scale_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scale_styling_gen.h"
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

lv_obj_t * lv_example_scale_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_scale_main;
    static lv_style_t style_scale_items;
    static lv_style_t style_scale_indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_scale_main);
        lv_style_set_line_color(&style_scale_main, lv_color_hex(0x6b7280));
        lv_style_set_line_width(&style_scale_main, 2);

        lv_style_init(&style_scale_items);
        lv_style_set_line_color(&style_scale_items, lv_color_hex(0x9ca3af));
        lv_style_set_line_width(&style_scale_items, 1);

        lv_style_init(&style_scale_indicator);
        lv_style_set_line_color(&style_scale_indicator, lv_color_hex(0x6366f1));
        lv_style_set_line_width(&style_scale_indicator, 3);
        lv_style_set_text_color(&style_scale_indicator, lv_color_hex(0x6366f1));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scale_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Scale: styling parts");
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_0, 280);
    lv_obj_set_height(lv_scale_0, 80);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_0, 21);
    lv_scale_set_major_tick_every(lv_scale_0, 4);
    lv_scale_set_label_show(lv_scale_0, true);
    lv_scale_set_min_value(lv_scale_0, 0);
    lv_scale_set_max_value(lv_scale_0, 100);
    lv_obj_set_style_transform_rotation(lv_scale_0, 300, LV_PART_INDICATOR);
    lv_obj_add_style(lv_scale_0, &style_scale_main, LV_PART_MAIN);
    lv_obj_add_style(lv_scale_0, &style_scale_items, LV_PART_ITEMS);
    lv_obj_add_style(lv_scale_0, &style_scale_indicator, LV_PART_INDICATOR);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

