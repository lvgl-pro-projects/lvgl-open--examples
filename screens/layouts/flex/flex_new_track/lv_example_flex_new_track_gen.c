/**
 * @file lv_example_flex_new_track_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_flex_new_track_gen.h"
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

lv_obj_t * lv_example_flex_new_track_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_day;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_day);
        lv_style_set_bg_opa(&style_day, (255 * 100 / 100));
        lv_style_set_text_color(&style_day, lv_color_hex(0xffffff));
        lv_style_set_pad_all(&style_day, 6);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_flex_new_track_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Force items onto a new flex row");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_1, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_1, "Mon");
    lv_obj_add_style(lv_label_1, &style_day, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_2, "Tue");
    lv_obj_add_style(lv_label_2, &style_day, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_3, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_3, "Wed");
    lv_obj_add_style(lv_label_3, &style_day, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_4, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_4, "Thu");
    lv_obj_add_style(lv_label_4, &style_day, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_5, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_5, "Fri");
    lv_obj_add_style(lv_label_5, &style_day, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_1);
    lv_obj_set_flag(lv_label_6, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK, true);
    lv_obj_set_style_bg_color(lv_label_6, lv_color_hex(0xe74c3c), 0);
    lv_label_set_text(lv_label_6, "Sat");
    lv_obj_add_style(lv_label_6, &style_day, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_label_7, lv_color_hex(0xe74c3c), 0);
    lv_label_set_text(lv_label_7, "Sun");
    lv_obj_add_style(lv_label_7, &style_day, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

