
#pragma once
#include "BaseNode.h"

class OutputNode : public BaseNode {
    std::string savePath;
public:
    OutputNode(int id) : BaseNode(id, "Output Node", OUTPUT) {}
    void setPath(const std::string& path);
    void process() override;
};
