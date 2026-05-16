/**
 * @file lv_example_label_long_mode_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_long_mode_gen.h"
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

lv_obj_t * lv_example_label_long_mode_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_label_bg;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_label_bg);
        lv_style_set_bg_opa(&style_label_bg, (255 * 100 / 100));
        lv_style_set_radius(&style_label_bg, 6);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_long_mode_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Label: all long_mode options");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_1, 30);
    lv_obj_set_width(lv_label_1, 170);
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_bg_color(lv_label_1, lv_color_hex(0xd6eaf8), 0);
    lv_label_set_text(lv_label_1, "Wrap keeps all text visible by splitting long lines into multiple rows.");
    lv_obj_add_style(lv_label_1, &style_label_bg, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_2, 102);
    lv_obj_set_width(lv_label_2, 170);
    lv_obj_set_height(lv_label_2, 32);
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_DOTS);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0xd5f5e3), 0);
    lv_label_set_text(lv_label_2, "Dots shortens overflowing text and replaces the tail with '...'");
    lv_obj_add_style(lv_label_2, &style_label_bg, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_3, 146);
    lv_obj_set_width(lv_label_3, 170);
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_SCROLL);
    lv_obj_set_style_bg_color(lv_label_3, lv_color_hex(0xfdebd0), 0);
    lv_label_set_text(lv_label_3, "Scroll moves overflowing text back and forth inside the label area.");
    lv_obj_add_style(lv_label_3, &style_label_bg, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_4, 190);
    lv_obj_set_width(lv_label_4, 170);
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_SCROLL_CIRCULAR);
    lv_obj_set_style_bg_color(lv_label_4, lv_color_hex(0xfadbd8), 0);
    lv_label_set_text(lv_label_4, "Scroll circular continuously loops overflowing text forever.");
    lv_obj_add_style(lv_label_4, &style_label_bg, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
    lv_obj_set_y(lv_label_5, 234);
    lv_obj_set_width(lv_label_5, 170);
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_bg_color(lv_label_5, lv_color_hex(0xebdef0), 0);
    lv_label_set_text(lv_label_5, "Clip simply cuts any part that falls outside the label width.");
    lv_obj_add_style(lv_label_5, &style_label_bg, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

