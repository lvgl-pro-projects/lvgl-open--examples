/**
 * @file lv_example_flex_rtl_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_flex_rtl_gen.h"
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

lv_obj_t * lv_example_flex_rtl_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_label;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_label);
        lv_style_set_bg_opa(&style_label, (255 * 100 / 100));
        lv_style_set_text_color(&style_label, lv_color_hex(0xffffff));
        lv_style_set_pad_all(&style_label, 8);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_flex_rtl_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_0, 10, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "RTL: items flow from right to left");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, "LTR (default):");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_2, "First");
    lv_obj_add_style(lv_label_2, &style_label, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_3, lv_color_hex(0x2ecc71), 0);
    lv_label_set_text(lv_label_3, "Second");
    lv_obj_add_style(lv_label_3, &style_label, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_4, lv_color_hex(0xe74c3c), 0);
    lv_label_set_text(lv_label_4, "Third");
    lv_obj_add_style(lv_label_4, &style_label, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_5, "RTL:");
    
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_base_dir(lv_obj_2, LV_BASE_DIR_RTL, 0);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_2);
    lv_obj_set_style_bg_color(lv_label_6, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_6, "First");
    lv_obj_add_style(lv_label_6, &style_label, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_2);
    lv_obj_set_style_bg_color(lv_label_7, lv_color_hex(0x2ecc71), 0);
    lv_label_set_text(lv_label_7, "Second");
    lv_obj_add_style(lv_label_7, &style_label, 0);
    
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_2);
    lv_obj_set_style_bg_color(lv_label_8, lv_color_hex(0xe74c3c), 0);
    lv_label_set_text(lv_label_8, "Third");
    lv_obj_add_style(lv_label_8, &style_label, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

