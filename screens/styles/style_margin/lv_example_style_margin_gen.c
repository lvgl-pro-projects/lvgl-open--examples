/**
 * @file lv_example_style_margin_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_margin_gen.h"
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

lv_obj_t * lv_example_style_margin_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_chip;
    static lv_style_t style_chip_accent;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_chip);
        lv_style_set_radius(&style_chip, 10);
        lv_style_set_bg_opa(&style_chip, (255 * 100 / 100));
        lv_style_set_bg_color(&style_chip, lv_color_hex(0xe2e8f0));
        lv_style_set_pad_all(&style_chip, 14);

        lv_style_init(&style_chip_accent);
        lv_style_set_radius(&style_chip_accent, 10);
        lv_style_set_bg_opa(&style_chip_accent, (255 * 100 / 100));
        lv_style_set_bg_color(&style_chip_accent, ACCENT);
        lv_style_set_pad_all(&style_chip_accent, 14);
        lv_style_set_text_color(&style_chip_accent, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_margin_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: margin");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_column(lv_obj_1, 8, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_1, "A");
    lv_obj_add_style(lv_label_1, &style_chip, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_2, "B");
    lv_obj_set_style_margin_left(lv_label_2, 24, 0);
    lv_obj_set_style_margin_right(lv_label_2, 24, 0);
    lv_obj_add_style(lv_label_2, &style_chip_accent, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_3, "C");
    lv_obj_add_style(lv_label_3, &style_chip, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

