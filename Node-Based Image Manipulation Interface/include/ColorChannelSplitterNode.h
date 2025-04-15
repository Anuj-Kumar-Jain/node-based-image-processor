
#pragma once
#include "BaseNode.h"

class ColorChannelSplitterNode : public BaseNode {
public:
    cv::Mat redChannel, greenChannel, blueChannel;

    ColorChannelSplitterNode(int id) : BaseNode(id, "Channel Splitter", PROCESS) {}

    void process() override;
};
