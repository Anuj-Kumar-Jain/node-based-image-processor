
#include "ColorChannelSplitterNode.h"

void ColorChannelSplitterNode::process() {
    if (inputs.empty() || inputs[0]->outputImage.empty()) return;

    std::vector<cv::Mat> channels;
    cv::split(inputs[0]->outputImage, channels);

    if (channels.size() >= 3) {
        blueChannel = channels[0];
        greenChannel = channels[1];
        redChannel = channels[2];
    }
}
