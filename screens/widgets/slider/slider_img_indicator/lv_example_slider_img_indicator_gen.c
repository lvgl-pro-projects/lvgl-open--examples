/**
 * @file lv_example_slider_img_indicator_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_slider_img_indicator_gen.h"
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

lv_obj_t * lv_example_slider_img_indicator_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_slider_track;
    static lv_style_t style_slider_indicator;
    static lv_style_t style_slider_knob;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_slider_track);
        lv_style_set_bg_image_src(&style_slider_track, img_bar_bg);
        lv_style_set_bg_opa(&style_slider_track, 0);
        lv_style_set_radius(&style_slider_track, 0);

        lv_style_init(&style_slider_indicator);
        lv_style_set_bg_image_src(&style_slider_indicator, img_bar_indicator);
        lv_style_set_bg_opa(&style_slider_indicator, 0);
        lv_style_set_radius(&style_slider_indicator, 0);

        lv_style_init(&style_slider_knob);
        lv_style_set_bg_opa(&style_slider_knob, (255 * 100 / 100));
        lv_style_set_bg_color(&style_slider_knob, lv_color_hex(0x101820));
        lv_style_set_radius(&style_slider_knob, 4);
        lv_style_set_border_color(&style_slider_knob, lv_color_hex(0x00d4ff));
        lv_style_set_border_width(&style_slider_knob, 2);
        lv_style_set_pad_hor(&style_slider_knob, 0);
        lv_style_set_pad_ver(&style_slider_knob, 6);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_slider_img_indicator_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Slider: image as indicator");
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_obj_set_width(lv_slider_0, 280);
    lv_obj_set_height(lv_slider_0, 30);
    lv_slider_set_min_value(lv_slider_0, 0);
    lv_slider_set_max_value(lv_slider_0, 20);
    lv_slider_bind_value(lv_slider_0, &subject_value2);
    lv_obj_add_style(lv_slider_0, &style_slider_track, LV_PART_MAIN);
    lv_obj_add_style(lv_slider_0, &style_slider_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_slider_0, &style_slider_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_1, &subject_value2, "%d");
    lv_obj_set_style_text_font(lv_label_1, font_example_large, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

