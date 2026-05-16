/**
 * @file lv_example_arc_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_arc_styling_gen.h"
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

lv_obj_t * lv_example_arc_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_arc_bg;
    static lv_style_t style_arc_indicator;
    static lv_style_t style_arc_knob;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_arc_bg);
        lv_style_set_arc_color(&style_arc_bg, lv_color_hex(0xced8e4));
        lv_style_set_arc_width(&style_arc_bg, 22);
        lv_style_set_arc_rounded(&style_arc_bg, true);
        lv_style_set_arc_opa(&style_arc_bg, 180);

        lv_style_init(&style_arc_indicator);
        lv_style_set_arc_color(&style_arc_indicator, lv_color_hex(0x6366f1));
        lv_style_set_arc_width(&style_arc_indicator, 14);
        lv_style_set_arc_rounded(&style_arc_indicator, true);
        lv_style_set_pad_all(&style_arc_indicator, 4);

        lv_style_init(&style_arc_knob);
        lv_style_set_bg_opa(&style_arc_knob, (255 * 100 / 100));
        lv_style_set_bg_color(&style_arc_knob, lv_color_hex(0x6366f1));
        lv_style_set_border_color(&style_arc_knob, lv_color_hex(0xffffff));
        lv_style_set_border_width(&style_arc_knob, 3);
        lv_style_set_pad_all(&style_arc_knob, 6);
        lv_style_set_shadow_color(&style_arc_knob, lv_color_hex(0x312e81));
        lv_style_set_shadow_width(&style_arc_knob, 10);
        lv_style_set_shadow_opa(&style_arc_knob, 160);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_arc_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 20, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Arc: styling parts");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_width(lv_arc_0, 160);
    lv_obj_set_height(lv_arc_0, 160);
    lv_arc_set_min_value(lv_arc_0, 0);
    lv_arc_set_max_value(lv_arc_0, 100);
    lv_arc_set_value(lv_arc_0, 65);
    lv_obj_add_style(lv_arc_0, &style_arc_bg, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &style_arc_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &style_arc_knob, LV_PART_KNOB);
    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "65");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

