/**
 * @file lv_example_grid_ignore_layout_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_grid_ignore_layout_gen.h"
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

lv_obj_t * lv_example_grid_ignore_layout_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_cell;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_cell);
        lv_style_set_bg_opa(&style_cell, (255 * 100 / 100));
        lv_style_set_text_color(&style_cell, lv_color_hex(0xffffff));
        lv_style_set_pad_all(&style_cell, 6);
        lv_style_set_radius(&style_cell, 4);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_grid_ignore_layout_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_0, 8, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Grid + IGNORE_LAYOUT: one item floats freely");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    static const int32_t lv_obj_1_style_grid_column_dsc_array_0[] = {54, 54, 54, LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_1, lv_obj_1_style_grid_column_dsc_array_0, 0);
    static const int32_t lv_obj_1_style_grid_row_dsc_array_1[] = {42, 42, LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_row_dsc_array(lv_obj_1, lv_obj_1_style_grid_row_dsc_array_1, 0);
    lv_obj_set_style_layout(lv_obj_1, LV_LAYOUT_GRID, 0);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, 120);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_style_grid_cell_column_pos(lv_label_1, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_label_1, 0, 0);
    lv_obj_set_style_bg_color(lv_label_1, lv_color_hex(0x3498db), 0);
    lv_label_set_text(lv_label_1, "A");
    lv_obj_add_style(lv_label_1, &style_cell, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_style_grid_cell_column_pos(lv_label_2, 1, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_label_2, 0, 0);
    lv_obj_set_style_bg_color(lv_label_2, lv_color_hex(0x2ecc71), 0);
    lv_label_set_text(lv_label_2, "B");
    lv_obj_add_style(lv_label_2, &style_cell, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_style_grid_cell_column_pos(lv_label_3, 2, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_label_3, 0, 0);
    lv_obj_set_style_bg_color(lv_label_3, lv_color_hex(0xe67e22), 0);
    lv_label_set_text(lv_label_3, "C");
    lv_obj_add_style(lv_label_3, &style_cell, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_style_grid_cell_column_pos(lv_label_4, 0, 0);
    lv_obj_set_style_grid_cell_row_pos(lv_label_4, 1, 0);
    lv_obj_set_style_bg_color(lv_label_4, lv_color_hex(0x8e44ad), 0);
    lv_label_set_text(lv_label_4, "D");
    lv_obj_add_style(lv_label_4, &style_cell, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_1);
    lv_obj_set_flag(lv_label_5, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_x(lv_label_5, 105);
    lv_obj_set_y(lv_label_5, 66);
    lv_obj_set_style_bg_color(lv_label_5, lv_color_hex(0xe74c3c), 0);
    lv_label_set_text(lv_label_5, "FREE");
    lv_obj_add_style(lv_label_5, &style_cell, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

