# Custom display module
if(CONFIG_ZMK_DISPLAY)
  target_sources(app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_layer_indicator.c
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_wpm.c
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_battery.c
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_signal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_miryoku_logo.c
    ${CMAKE_CURRENT_SOURCE_DIR}/widgets/widget_maha_logo.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events/event_layer.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events/event_wpm.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events/event_battery.c
    ${CMAKE_CURRENT_SOURCE_DIR}/events/event_signal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/miryoku_logo.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/maha_logo.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/icon_charge.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/icon_usb.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/icon_bluetooth.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/font_montserrat_bold_20.c
    ${CMAKE_CURRENT_SOURCE_DIR}/assets/font_montserrat_regular_12.c
    ${CMAKE_CURRENT_SOURCE_DIR}/screens/screen_layouts.c
    ${CMAKE_CURRENT_SOURCE_DIR}/display_init.c
  )
  target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
endif()