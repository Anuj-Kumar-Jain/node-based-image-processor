
#include "BlurNode.h"

void BlurNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    cv::GaussianBlur(inputs[0]->outputImage, outputImage, cv::Size(radius*2+1, radius*2+1), 0);
}
