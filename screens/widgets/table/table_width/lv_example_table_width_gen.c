/**
 * @file lv_example_table_width_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_table_width_gen.h"
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

lv_obj_t * lv_example_table_width_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_table_width_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Table: column widths");
    
    lv_obj_t * lv_table_0 = lv_table_create(lv_obj_0);
    lv_table_set_row_count(lv_table_0, 3);
    lv_table_set_column_count(lv_table_0, 3);
    lv_table_set_column_width(lv_table_0, 0, 50);
    lv_table_set_column_width(lv_table_0, 1, 180);
    lv_table_set_column_width(lv_table_0, 2, 80);
    lv_table_set_cell_value(lv_table_0, 0, 0, "No.");
    lv_table_set_cell_value(lv_table_0, 0, 1, "Description");
    lv_table_set_cell_value(lv_table_0, 0, 2, "Price");
    lv_table_set_cell_value(lv_table_0, 1, 0, "1");
    lv_table_set_cell_value(lv_table_0, 1, 1, "Espresso, small");
    lv_table_set_cell_value(lv_table_0, 1, 2, "2.50");
    lv_table_set_cell_value(lv_table_0, 2, 0, "2");
    lv_table_set_cell_value(lv_table_0, 2, 1, "Cappuccino, regular");
    lv_table_set_cell_value(lv_table_0, 2, 2, "3.80");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

