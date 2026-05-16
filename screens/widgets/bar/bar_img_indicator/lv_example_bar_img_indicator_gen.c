/**
 * @file lv_example_bar_img_indicator_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_bar_img_indicator_gen.h"
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

lv_obj_t * lv_example_bar_img_indicator_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_bar_track;
    static lv_style_t style_bar_indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_bar_track);
        lv_style_set_bg_image_src(&style_bar_track, img_bar_bg);
        lv_style_set_bg_opa(&style_bar_track, 0);
        lv_style_set_radius(&style_bar_track, 0);

        lv_style_init(&style_bar_indicator);
        lv_style_set_bg_image_src(&style_bar_indicator, img_bar_indicator);
        lv_style_set_bg_opa(&style_bar_indicator, 0);
        lv_style_set_radius(&style_bar_indicator, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_bar_img_indicator_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_bar_0 = lv_bar_create(lv_obj_0);
    lv_obj_set_width(lv_bar_0, 280);
    lv_obj_set_height(lv_bar_0, 35);
    lv_bar_set_min_value(lv_bar_0, 0);
    lv_bar_set_max_value(lv_bar_0, 20);
    lv_bar_bind_value(lv_bar_0, &subject_value2);
    lv_obj_add_style(lv_bar_0, &style_bar_track, LV_PART_MAIN);
    lv_obj_add_style(lv_bar_0, &style_bar_indicator, LV_PART_INDICATOR);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_column(lv_obj_1, 12, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_width(lv_obj_1, 150);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_1);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_0, "-");
    lv_obj_set_style_text_font(lv_label_0, font_example_large, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_0, &subject_value2, LV_EVENT_CLICKED, -1);
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(lv_button_0, &subject_value2, LV_EVENT_LONG_PRESSED_REPEAT, -1);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_bind_text(lv_label_1, &subject_value2, NULL);
    lv_obj_set_style_text_font(lv_label_1, font_example_large, 0);
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_1);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "+");
    lv_obj_set_style_text_font(lv_label_2, font_example_large, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_2 = lv_obj_add_subject_increment_event(lv_button_1, &subject_value2, LV_EVENT_CLICKED, 1);
    lv_subject_increment_dsc_t * subject_increment_event_3 = lv_obj_add_subject_increment_event(lv_button_1, &subject_value2, LV_EVENT_LONG_PRESSED_REPEAT, 1);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

