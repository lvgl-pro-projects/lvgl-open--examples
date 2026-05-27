/**
 * @file lv_example_tabview_active_tab_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_tabview_active_tab_gen.h"
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

lv_obj_t * lv_example_tabview_active_tab_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_tabview_active_tab_#");

    lv_obj_t * tabview = lv_tabview_create(lv_obj_0);
    lv_obj_set_name(tabview, "tabview");
    lv_obj_set_width(tabview, lv_pct(100));
    lv_obj_set_height(tabview, lv_pct(100));
    lv_tabview_set_active(tabview, 2, false);
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(tabview, "A");
    lv_obj_t * label_1 = lv_label_create(lv_tabview_tab_0);
    lv_obj_set_name(label_1, "label_1");
    lv_obj_set_align(label_1, LV_ALIGN_CENTER);
    lv_label_set_text(label_1, "A");

    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(tabview, "B");
    lv_obj_t * label_2 = lv_label_create(lv_tabview_tab_1);
    lv_obj_set_name(label_2, "label_2");
    lv_obj_set_align(label_2, LV_ALIGN_CENTER);
    lv_label_set_text(label_2, "B");

    lv_obj_t * lv_tabview_tab_2 = lv_tabview_add_tab(tabview, "C");
    lv_obj_t * label_3 = lv_label_create(lv_tabview_tab_2);
    lv_obj_set_name(label_3, "label_3");
    lv_obj_set_align(label_3, LV_ALIGN_CENTER);
    lv_label_set_text(label_3, "C is opened first");

    lv_obj_t * lv_tabview_tab_3 = lv_tabview_add_tab(tabview, "D");
    lv_obj_t * label_4 = lv_label_create(lv_tabview_tab_3);
    lv_obj_set_name(label_4, "label_4");
    lv_obj_set_align(label_4, LV_ALIGN_CENTER);
    lv_label_set_text(label_4, "D");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

