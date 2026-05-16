/**
 * @file lv_example_chart_ticks_labels_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_chart_ticks_labels_gen.h"
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

lv_obj_t * lv_example_chart_ticks_labels_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_chart_ticks_labels_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 8, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Chart: ticks and labels");
    
    lv_obj_t * lv_chart_0 = lv_chart_create(lv_obj_0);
    lv_obj_set_width(lv_chart_0, 280);
    lv_obj_set_height(lv_chart_0, 160);
    lv_chart_set_type(lv_chart_0, LV_CHART_TYPE_BAR);
    lv_chart_set_point_count(lv_chart_0, 6);
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(lv_chart_0, lv_color_hex(0x6366f1), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t lv_chart_0_values_0[] = {20, 45, 30, 70, 55, 80};
    lv_chart_set_series_values(lv_chart_0, lv_chart_series_0, lv_chart_0_values_0, 6);
    lv_chart_set_axis_min_value(lv_chart_0, LV_CHART_AXIS_PRIMARY_Y, 0);
    lv_chart_set_axis_max_value(lv_chart_0, LV_CHART_AXIS_PRIMARY_Y, 100);
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_obj_set_width(lv_scale_0, 280);
    lv_obj_set_height(lv_scale_0, 28);
    lv_obj_set_style_pad_hor(lv_scale_0, 24, 0);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_HORIZONTAL_BOTTOM);
    lv_scale_set_total_tick_count(lv_scale_0, 6);
    lv_scale_set_major_tick_every(lv_scale_0, 1);
    static const char *lv_scale_0_text_src_1[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", NULL};
    lv_scale_set_text_src(lv_scale_0, lv_scale_0_text_src_1);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

