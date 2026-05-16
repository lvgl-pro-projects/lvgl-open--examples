/**
 * @file lv_example_scroll_scrollbar_mode_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_scroll_scrollbar_mode_gen.h"
#include "../../../lvgl_open_examples.h"

/*********************
 *      DEFINES
 *********************/

#define ACCENT lv_color_hex(0x9429ff)

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

lv_obj_t * lv_example_scroll_scrollbar_mode_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_scrollbar;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_scrollbar);
        lv_style_set_width(&style_scrollbar, 10);
        lv_style_set_radius(&style_scrollbar, 5);
        lv_style_set_bg_color(&style_scrollbar, ACCENT);
        lv_style_set_bg_opa(&style_scrollbar, (255 * 100 / 100));
        lv_style_set_pad_right(&style_scrollbar, 4);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_scroll_scrollbar_mode_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Scroll: scrollbar mode");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, 160);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_column(lv_obj_1, 16, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_2, 130);
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_2, 8, 0);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_2);
    lv_label_set_text(lv_label_1, "mode: off");
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_2);
    lv_obj_set_width(lv_button_0, lv_pct(100));
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "A");
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_2);
    lv_obj_set_width(lv_button_1, lv_pct(100));
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_1);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "B");
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_2);
    lv_obj_set_width(lv_button_2, lv_pct(100));
    lv_obj_t * lv_label_4 = lv_label_create(lv_button_2);
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_4, "C");
    
    lv_obj_t * lv_button_3 = lv_button_create(lv_obj_2);
    lv_obj_set_width(lv_button_3, lv_pct(100));
    lv_obj_t * lv_label_5 = lv_label_create(lv_button_3);
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_5, "D");
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_3, 130);
    lv_obj_set_height(lv_obj_3, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_3, 8, 0);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_ON);
    lv_obj_add_style(lv_obj_3, &style_scrollbar, LV_PART_SCROLLBAR);
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_3);
    lv_label_set_text(lv_label_6, "mode: on");
    
    lv_obj_t * lv_button_4 = lv_button_create(lv_obj_3);
    lv_obj_set_width(lv_button_4, lv_pct(100));
    lv_obj_t * lv_label_7 = lv_label_create(lv_button_4);
    lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_7, "A");
    
    lv_obj_t * lv_button_5 = lv_button_create(lv_obj_3);
    lv_obj_set_width(lv_button_5, lv_pct(100));
    lv_obj_t * lv_label_8 = lv_label_create(lv_button_5);
    lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_8, "B");
    
    lv_obj_t * lv_button_6 = lv_button_create(lv_obj_3);
    lv_obj_set_width(lv_button_6, lv_pct(100));
    lv_obj_t * lv_label_9 = lv_label_create(lv_button_6);
    lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_9, "C");
    
    lv_obj_t * lv_button_7 = lv_button_create(lv_obj_3);
    lv_obj_set_width(lv_button_7, lv_pct(100));
    lv_obj_t * lv_label_10 = lv_label_create(lv_button_7);
    lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_10, "D");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

