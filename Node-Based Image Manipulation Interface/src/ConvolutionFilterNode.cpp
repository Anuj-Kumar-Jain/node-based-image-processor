
#include "ConvolutionFilterNode.h"
#include <opencv2/imgproc.hpp>

void ConvolutionFilterNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;
    cv::filter2D(inputs[0]->outputImage, outputImage, -1, kernel);
}
