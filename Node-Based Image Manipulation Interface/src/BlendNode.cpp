
#include "BlendNode.h"

void BlendNode::process() {
    if (inputs.size() < 2 || inputs[0]->outputImage.empty() || inputs[1]->outputImage.empty()) return;
    cv::addWeighted(inputs[0]->outputImage, alpha, inputs[1]->outputImage, 1.0f - alpha, 0.0, outputImage);
}
