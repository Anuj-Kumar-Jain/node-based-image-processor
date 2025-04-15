
#include "NoiseGenerationNode.h"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

void NoiseGenerationNode::process() {
    outputImage = cv::Mat(256, 256, CV_8UC1);
    cv::randu(outputImage, 0, 255);
}
