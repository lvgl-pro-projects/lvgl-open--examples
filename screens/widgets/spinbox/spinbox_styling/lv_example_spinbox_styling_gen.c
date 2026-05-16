/**
 * @file lv_example_spinbox_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_spinbox_styling_gen.h"
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

lv_obj_t * lv_example_spinbox_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_spinbox_main;
    static lv_style_t style_spinbox_cursor;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_spinbox_main);
        lv_style_set_bg_color(&style_spinbox_main, lv_color_hex(0xf3f4f6));
        lv_style_set_bg_opa(&style_spinbox_main, (255 * 100 / 100));
        lv_style_set_radius(&style_spinbox_main, 8);
        lv_style_set_border_color(&style_spinbox_main, lv_color_hex(0xd1d5db));
        lv_style_set_border_width(&style_spinbox_main, 1);
        lv_style_set_pad_all(&style_spinbox_main, 8);
        lv_style_set_text_color(&style_spinbox_main, lv_color_hex(0x111827));
        lv_style_set_text_letter_space(&style_spinbox_main, 4);

        lv_style_init(&style_spinbox_cursor);
        lv_style_set_bg_opa(&style_spinbox_cursor, 0);
        lv_style_set_text_opa(&style_spinbox_cursor, 0);
        lv_style_set_border_color(&style_spinbox_cursor, lv_color_hex(0x6366f1));
        lv_style_set_border_width(&style_spinbox_cursor, 2);
        lv_style_set_radius(&style_spinbox_cursor, 4);
        lv_style_set_pad_ver(&style_spinbox_cursor, 2);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_spinbox_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Spinbox: styling parts");
    
    lv_obj_t * lv_spinbox_0 = lv_spinbox_create(lv_obj_0);
    lv_obj_set_width(lv_spinbox_0, 180);
    lv_spinbox_set_digit_count(lv_spinbox_0, 5);
    lv_spinbox_set_value(lv_spinbox_0, 12345);
    lv_spinbox_set_dec_point_pos(lv_spinbox_0, 2);
    lv_spinbox_set_step(lv_spinbox_0, 1);
    lv_obj_add_style(lv_spinbox_0, &style_spinbox_main, LV_PART_MAIN);
    lv_obj_add_style(lv_spinbox_0, &style_spinbox_cursor, LV_PART_CURSOR);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

