/**
 * @file lv_example_span_styling_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_span_styling_gen.h"
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

lv_obj_t * lv_example_span_styling_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_span_title;
    static lv_style_t style_span_body;
    static lv_style_t style_span_accent;
    static lv_style_t style_span_underline;
    static lv_style_t style_span_strike;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_span_title);
        lv_style_set_text_color(&style_span_title, lv_color_hex(0x1d4ed8));
        lv_style_set_text_decor(&style_span_title, LV_TEXT_DECOR_UNDERLINE);

        lv_style_init(&style_span_body);
        lv_style_set_text_color(&style_span_body, lv_color_hex(0x111827));

        lv_style_init(&style_span_accent);
        lv_style_set_text_color(&style_span_accent, lv_color_hex(0xdc2626));

        lv_style_init(&style_span_underline);
        lv_style_set_text_color(&style_span_underline, lv_color_hex(0x059669));
        lv_style_set_text_decor(&style_span_underline, LV_TEXT_DECOR_UNDERLINE);

        lv_style_init(&style_span_strike);
        lv_style_set_text_color(&style_span_strike, lv_color_hex(0x6b7280));
        lv_style_set_text_decor(&style_span_strike, LV_TEXT_DECOR_STRIKETHROUGH);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_span_styling_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(lv_obj_0, 16, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Spangroup: styled text");
    
    lv_obj_t * lv_spangroup_0 = lv_spangroup_create(lv_obj_0);
    lv_obj_set_width(lv_spangroup_0, 260);
    lv_obj_set_height(lv_spangroup_0, LV_SIZE_CONTENT);
    lv_spangroup_set_indent(lv_spangroup_0, 20);
    lv_spangroup_set_overflow(lv_spangroup_0, LV_SPAN_OVERFLOW_ELLIPSIS);
    lv_spangroup_set_max_lines(lv_spangroup_0, 4);
    lv_obj_set_style_border_color(lv_spangroup_0, lv_color_hex(0xf59e0b), 0);
    lv_obj_set_style_border_width(lv_spangroup_0, 1, 0);
    lv_obj_set_style_pad_all(lv_spangroup_0, 6, 0);
    lv_span_t * lv_spangroup_span_0 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_0, "LVGL ");
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_0, &style_span_title);
    lv_span_t * lv_spangroup_span_1 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_1, "renders rich text ");
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_1, &style_span_body);
    lv_span_t * lv_spangroup_span_2 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_2, "with per-span color, ");
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_2, &style_span_accent);
    lv_span_t * lv_spangroup_span_3 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_3, "underline, ");
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_3, &style_span_underline);
    lv_span_t * lv_spangroup_span_4 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_4, "and strikethrough decoration.");
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_4, &style_span_strike);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

