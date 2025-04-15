
#pragma once
#include "BaseNode.h"

class ThresholdNode : public BaseNode {
    int thresholdValue = 128;
public:
    ThresholdNode(int id) : BaseNode(id, "Threshold", PROCESS) {}
    void setThreshold(int t) { thresholdValue = t; }
    void process() override;
};
