#include <iostream>
#include <opencv2/opencv.hpp>
#include "ImageUnwrapper.h"

int main() {
    cv::namedWindow("Display", cv::WINDOW_GUI_NORMAL | cv::WINDOW_NORMAL );
    cv::setWindowProperty("Display", cv::WND_PROP_FULLSCREEN, cv::WINDOW_GUI_EXPANDED);
    cv::VideoCapture camera(0)
    camera.set(cv::CAP_PROP_FRAME_WIDTH, 1600);
    camera.set(cv::CAP_PROP_FRAME_HEIGHT, 1200);
    ImageUnwrapper unwrapper("../src/config.txt");
    cv::Mat frame;
    while (true) {
        camera.read(frame);
        if (!frame.empty()) {
            cv::Mat unwrappedImage = unwrapper.unwarp(frame);
            cv::imshow("Display", unwrappedImage);
            cv::imshow("Live Video", frame);

            if (cv::waitKey(1) == 27) {  // Wait for 'esc' key press for 30ms
                break; // Stop capturing

            }
        }
    }
    return 0;
}
