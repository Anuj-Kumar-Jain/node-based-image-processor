
#pragma once
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>
#include <memory>

enum NodeType { INPUT, PROCESS, OUTPUT };

class BaseNode {
public:
    int id;
    std::string name;
    NodeType type;

    std::vector<std::shared_ptr<BaseNode>> inputs;
    cv::Mat outputImage;

    BaseNode(int id, std::string name, NodeType type)
        : id(id), name(name), type(type) {}

    virtual void process() = 0;
};
