/**
 * @file lvgl_open_examples_gen.h
 */

#ifndef LVGL_OPEN_EXAMPLES_GEN_H
#define LVGL_OPEN_EXAMPLES_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_example_large;

/*----------------
 * Images
 *----------------*/

extern const void * img_example_lvgl_logo;
extern const void * img_arc_bg;
extern const void * img_arc_indicator;
extern const void * img_bar_bg;
extern const void * img_bar_indicator;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t subject_value;
extern lv_subject_t subject_value2;
extern lv_subject_t subject_opa;
extern lv_subject_t subject_index;
extern lv_subject_t subject_flag;
extern lv_subject_t subject_text;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void lvgl_open_examples_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/layouts/flex/flex_align/lv_example_flex_align_gen.h"
#include "screens/layouts/flex/flex_flow/lv_example_flex_flow_gen.h"
#include "screens/layouts/flex/flex_grow/lv_example_flex_grow_gen.h"
#include "screens/layouts/flex/flex_ignore_layout/lv_example_flex_ignore_layout_gen.h"
#include "screens/layouts/flex/flex_internal_padding/lv_example_flex_internal_padding_gen.h"
#include "screens/layouts/flex/flex_new_track/lv_example_flex_new_track_gen.h"
#include "screens/layouts/flex/flex_rtl/lv_example_flex_rtl_gen.h"
#include "screens/layouts/grid/grid_align/lv_example_grid_align_gen.h"
#include "screens/layouts/grid/grid_cell_span/lv_example_grid_cell_span_gen.h"
#include "screens/layouts/grid/grid_descriptors/lv_example_grid_descriptors_gen.h"
#include "screens/layouts/grid/grid_fr/lv_example_grid_fr_gen.h"
#include "screens/layouts/grid/grid_ignore_layout/lv_example_grid_ignore_layout_gen.h"
#include "screens/layouts/grid/grid_internal_padding/lv_example_grid_internal_padding_gen.h"
#include "screens/layouts/grid/grid_rtl/lv_example_grid_rtl_gen.h"
#include "screens/layouts/grid/grid_subgrid/lv_example_grid_subgrid_gen.h"
#include "screens/libs/qrcode/qrcode_basic/lv_example_qrcode_basic_gen.h"
#include "screens/scroll/scroll_chain/lv_example_scroll_chain_gen.h"
#include "screens/scroll/scroll_floating/lv_example_scroll_floating_gen.h"
#include "screens/scroll/scroll_one/lv_example_scroll_one_gen.h"
#include "screens/scroll/scroll_overview/lv_example_scroll_overview_gen.h"
#include "screens/scroll/scroll_rtl/lv_example_scroll_rtl_gen.h"
#include "screens/scroll/scroll_scrollable/lv_example_scroll_scrollable_gen.h"
#include "screens/scroll/scroll_scrollbar_mode/lv_example_scroll_scrollbar_mode_gen.h"
#include "screens/scroll/scroll_scrollbar_style/lv_example_scroll_scrollbar_style_gen.h"
#include "screens/scroll/scroll_snap/lv_example_scroll_snap_gen.h"
#include "screens/styles/style_arc/lv_example_style_arc_gen.h"
#include "screens/styles/style_background/lv_example_style_background_gen.h"
#include "screens/styles/style_blur/lv_example_style_blur_gen.h"
#include "screens/styles/style_border/lv_example_style_border_gen.h"
#include "screens/styles/style_image/lv_example_style_image_gen.h"
#include "screens/styles/style_local/lv_example_style_local_gen.h"
#include "screens/styles/style_margin/lv_example_style_margin_gen.h"
#include "screens/styles/style_multiple/lv_example_style_multiple_gen.h"
#include "screens/styles/style_opacity_transform/lv_example_style_opacity_transform_gen.h"
#include "screens/styles/style_outline/lv_example_style_outline_gen.h"
#include "screens/styles/style_padding/lv_example_style_padding_gen.h"
#include "screens/styles/style_parts_states/lv_example_style_parts_states_gen.h"
#include "screens/styles/style_shadow/lv_example_style_shadow_gen.h"
#include "screens/styles/style_size_position/lv_example_style_size_position_gen.h"
#include "screens/styles/style_text/lv_example_style_text_gen.h"
#include "screens/widgets/arc/arc_bind_value/lv_example_arc_bind_value_gen.h"
#include "screens/widgets/arc/arc_change_rate/lv_example_arc_change_rate_gen.h"
#include "screens/widgets/arc/arc_img_indicator/lv_example_arc_img_indicator_gen.h"
#include "screens/widgets/arc/arc_mode/lv_example_arc_mode_gen.h"
#include "screens/widgets/arc/arc_pie_chart/lv_example_arc_pie_chart_gen.h"
#include "screens/widgets/arc/arc_rotation/lv_example_arc_rotation_gen.h"
#include "screens/widgets/arc/arc_set_angles/lv_example_arc_set_angles_gen.h"
#include "screens/widgets/arc/arc_styling/lv_example_arc_styling_gen.h"
#include "screens/widgets/arc/arc_value_range/lv_example_arc_value_range_gen.h"
#include "screens/widgets/bar/bar_bind_value/lv_example_bar_bind_value_gen.h"
#include "screens/widgets/bar/bar_img_indicator/lv_example_bar_img_indicator_gen.h"
#include "screens/widgets/bar/bar_modes/lv_example_bar_modes_gen.h"
#include "screens/widgets/bar/bar_orientation/lv_example_bar_orientation_gen.h"
#include "screens/widgets/bar/bar_styling/lv_example_bar_styling_gen.h"
#include "screens/widgets/bar/bar_value_range/lv_example_bar_value_range_gen.h"
#include "screens/widgets/button/button_basic/lv_example_button_basic_gen.h"
#include "screens/widgets/button/button_states/lv_example_button_states_gen.h"
#include "screens/widgets/button/button_styling/lv_example_button_styling_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_button_ctrl/lv_example_buttonmatrix_button_ctrl_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_button_width/lv_example_buttonmatrix_button_width_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_map/lv_example_buttonmatrix_map_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_one_checked/lv_example_buttonmatrix_one_checked_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_popover/lv_example_buttonmatrix_popover_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_recolor/lv_example_buttonmatrix_recolor_gen.h"
#include "screens/widgets/buttonmatrix/buttonmatrix_styling/lv_example_buttonmatrix_styling_gen.h"
#include "screens/widgets/calendar/calendar_basic/lv_example_calendar_basic_gen.h"
#include "screens/widgets/chart/chart_cursor/lv_example_chart_cursor_gen.h"
#include "screens/widgets/chart/chart_scrollable/lv_example_chart_scrollable_gen.h"
#include "screens/widgets/chart/chart_series/lv_example_chart_series_gen.h"
#include "screens/widgets/chart/chart_ticks_labels/lv_example_chart_ticks_labels_gen.h"
#include "screens/widgets/chart/chart_types/lv_example_chart_types_gen.h"
#include "screens/widgets/checkbox/checkbox_bind_checked/lv_example_checkbox_bind_checked_gen.h"
#include "screens/widgets/checkbox/checkbox_states/lv_example_checkbox_states_gen.h"
#include "screens/widgets/checkbox/checkbox_styling/lv_example_checkbox_styling_gen.h"
#include "screens/widgets/checkbox/checkbox_text/lv_example_checkbox_text_gen.h"
#include "screens/widgets/dropdown/dropdown_bind_value/lv_example_dropdown_bind_value_gen.h"
#include "screens/widgets/dropdown/dropdown_direction/lv_example_dropdown_direction_gen.h"
#include "screens/widgets/dropdown/dropdown_styling/lv_example_dropdown_styling_gen.h"
#include "screens/widgets/dropdown/dropdown_text/lv_example_dropdown_text_gen.h"
#include "screens/widgets/image/image_inner_align/lv_example_image_inner_align_gen.h"
#include "screens/widgets/image/image_recolor/lv_example_image_recolor_gen.h"
#include "screens/widgets/image/image_src/lv_example_image_src_gen.h"
#include "screens/widgets/image/image_transformations/lv_example_image_transformations_gen.h"
#include "screens/widgets/keyboard/keyboard_modes/lv_example_keyboard_modes_gen.h"
#include "screens/widgets/keyboard/keyboard_popovers/lv_example_keyboard_popovers_gen.h"
#include "screens/widgets/keyboard/keyboard_textarea/lv_example_keyboard_textarea_gen.h"
#include "screens/widgets/label/label_bind_text/lv_example_label_bind_text_gen.h"
#include "screens/widgets/label/label_long_mode/lv_example_label_long_mode_gen.h"
#include "screens/widgets/label/label_recolor/lv_example_label_recolor_gen.h"
#include "screens/widgets/label/label_set_text_newline/lv_example_label_set_text_newline_gen.h"
#include "screens/widgets/label/label_styling/lv_example_label_styling_gen.h"
#include "screens/widgets/label/label_text_align/lv_example_label_text_align_gen.h"
#include "screens/widgets/led/led_brightness/lv_example_led_brightness_gen.h"
#include "screens/widgets/led/led_color/lv_example_led_color_gen.h"
#include "screens/widgets/led/led_styling/lv_example_led_styling_gen.h"
#include "screens/widgets/obj/obj_bind_style/lv_example_obj_bind_style_gen.h"
#include "screens/widgets/roller/roller_bind_value/lv_example_roller_bind_value_gen.h"
#include "screens/widgets/roller/roller_options/lv_example_roller_options_gen.h"
#include "screens/widgets/roller/roller_styling/lv_example_roller_styling_gen.h"
#include "screens/widgets/roller/roller_visible_rows/lv_example_roller_visible_rows_gen.h"
#include "screens/widgets/scale/scale_bind_section/lv_example_scale_bind_section_gen.h"
#include "screens/widgets/scale/scale_modes/lv_example_scale_modes_gen.h"
#include "screens/widgets/scale/scale_range/lv_example_scale_range_gen.h"
#include "screens/widgets/scale/scale_round_modes/lv_example_scale_round_modes_gen.h"
#include "screens/widgets/scale/scale_styling/lv_example_scale_styling_gen.h"
#include "screens/widgets/scale/scale_ticks/lv_example_scale_ticks_gen.h"
#include "screens/widgets/slider/slider_bind_state/lv_example_slider_bind_state_gen.h"
#include "screens/widgets/slider/slider_bind_value/lv_example_slider_bind_value_gen.h"
#include "screens/widgets/slider/slider_img_indicator/lv_example_slider_img_indicator_gen.h"
#include "screens/widgets/slider/slider_modes/lv_example_slider_modes_gen.h"
#include "screens/widgets/slider/slider_reversed_direction/lv_example_slider_reversed_direction_gen.h"
#include "screens/widgets/slider/slider_styling/lv_example_slider_styling_gen.h"
#include "screens/widgets/slider/slider_value_range_orientation/lv_example_slider_value_range_orientation_gen.h"
#include "screens/widgets/span/span_styling/lv_example_span_styling_gen.h"
#include "screens/widgets/spinbox/spinbox_bind_value/lv_example_spinbox_bind_value_gen.h"
#include "screens/widgets/spinbox/spinbox_format/lv_example_spinbox_format_gen.h"
#include "screens/widgets/spinbox/spinbox_rollover/lv_example_spinbox_rollover_gen.h"
#include "screens/widgets/spinbox/spinbox_styling/lv_example_spinbox_styling_gen.h"
#include "screens/widgets/spinbox/spinbox_value/lv_example_spinbox_value_gen.h"
#include "screens/widgets/spinner/spinner_basic/lv_example_spinner_basic_gen.h"
#include "screens/widgets/spinner/spinner_styling/lv_example_spinner_styling_gen.h"
#include "screens/widgets/switch/switch_orientation/lv_example_switch_orientation_gen.h"
#include "screens/widgets/switch/switch_state/lv_example_switch_state_gen.h"
#include "screens/widgets/switch/switch_styling/lv_example_switch_styling_gen.h"
#include "screens/widgets/table/table_cells/lv_example_table_cells_gen.h"
#include "screens/widgets/table/table_merge_cells/lv_example_table_merge_cells_gen.h"
#include "screens/widgets/table/table_rows_columns/lv_example_table_rows_columns_gen.h"
#include "screens/widgets/table/table_scroll/lv_example_table_scroll_gen.h"
#include "screens/widgets/table/table_styling/lv_example_table_styling_gen.h"
#include "screens/widgets/table/table_width/lv_example_table_width_gen.h"
#include "screens/widgets/tabview/tabview_active_tab/lv_example_tabview_active_tab_gen.h"
#include "screens/widgets/tabview/tabview_basic/lv_example_tabview_basic_gen.h"
#include "screens/widgets/tabview/tabview_tab_bar_position/lv_example_tabview_tab_bar_position_gen.h"
#include "screens/widgets/tabview/tabview_tab_bar_style/lv_example_tabview_tab_bar_style_gen.h"
#include "screens/widgets/tabview/tabview_tab_button_content/lv_example_tabview_tab_button_content_gen.h"
#include "screens/widgets/textarea/textarea_cursor/lv_example_textarea_cursor_gen.h"
#include "screens/widgets/textarea/textarea_placeholder/lv_example_textarea_placeholder_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_OPEN_EXAMPLES_GEN_H*/
