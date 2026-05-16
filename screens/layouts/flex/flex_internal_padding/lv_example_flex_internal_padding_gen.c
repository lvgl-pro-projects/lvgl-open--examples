/**
 * @file lv_example_flex_internal_padding_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_flex_internal_padding_gen.h"
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

lv_obj_t * lv_example_flex_internal_padding_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_tag;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_tag);
        lv_style_set_bg_opa(&style_tag, (255 * 100 / 100));
        lv_style_set_pad_all(&style_tag, 8);
        lv_style_set_radius(&style_tag, 4);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_flex_internal_padding_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_0, 10, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Internal padding: gap between flex items");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_style_pad_column(lv_obj_1, 10, 0);
    lv_obj_set_style_pad_row(lv_obj_1, 30, 0);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_1, lv_color_hex(0x4a90d9), 0);
    lv_label_set_text(lv_label_1, "HTML");
    lv_obj_add_style(lv_label_1, &style_tag, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0xe67e22), 0);
    lv_label_set_text(lv_label_2, "CSS");
    lv_obj_add_style(lv_label_2, &style_tag, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_3, lv_color_hex(0x27ae60), 0);
    lv_label_set_text(lv_label_3, "JavaScript");
    lv_obj_add_style(lv_label_3, &style_tag, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_4, lv_color_hex(0x8e44ad), 0);
    lv_label_set_text(lv_label_4, "Python");
    lv_obj_add_style(lv_label_4, &style_tag, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_5, lv_color_hex(0xc0392b), 0);
    lv_label_set_text(lv_label_5, "C++");
    lv_obj_add_style(lv_label_5, &style_tag, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_6, lv_color_hex(0x16a085), 0);
    lv_label_set_text(lv_label_6, "Rust");
    lv_obj_add_style(lv_label_6, &style_tag, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

