// 应用程序入口点

#include "lvgl/lvgl.h"
#include "ili9341.h"
#include "ft6336.h"

void app_main() {
    // ILI9341 初始化
    ili9341_init();

    // FT6336 初始化
    ft6336_init();

    // LVGL 初始化
    lv_init();

    // 创建演示UI
    // ... UI 创建代码 ...
}