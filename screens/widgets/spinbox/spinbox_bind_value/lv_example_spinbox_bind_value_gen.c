/**
 * @file lv_example_spinbox_bind_value_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_spinbox_bind_value_gen.h"
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

lv_obj_t * lv_example_spinbox_bind_value_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_spinbox_bind_value_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Spinbox: edit, arc displays");
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_width(lv_arc_0, 160);
    lv_obj_set_height(lv_arc_0, 160);
    lv_arc_bind_value(lv_arc_0, &subject_value);
    lv_obj_t * lv_spinbox_0 = lv_spinbox_create(lv_arc_0);
    lv_obj_set_width(lv_spinbox_0, 80);
    lv_spinbox_set_digit_count(lv_spinbox_0, 3);
    lv_spinbox_set_min_value(lv_spinbox_0, 0);
    lv_spinbox_set_max_value(lv_spinbox_0, 100);
    lv_spinbox_set_step(lv_spinbox_0, 1);
    lv_spinbox_bind_value(lv_spinbox_0, &subject_value);
    lv_obj_set_align(lv_spinbox_0, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_spinbox_0, -20);
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_arc_0);
    lv_obj_set_align(lv_button_0, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_button_0, 20);
    lv_obj_set_x(lv_button_0, -20);
    lv_obj_set_width(lv_button_0, 30);
    lv_obj_set_height(lv_button_0, 30);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_1, "-");
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_0, &subject_value, LV_EVENT_CLICKED, -1);
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(lv_button_0, &subject_value, LV_EVENT_LONG_PRESSED_REPEAT, -1);
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_arc_0);
    lv_obj_set_align(lv_button_1, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_button_1, 20);
    lv_obj_set_x(lv_button_1, 20);
    lv_obj_set_width(lv_button_1, 30);
    lv_obj_set_height(lv_button_1, 30);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_2, "+");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    
    lv_subject_increment_dsc_t * subject_increment_event_2 = lv_obj_add_subject_increment_event(lv_button_1, &subject_value, LV_EVENT_CLICKED, 1);
    lv_subject_increment_dsc_t * subject_increment_event_3 = lv_obj_add_subject_increment_event(lv_button_1, &subject_value, LV_EVENT_LONG_PRESSED_REPEAT, 1);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

