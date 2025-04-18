# Node-Based Image Manipulation Interface

This is a C++ project that provides a node-based editor for image manipulation, inspired by tools like Substance Designer. The application uses OpenCV for image processing and ImGui for the graphical user interface.

## Features

- Load and save images with metadata display
- A canvas interface with interactive nodes
- Real-time preview of image transformations
- Over 10 image processing nodes:
  - Input/Output
  - Brightness/Contrast adjustment
  - Channel splitting
  - Gaussian blur
  - Thresholding
  - Edge detection
  - Blending
  - Noise generation
  - Convolution filtering

## Build Instructions

### Prerequisites

- CMake 3.14+
- C++17 compiler
- OpenCV 4.x
- GLFW
- ImGui (bundled in ext/ or linked as submodule)

### Build

```bash
git clone https://github.com/yourusername/NodeImageEditor.git
cd NodeImageEditor
mkdir build && cd build
cmake ..
make
./NodeImageEditor
#   n o d e - b a s e d - i m a g e - p r o c e s s o r 
 
 #   n o d e - b a s e d - i m a g e - p r o c e s s o r  
 