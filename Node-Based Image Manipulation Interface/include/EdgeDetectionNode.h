
#pragma once
#include "BaseNode.h"

class EdgeDetectionNode : public BaseNode {
public:
    EdgeDetectionNode(int id) : BaseNode(id, "Edge Detection", PROCESS) {}
    void process() override;
};
