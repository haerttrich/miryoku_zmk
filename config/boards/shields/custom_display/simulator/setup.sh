#!/bin/bash

# Setup script - downloads LVGL and drivers

set -e

echo "Setting up simulator dependencies..."

# Clone LVGL v8
if [ ! -d "lvgl" ]; then
    echo "Downloading LVGL v8..."
    git clone -b release/v8.3 --depth 1 https://github.com/lvgl/lvgl.git
fi

# Clone lv_drivers
if [ ! -d "lv_drivers" ]; then
    echo "Downloading LVGL drivers..."
    git clone -b release/v8.3 --depth 1 https://github.com/lvgl/lv_drivers.git
fi

echo ""
echo "Setup complete!"
echo "Install SDL2 if not already installed:"
echo "  Ubuntu/Debian: sudo apt-get install libsdl2-dev"
echo "  macOS: brew install sdl2"
echo ""
echo "Then run: ./build.sh"