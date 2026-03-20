# CMakeLists.txt for ESP-IDF project

cmake_minimum_required(VERSION 3.5)

set(EXTRA_COMPONENT_DIRS "/path/to/your/components")

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp32_project)