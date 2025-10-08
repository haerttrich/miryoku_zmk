#!/bin/bash

# Build script for display simulator

set -e

echo "Building display simulator..."

# Create build directory
mkdir -p build
cd build

# Run CMake
cmake ..

# Build
make -j$(nproc)

echo ""
echo "Build complete! Run with: ./display_simulator"
echo "To switch screens, edit IS_LEFT_SCREEN in main.c and rebuild"