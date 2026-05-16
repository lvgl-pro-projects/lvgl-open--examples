/**
 * @file lv_example_bar_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_bar_styling_gen.h"
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

lv_obj_t * lv_example_bar_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_bar_track;
    static lv_style_t style_bar_indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_bar_track);
        lv_style_set_bg_opa(&style_bar_track, (255 * 100 / 100));
        lv_style_set_bg_color(&style_bar_track, lv_color_hex(0x1f2937));
        lv_style_set_radius(&style_bar_track, 12);
        lv_style_set_border_color(&style_bar_track, lv_color_hex(0x0f172a));
        lv_style_set_border_width(&style_bar_track, 1);

        lv_style_init(&style_bar_indicator);
        lv_style_set_bg_opa(&style_bar_indicator, (255 * 100 / 100));
        lv_style_set_bg_color(&style_bar_indicator, lv_color_hex(0x10b981));
        lv_style_set_bg_grad_color(&style_bar_indicator, lv_color_hex(0x06b6d4));
        lv_style_set_bg_grad_dir(&style_bar_indicator, LV_GRAD_DIR_HOR);
        lv_style_set_radius(&style_bar_indicator, 12);
        lv_style_set_shadow_color(&style_bar_indicator, lv_color_hex(0x064e3b));
        lv_style_set_shadow_width(&style_bar_indicator, 8);
        lv_style_set_shadow_spread(&style_bar_indicator, -2);
        lv_style_set_shadow_opa(&style_bar_indicator, 180);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_bar_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 20, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Bar: styling parts");
    
    lv_obj_t * lv_bar_0 = lv_bar_create(lv_obj_0);
    lv_obj_set_width(lv_bar_0, 240);
    lv_obj_set_height(lv_bar_0, 22);
    lv_bar_set_min_value(lv_bar_0, 0);
    lv_bar_set_max_value(lv_bar_0, 100);
    lv_bar_set_value(lv_bar_0, 65, false);
    lv_obj_add_style(lv_bar_0, &style_bar_track, LV_PART_MAIN);
    lv_obj_add_style(lv_bar_0, &style_bar_indicator, LV_PART_INDICATOR);
    
    lv_obj_t * lv_bar_1 = lv_bar_create(lv_obj_0);
    lv_obj_set_width(lv_bar_1, 240);
    lv_obj_set_height(lv_bar_1, 10);
    lv_bar_set_min_value(lv_bar_1, 0);
    lv_bar_set_max_value(lv_bar_1, 100);
    lv_bar_set_value(lv_bar_1, 35, false);
    lv_obj_set_style_bg_color(lv_bar_1, lv_color_hex(0xe5e7eb), 0);
    lv_obj_set_style_bg_opa(lv_bar_1, (255 * 100 / 100), 0);
    lv_obj_set_style_radius(lv_bar_1, 2, 0);
    lv_obj_set_style_border_color(lv_bar_1, lv_color_hex(0xd1d5db), 0);
    lv_obj_set_style_border_width(lv_bar_1, 1, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

