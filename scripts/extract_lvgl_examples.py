#this script should find all the XML examples in lvgl/examples (should be an argument)
#examples should be added in a screens folder by keeping the folder structure of the examples
#run the lvgl editor CLI (generate_examples.py) to validate the XMLs. If an XML is not valid becasue of on unsupported feature don't skip it
#
# When all XMLs are copied run the CLI to generate C code 
#e.g
# screens
#   widgets
#     button
#       button_basic
#           lv_example_button_basic.xml
#           lv_example_button_basic.png
#           lv_example_button_basic_gen.c
#           lv_example_button_basic_gen.h 
#
