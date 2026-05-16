/**
 * @file lv_example_tabview_tab_bar_style_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_tabview_tab_bar_style_gen.h"
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

lv_obj_t * lv_example_tabview_tab_bar_style_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_tabview_tab_bar_style_#");

    lv_obj_t * lv_tabview_0 = lv_tabview_create(lv_obj_0);
    lv_obj_set_width(lv_tabview_0, lv_pct(100));
    lv_obj_set_height(lv_tabview_0, lv_pct(100));
    lv_tabview_set_tab_bar_position(lv_tabview_0, LV_DIR_LEFT);
    lv_tabview_set_active(lv_tabview_0, 1);
    lv_obj_set_style_bg_color(lv_tabview_0, lv_color_hex(0x37474f), 0);
    lv_obj_set_style_bg_opa(lv_tabview_0, (255 * 100 / 100), 0);
    lv_obj_t * lv_tabview_tab_bar_0 = lv_tabview_get_tab_bar(lv_tabview_0);
    lv_obj_set_width(lv_tabview_tab_bar_0, 100);
    lv_obj_set_style_bg_color(lv_tabview_tab_bar_0, lv_color_hex(0x222831), 0);
    lv_obj_set_style_bg_opa(lv_tabview_tab_bar_0, (255 * 100 / 100), 0);
    lv_obj_set_style_text_color(lv_tabview_tab_bar_0, lv_color_hex(0xeeeeee), 0);
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "A");
    lv_obj_t * lv_label_0 = lv_label_create(lv_tabview_tab_0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xeeeeee), 0);
    lv_label_set_text(lv_label_0, "tab view bg = 0x37474f");
    
    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "B");
    lv_obj_set_style_bg_color(lv_tabview_0, lv_color_hex(0xff7043), 0);
    lv_obj_set_style_bg_opa(lv_tabview_0, (255 * 100 / 100), 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_tabview_tab_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "this tab overrides bg = 0xff7043");
    
    lv_obj_t * lv_tabview_tab_2 = lv_tabview_add_tab(lv_tabview_0, "C");
    lv_obj_t * lv_label_2 = lv_label_create(lv_tabview_tab_2);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xeeeeee), 0);
    lv_label_set_text(lv_label_2, "tab bar bg = 0x222831");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

