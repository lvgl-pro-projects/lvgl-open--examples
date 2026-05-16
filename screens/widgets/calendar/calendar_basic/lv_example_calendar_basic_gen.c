/**
 * @file lv_example_calendar_basic_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_calendar_basic_gen.h"
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

lv_obj_t * lv_example_calendar_basic_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_calendar_basic_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Calendar: basics");
    
    lv_obj_t * lv_calendar_0 = lv_calendar_create(lv_obj_0);
    lv_obj_set_width(lv_calendar_0, 280);
    lv_obj_set_height(lv_calendar_0, 200);
    lv_calendar_set_today_year(lv_calendar_0, 2026);
    lv_calendar_set_today_month(lv_calendar_0, 5);
    lv_calendar_set_today_day(lv_calendar_0, 15);
    lv_calendar_set_shown_year(lv_calendar_0, 2026);
    lv_calendar_set_shown_month(lv_calendar_0, 5);
    lv_obj_t * lv_calendar_header_arrow_0 = lv_calendar_add_header_arrow(lv_calendar_0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

