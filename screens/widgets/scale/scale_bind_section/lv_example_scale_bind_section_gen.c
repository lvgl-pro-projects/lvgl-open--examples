/**
 * @file lv_example_scale_bind_section_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scale_bind_section_gen.h"
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

lv_obj_t * lv_example_scale_bind_section_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_section_main;
    static lv_style_t style_section_items;
    static lv_style_t style_section_indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_section_main);
        lv_style_set_line_color(&style_section_main, lv_color_hex(0xef4444));
        lv_style_set_line_width(&style_section_main, 4);
        lv_style_set_text_color(&style_section_main, lv_color_hex(0xef4444));

        lv_style_init(&style_section_items);
        lv_style_set_line_color(&style_section_items, lv_color_hex(0xef4444));
        lv_style_set_line_width(&style_section_items, 2);
        lv_style_set_text_color(&style_section_items, lv_color_hex(0xef4444));

        lv_style_init(&style_section_indicator);
        lv_style_set_line_color(&style_section_indicator, lv_color_hex(0xef4444));
        lv_style_set_line_width(&style_section_indicator, 4);
        lv_style_set_text_color(&style_section_indicator, lv_color_hex(0xef4444));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scale_bind_section_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Scale: bind section bounds");
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_0, 280);
    lv_obj_set_height(lv_scale_0, 80);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_0, 11);
    lv_scale_set_major_tick_every(lv_scale_0, 2);
    lv_scale_set_label_show(lv_scale_0, true);
    lv_scale_set_min_value(lv_scale_0, 0);
    lv_scale_set_max_value(lv_scale_0, 100);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(lv_scale_0);
    lv_scale_set_section_style_main(lv_scale_0, lv_scale_section_0, &style_section_main);
    lv_scale_set_section_style_items(lv_scale_0, lv_scale_section_0, &style_section_items);
    lv_scale_set_section_style_indicator(lv_scale_0, lv_scale_section_0, &style_section_indicator);
    lv_scale_bind_section_min_value(lv_scale_0, lv_scale_section_0, &subject_value2);
    lv_scale_bind_section_max_value(lv_scale_0, lv_scale_section_0, &subject_value);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, "Section start (subject_value2)");
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_0, 240);
    lv_slider_bind_value(lv_slider_0, &subject_value2);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_2, "Section end (subject_value)");
    
    lv_obj_t * lv_slider_1 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_1, 240);
    lv_slider_bind_value(lv_slider_1, &subject_value);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

