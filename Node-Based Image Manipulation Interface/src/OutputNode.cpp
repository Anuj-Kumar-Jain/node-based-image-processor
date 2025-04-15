
#include "OutputNode.h"
#include <opencv2/imgcodecs.hpp>

void OutputNode::setPath(const std::string& path) {
    savePath = path;
}

void OutputNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    outputImage = inputs[0]->outputImage;
    if (!savePath.empty()) cv::imwrite(savePath, outputImage);
}
