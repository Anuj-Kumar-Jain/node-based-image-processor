
#include "ThresholdNode.h"
#include <opencv2/imgproc.hpp>

void ThresholdNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    cv::cvtColor(inputs[0]->outputImage, outputImage, cv::COLOR_BGR2GRAY);
    cv::threshold(outputImage, outputImage, thresholdValue, 255, cv::THRESH_BINARY);
}
