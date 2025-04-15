
#include "EdgeDetectionNode.h"
#include <opencv2/imgproc.hpp>

void EdgeDetectionNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    cv::Mat gray, edges;
    cv::cvtColor(inputs[0]->outputImage, gray, cv::COLOR_BGR2GRAY);
    cv::Canny(gray, outputImage, 50, 150);
}
