/**
 * @file lv_example_tabview_tab_bar_position_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_tabview_tab_bar_position_gen.h"
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

lv_obj_t * lv_example_tabview_tab_bar_position_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_tabview_tab_bar_position_#");

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Tab view: tab bar position");
    
    lv_obj_t * lv_tabview_0 = lv_tabview_create(lv_obj_0);
    lv_obj_set_x(lv_tabview_0, 8);
    lv_obj_set_y(lv_tabview_0, 28);
    lv_obj_set_width(lv_tabview_0, 150);
    lv_obj_set_height(lv_tabview_0, 100);
    lv_tabview_set_tab_bar_position(lv_tabview_0, LV_DIR_TOP);
    lv_obj_set_style_bg_color(lv_tabview_0, lv_color_hex(0xffcc80), 0);
    lv_obj_set_style_bg_opa(lv_tabview_0, (255 * 100 / 100), 0);
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "A");
    lv_obj_t * lv_label_1 = lv_label_create(lv_tabview_tab_0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "top");
    
    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "B");
    
    lv_obj_t * lv_tabview_1 = lv_tabview_create(lv_obj_0);
    lv_obj_set_x(lv_tabview_1, 164);
    lv_obj_set_y(lv_tabview_1, 28);
    lv_obj_set_width(lv_tabview_1, 150);
    lv_obj_set_height(lv_tabview_1, 100);
    lv_tabview_set_tab_bar_position(lv_tabview_1, LV_DIR_BOTTOM);
    lv_obj_set_style_bg_color(lv_tabview_1, lv_color_hex(0x90caf9), 0);
    lv_obj_set_style_bg_opa(lv_tabview_1, (255 * 100 / 100), 0);
    lv_obj_t * lv_tabview_tab_2 = lv_tabview_add_tab(lv_tabview_1, "A");
    lv_obj_t * lv_label_2 = lv_label_create(lv_tabview_tab_2);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "bottom");
    
    lv_obj_t * lv_tabview_tab_3 = lv_tabview_add_tab(lv_tabview_1, "B");
    
    lv_obj_t * lv_tabview_2 = lv_tabview_create(lv_obj_0);
    lv_obj_set_x(lv_tabview_2, 8);
    lv_obj_set_y(lv_tabview_2, 136);
    lv_obj_set_width(lv_tabview_2, 150);
    lv_obj_set_height(lv_tabview_2, 100);
    lv_tabview_set_tab_bar_position(lv_tabview_2, LV_DIR_LEFT);
    lv_obj_set_style_bg_color(lv_tabview_2, lv_color_hex(0xa5d6a7), 0);
    lv_obj_set_style_bg_opa(lv_tabview_2, (255 * 100 / 100), 0);
    lv_obj_t * lv_tabview_tab_4 = lv_tabview_add_tab(lv_tabview_2, "A");
    lv_obj_t * lv_label_3 = lv_label_create(lv_tabview_tab_4);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "left");
    
    lv_obj_t * lv_tabview_tab_5 = lv_tabview_add_tab(lv_tabview_2, "B");
    
    lv_obj_t * lv_tabview_3 = lv_tabview_create(lv_obj_0);
    lv_obj_set_x(lv_tabview_3, 164);
    lv_obj_set_y(lv_tabview_3, 136);
    lv_obj_set_width(lv_tabview_3, 150);
    lv_obj_set_height(lv_tabview_3, 100);
    lv_tabview_set_tab_bar_position(lv_tabview_3, LV_DIR_RIGHT);
    lv_obj_set_style_bg_color(lv_tabview_3, lv_color_hex(0xce93d8), 0);
    lv_obj_set_style_bg_opa(lv_tabview_3, (255 * 100 / 100), 0);
    lv_obj_t * lv_tabview_tab_6 = lv_tabview_add_tab(lv_tabview_3, "A");
    lv_obj_t * lv_label_4 = lv_label_create(lv_tabview_tab_6);
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_4, "right");
    
    lv_obj_t * lv_tabview_tab_7 = lv_tabview_add_tab(lv_tabview_3, "B");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

