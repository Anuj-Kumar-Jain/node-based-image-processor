
#include "BrightnessContrastNode.h"

void BrightnessContrastNode::setParams(float b, float c) {
    brightness = b;
    contrast = c;
}

void BrightnessContrastNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    cv::Mat input = inputs[0]->outputImage;
    input.convertTo(outputImage, -1, contrast, brightness);
}
