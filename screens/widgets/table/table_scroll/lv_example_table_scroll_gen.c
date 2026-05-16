/**
 * @file lv_example_table_scroll_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_table_scroll_gen.h"
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

lv_obj_t * lv_example_table_scroll_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_table_scroll_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Table: scrolling");
    
    lv_obj_t * lv_table_0 = lv_table_create(lv_obj_0);
    lv_obj_set_width(lv_table_0, 240);
    lv_obj_set_height(lv_table_0, 160);
    lv_table_set_row_count(lv_table_0, 12);
    lv_table_set_column_count(lv_table_0, 2);
    lv_table_set_column_width(lv_table_0, 0, 70);
    lv_table_set_column_width(lv_table_0, 1, 160);
    lv_table_set_cell_value(lv_table_0, 0, 0, "No.");
    lv_table_set_cell_value(lv_table_0, 0, 1, "Item");
    lv_table_set_cell_value(lv_table_0, 1, 0, "1");
    lv_table_set_cell_value(lv_table_0, 1, 1, "Wrench");
    lv_table_set_cell_value(lv_table_0, 2, 0, "2");
    lv_table_set_cell_value(lv_table_0, 2, 1, "Screwdriver");
    lv_table_set_cell_value(lv_table_0, 3, 0, "3");
    lv_table_set_cell_value(lv_table_0, 3, 1, "Hammer");
    lv_table_set_cell_value(lv_table_0, 4, 0, "4");
    lv_table_set_cell_value(lv_table_0, 4, 1, "Drill");
    lv_table_set_cell_value(lv_table_0, 5, 0, "5");
    lv_table_set_cell_value(lv_table_0, 5, 1, "Saw");
    lv_table_set_cell_value(lv_table_0, 6, 0, "6");
    lv_table_set_cell_value(lv_table_0, 6, 1, "Pliers");
    lv_table_set_cell_value(lv_table_0, 7, 0, "7");
    lv_table_set_cell_value(lv_table_0, 7, 1, "Tape measure");
    lv_table_set_cell_value(lv_table_0, 8, 0, "8");
    lv_table_set_cell_value(lv_table_0, 8, 1, "Level");
    lv_table_set_cell_value(lv_table_0, 9, 0, "9");
    lv_table_set_cell_value(lv_table_0, 9, 1, "Crowbar");
    lv_table_set_cell_value(lv_table_0, 10, 0, "10");
    lv_table_set_cell_value(lv_table_0, 10, 1, "Mallet");
    lv_table_set_cell_value(lv_table_0, 11, 0, "11");
    lv_table_set_cell_value(lv_table_0, 11, 1, "Chisel");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

