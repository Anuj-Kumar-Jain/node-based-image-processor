
#pragma once
#include "BaseNode.h"

class ImageInputNode : public BaseNode {
    std::string imagePath;
public:
    ImageInputNode(int id) : BaseNode(id, "Image Input", INPUT) {}
    void loadImage(const std::string& path);
    void process() override;
};
