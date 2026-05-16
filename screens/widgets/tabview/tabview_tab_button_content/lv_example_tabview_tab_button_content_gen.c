/**
 * @file lv_example_tabview_tab_button_content_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_tabview_tab_button_content_gen.h"
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

lv_obj_t * lv_example_tabview_tab_button_content_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_tabview_tab_button_content_#");

    lv_obj_t * lv_tabview_0 = lv_tabview_create(lv_obj_0);
    lv_obj_set_width(lv_tabview_0, lv_pct(100));
    lv_obj_set_height(lv_tabview_0, lv_pct(100));
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "WiFi");
    lv_obj_t * lv_label_0 = lv_label_create(lv_tabview_tab_0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_0, "WiFi tab content");
    
    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "Bluetooth");
    lv_obj_t * lv_label_1 = lv_label_create(lv_tabview_tab_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "Bluetooth tab content");
    
    lv_obj_t * lv_tabview_tab_button_0 = lv_tabview_get_tab_button(lv_tabview_0, 0);
    lv_obj_t * lv_switch_0 = lv_switch_create(lv_tabview_tab_button_0);
    lv_obj_set_width(lv_switch_0, 40);
    lv_obj_set_height(lv_switch_0, 20);
    lv_obj_set_flag(lv_switch_0, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_align(lv_switch_0, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_switch_0, -10);
    
    lv_obj_t * lv_tabview_tab_button_1 = lv_tabview_get_tab_button(lv_tabview_0, 1);
    lv_obj_t * lv_switch_1 = lv_switch_create(lv_tabview_tab_button_1);
    lv_obj_set_width(lv_switch_1, 40);
    lv_obj_set_height(lv_switch_1, 20);
    lv_obj_set_flag(lv_switch_1, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_align(lv_switch_1, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_switch_1, -10);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

