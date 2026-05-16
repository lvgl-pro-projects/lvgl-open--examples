/**
 * @file lv_example_style_border_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_style_border_gen.h"
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

lv_obj_t * lv_example_style_border_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_framed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_framed);
        lv_style_set_radius(&style_framed, 20);
        lv_style_set_bg_opa(&style_framed, (255 * 100 / 100));
        lv_style_set_bg_color(&style_framed, lv_color_hex(0xffffff));
        lv_style_set_border_color(&style_framed, ACCENT);
        lv_style_set_border_width(&style_framed, 4);
        lv_style_set_border_opa(&style_framed, (255 * 60 / 100));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_style_border_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Style: border");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 210);
    lv_obj_set_height(lv_obj_1, 140);
    lv_obj_add_style(lv_obj_1, &style_framed, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Bordered card");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

