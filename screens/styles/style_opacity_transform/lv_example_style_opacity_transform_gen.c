/**
 * @file lv_example_style_opacity_transform_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_opacity_transform_gen.h"
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

lv_obj_t * lv_example_style_opacity_transform_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_btn;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_btn);
        lv_style_set_radius(&style_btn, 10);
        lv_style_set_bg_opa(&style_btn, (255 * 100 / 100));
        lv_style_set_bg_color(&style_btn, ACCENT);
        lv_style_set_pad_all(&style_btn, 12);
        lv_style_set_text_color(&style_btn, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_opacity_transform_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: opacity and transform");
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_0, 130);
    lv_obj_add_style(lv_button_0, &style_btn, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Normal");
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_1, 130);
    lv_obj_set_style_opa(lv_button_1, 128, 0);
    lv_obj_add_style(lv_button_1, &style_btn, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "Opa 50%");
    
    lv_obj_t * lv_button_2 = lv_button_create(lv_obj_0);
    lv_obj_set_width(lv_button_2, 130);
    lv_obj_set_style_opa(lv_button_2, 128, 0);
    lv_obj_set_style_transform_rotation(lv_button_2, 110, 0);
    lv_obj_set_style_transform_pivot_x(lv_button_2, lv_pct(50), 0);
    lv_obj_set_style_transform_pivot_y(lv_button_2, lv_pct(50), 0);
    lv_obj_set_style_transform_scale_x(lv_button_2, 420, 0);
    lv_obj_add_style(lv_button_2, &style_btn, 0);
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_2);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "Transformed");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

