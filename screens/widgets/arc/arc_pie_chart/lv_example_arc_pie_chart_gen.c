/**
 * @file lv_example_arc_pie_chart_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_arc_pie_chart_gen.h"
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

lv_obj_t * lv_example_arc_pie_chart_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_pie_main;
    static lv_style_t style_pie_indicator;
    static lv_style_t style_pie_knob;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_pie_main);
        lv_style_set_width(&style_pie_main, 200);
        lv_style_set_height(&style_pie_main, 200);
        lv_style_set_align(&style_pie_main, LV_ALIGN_CENTER);
        lv_style_set_y(&style_pie_main, 20);
        lv_style_set_arc_width(&style_pie_main, 100);
        lv_style_set_arc_rounded(&style_pie_main, false);

        lv_style_init(&style_pie_indicator);
        lv_style_set_arc_opa(&style_pie_indicator, 0);

        lv_style_init(&style_pie_knob);
        lv_style_set_bg_opa(&style_pie_knob, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_arc_pie_chart_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Arc: pie chart");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_flag(lv_arc_0, LV_OBJ_FLAG_CLICKABLE, false);
    lv_arc_set_bg_start_angle(lv_arc_0, 270);
    lv_arc_set_bg_end_angle(lv_arc_0, 335);
    lv_obj_set_style_arc_color(lv_arc_0, lv_color_hex(0xef4444), LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &style_pie_main, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &style_pie_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &style_pie_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
    lv_obj_set_flag(lv_arc_1, LV_OBJ_FLAG_CLICKABLE, false);
    lv_arc_set_bg_start_angle(lv_arc_1, 335);
    lv_arc_set_bg_end_angle(lv_arc_1, 38);
    lv_obj_set_style_arc_color(lv_arc_1, lv_color_hex(0xf59e0b), LV_PART_MAIN);
    lv_obj_add_style(lv_arc_1, &style_pie_main, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_1, &style_pie_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_1, &style_pie_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_arc_2 = lv_arc_create(lv_obj_0);
    lv_obj_set_flag(lv_arc_2, LV_OBJ_FLAG_CLICKABLE, false);
    lv_arc_set_bg_start_angle(lv_arc_2, 38);
    lv_arc_set_bg_end_angle(lv_arc_2, 142);
    lv_obj_set_style_arc_color(lv_arc_2, lv_color_hex(0x22c55e), LV_PART_MAIN);
    lv_obj_add_style(lv_arc_2, &style_pie_main, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_2, &style_pie_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_2, &style_pie_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_arc_3 = lv_arc_create(lv_obj_0);
    lv_obj_set_flag(lv_arc_3, LV_OBJ_FLAG_CLICKABLE, false);
    lv_arc_set_bg_start_angle(lv_arc_3, 142);
    lv_arc_set_bg_end_angle(lv_arc_3, 205);
    lv_obj_set_style_arc_color(lv_arc_3, lv_color_hex(0x3b82f6), LV_PART_MAIN);
    lv_obj_add_style(lv_arc_3, &style_pie_main, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_3, &style_pie_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_3, &style_pie_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_arc_4 = lv_arc_create(lv_obj_0);
    lv_obj_set_flag(lv_arc_4, LV_OBJ_FLAG_CLICKABLE, false);
    lv_arc_set_bg_start_angle(lv_arc_4, 205);
    lv_arc_set_bg_end_angle(lv_arc_4, 270);
    lv_obj_set_style_arc_color(lv_arc_4, lv_color_hex(0xa855f7), LV_PART_MAIN);
    lv_obj_add_style(lv_arc_4, &style_pie_main, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_4, &style_pie_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_4, &style_pie_knob, LV_PART_KNOB);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

