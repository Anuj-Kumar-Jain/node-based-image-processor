
#include "ImageInputNode.h"
#include <opencv2/imgcodecs.hpp>

void ImageInputNode::loadImage(const std::string& path) {
    imagePath = path;
    outputImage = cv::imread(path, cv::IMREAD_UNCHANGED);
}

void ImageInputNode::process() {
    if (!imagePath.empty())
        outputImage = cv::imread(imagePath);
}
