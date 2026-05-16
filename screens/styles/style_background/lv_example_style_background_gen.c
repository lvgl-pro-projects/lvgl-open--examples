/**
 * @file lv_example_style_background_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_background_gen.h"
#include "../../../lvgl_open_examples.h"

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

lv_obj_t * lv_example_style_background_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_grad;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_grad);
        lv_style_set_radius(&style_grad, 20);
        lv_style_set_bg_opa(&style_grad, (255 * 100 / 100));
        lv_style_set_bg_color(&style_grad, lv_color_hex(0x6366f1));
        lv_style_set_bg_grad_color(&style_grad, lv_color_hex(0xec4899));
        lv_style_set_bg_grad_dir(&style_grad, LV_GRAD_DIR_VER);
        lv_style_set_bg_main_stop(&style_grad, 80);
        lv_style_set_bg_grad_stop(&style_grad, 220);
        lv_style_set_shadow_color(&style_grad, lv_color_hex(0x6366f1));
        lv_style_set_shadow_width(&style_grad, 26);
        lv_style_set_shadow_offset_y(&style_grad, 10);
        lv_style_set_shadow_opa(&style_grad, 70);
        lv_style_set_text_color(&style_grad, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_background_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: background gradient");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 210);
    lv_obj_set_height(lv_obj_1, 150);
    lv_obj_add_style(lv_obj_1, &style_grad, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Gradient");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

