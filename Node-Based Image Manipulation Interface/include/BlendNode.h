
#pragma once
#include "BaseNode.h"

class BlendNode : public BaseNode {
    float alpha = 0.5f;
public:
    BlendNode(int id) : BaseNode(id, "Blend", PROCESS) {}
    void setAlpha(float a) { alpha = a; }
    void process() override;
};
