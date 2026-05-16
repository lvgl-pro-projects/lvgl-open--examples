/**
 * @file lv_example_tabview_active_tab_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_tabview_active_tab_gen.h"
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

lv_obj_t * lv_example_tabview_active_tab_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_tabview_active_tab_#");

    lv_obj_t * lv_tabview_0 = lv_tabview_create(lv_obj_0);
    lv_obj_set_width(lv_tabview_0, lv_pct(100));
    lv_obj_set_height(lv_tabview_0, lv_pct(100));
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "A");
    lv_obj_t * lv_label_0 = lv_label_create(lv_tabview_tab_0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_0, "A");
    
    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "B");
    lv_obj_t * lv_label_1 = lv_label_create(lv_tabview_tab_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_1, "B");
    
    lv_obj_t * lv_tabview_tab_2 = lv_tabview_add_tab(lv_tabview_0, "C");
    lv_obj_t * lv_label_2 = lv_label_create(lv_tabview_tab_2);
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_2, "C — opened first");
    
    lv_obj_t * lv_tabview_tab_3 = lv_tabview_add_tab(lv_tabview_0, "D");
    lv_obj_t * lv_label_3 = lv_label_create(lv_tabview_tab_3);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_label_set_text(lv_label_3, "D");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

