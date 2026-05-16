/**
 * @file lv_example_style_arc_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_arc_gen.h"
#include "../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define ACCENT lv_color_hex(0x6366f1)

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

lv_obj_t * lv_example_style_arc_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_track;
    static lv_style_t style_progress;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_track);
        lv_style_set_arc_color(&style_track, lv_color_hex(0xe2e8f0));
        lv_style_set_arc_width(&style_track, 14);
        lv_style_set_arc_rounded(&style_track, true);

        lv_style_init(&style_progress);
        lv_style_set_arc_color(&style_progress, ACCENT);
        lv_style_set_arc_width(&style_progress, 14);
        lv_style_set_arc_rounded(&style_progress, true);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_arc_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: arc stroke");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_width(lv_arc_0, 160);
    lv_obj_set_height(lv_arc_0, 160);
    lv_arc_set_min_value(lv_arc_0, 0);
    lv_arc_set_max_value(lv_arc_0, 100);
    lv_arc_set_value(lv_arc_0, 68);
    lv_obj_add_style(lv_arc_0, &style_track, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &style_progress, LV_PART_INDICATOR);
    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "68%");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

