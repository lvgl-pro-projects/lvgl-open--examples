/**
 * @file lv_example_style_text_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_text_gen.h"
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

lv_obj_t * lv_example_style_text_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_card;
    static lv_style_t style_heading;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_card);
        lv_style_set_radius(&style_card, 16);
        lv_style_set_bg_opa(&style_card, (255 * 100 / 100));
        lv_style_set_bg_color(&style_card, lv_color_hex(0xffffff));
        lv_style_set_border_width(&style_card, 1);
        lv_style_set_border_color(&style_card, lv_color_hex(0xe2e8f0));
        lv_style_set_pad_all(&style_card, 22);

        lv_style_init(&style_heading);
        lv_style_set_text_color(&style_heading, ACCENT);
        lv_style_set_text_letter_space(&style_heading, 4);
        lv_style_set_text_line_space(&style_heading, 14);
        lv_style_set_text_decor(&style_heading, LV_TEXT_DECOR_UNDERLINE);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_text_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: text properties");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 240);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_add_style(lv_obj_1, &style_card, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_1, "Modern\nTypography");
    lv_obj_add_style(lv_label_1, &style_heading, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

