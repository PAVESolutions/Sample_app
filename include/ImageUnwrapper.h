#ifndef IMAGE_UNWRAPPER_H
#define IMAGE_UNWRAPPER_H

#include <opencv2/opencv.hpp>

class __attribute__((visibility("default"))) ImageUnwrapper {
public:
    ImageUnwrapper(const std::string& filename);
    cv::Mat unwarp(const cv::Mat &inputImg);
    
    double Cx_r, Cy_r;
    double R1_r, R2_r;
    int Cx, Cy;
    int R1, R2;
    int Ws, Hs;
    cv::Mat map_x, map_y;

private:
    bool readConfig(const std::string& filename);
    void buildMap();
    void convertVals();


};

#endif // IMAGE_UNWRAPPER_H
