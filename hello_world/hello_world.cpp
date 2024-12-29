#include <iostream>
#include <opencv2/opencv.hpp>

int main (){
    cv::VideoCapture cap(0);

    if (!cap.isOpened()){
        std::cerr << "Error" << std::endl; 
        return -1;
    }

    std::cout << "Press 'q' to quit the video stream..." << std::endl;
    
        while (true) {
        cv::Mat frame;
        cap >> frame;

        if (frame.empty()) {
            std::cerr << "Error: Empty frame captured!" << std::endl;
            break;
        }

        cv::imshow("Frame", frame);
        // std::cout << frame << std::endl;

        // q de out
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();
}
