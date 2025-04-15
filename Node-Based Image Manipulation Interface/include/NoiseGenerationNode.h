
#pragma once
#include "BaseNode.h"

class NoiseGenerationNode : public BaseNode {
public:
    NoiseGenerationNode(int id) : BaseNode(id, "Noise Generator", PROCESS) {}
    void process() override;
};
