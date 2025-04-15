
#pragma once
#include "BaseNode.h"

class BrightnessContrastNode : public BaseNode {
    float brightness = 0.0f;
    float contrast = 1.0f;
public:
    BrightnessContrastNode(int id) : BaseNode(id, "Brightness/Contrast", PROCESS) {}
    void setParams(float b, float c);
    void process() override;
};
