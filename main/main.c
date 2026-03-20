#include <stdio.h>
#include <stdlib.h>
#include "lvgl/lvgl.h"
#include "ILI9341.h"
#include "FT6336.h"

// Function to initialize the display
void init_display() {
    ILI9341_Init();
    // Additional display setup code if needed
}

// Function to handle touch input
void init_touch() {
    FT6336_Init();
    // Additional touch sensor setup code if needed
}

// Function to initialize LVGL
void init_lvgl() {
    lv_init();
    // Set up display driver
    lvgl_display_init();
}

// Function to create demo UI
void create_demo_ui() {
    lv_obj_t * label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello, LVGL!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
}

// Main application entry point
int main(void) {
    init_display();
    init_touch();
    init_lvgl();
    create_demo_ui();
    while(1) {
        lv_task_handler(); // Handles LVGL tasks
        vTaskDelay(10);   // Delay to allow task switching
    }
    return 0;
}