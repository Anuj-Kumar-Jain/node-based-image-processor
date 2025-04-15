
#pragma once
#include "BaseNode.h"

class ConvolutionFilterNode : public BaseNode {
    cv::Mat kernel;
public:
    ConvolutionFilterNode(int id) : BaseNode(id, "Convolution Filter", PROCESS) {
        kernel = (cv::Mat_<float>(3,3) <<
                  0, -1, 0,
                 -1, 5, -1,
                  0, -1, 0);
    }
    void setKernel(const cv::Mat& k) { kernel = k; }
    void process() override;
};
