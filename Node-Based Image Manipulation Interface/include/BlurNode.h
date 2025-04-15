
#pragma once
#include "BaseNode.h"

class BlurNode : public BaseNode {
    int radius = 5;
public:
    BlurNode(int id) : BaseNode(id, "Blur", PROCESS) {}
    void setRadius(int r) { radius = r; }
    void process() override;
};
