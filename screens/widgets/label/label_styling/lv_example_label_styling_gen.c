/**
 * @file lv_example_label_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_styling_gen.h"
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

lv_obj_t * lv_example_label_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_badge;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_badge);
        lv_style_set_bg_opa(&style_badge, (255 * 100 / 100));
        lv_style_set_bg_color(&style_badge, lv_color_hex(0x6366f1));
        lv_style_set_radius(&style_badge, 100);
        lv_style_set_pad_left(&style_badge, 14);
        lv_style_set_pad_right(&style_badge, 14);
        lv_style_set_pad_top(&style_badge, 4);
        lv_style_set_pad_bottom(&style_badge, 4);
        lv_style_set_text_color(&style_badge, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Label: styling");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, "NEW");
    lv_obj_add_style(lv_label_1, &style_badge, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_2, "Heads up");
    lv_obj_set_style_bg_opa(lv_label_2, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0xfef3c7), 0);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x92400e), 0);
    lv_obj_set_style_border_color(lv_label_2, lv_color_hex(0xf59e0b), 0);
    lv_obj_set_style_border_width(lv_label_2, 2, 0);
    lv_obj_set_style_radius(lv_label_2, 8, 0);
    lv_obj_set_style_pad_all(lv_label_2, 10, 0);
    lv_obj_set_style_outline_color(lv_label_2, lv_color_hex(0xf59e0b), 0);
    lv_obj_set_style_outline_width(lv_label_2, 3, 0);
    lv_obj_set_style_outline_pad(lv_label_2, 3, 0);
    lv_obj_set_style_outline_opa(lv_label_2, 80, 0);
    lv_obj_set_style_shadow_color(lv_label_2, lv_color_hex(0x78350f), 0);
    lv_obj_set_style_shadow_width(lv_label_2, 14, 0);
    lv_obj_set_style_shadow_offset_y(lv_label_2, 3, 0);
    lv_obj_set_style_shadow_opa(lv_label_2, 100, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

