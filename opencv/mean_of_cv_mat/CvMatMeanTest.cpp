#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv )
{
  cv::Mat img(10, 10, CV_32F);
  img.at<float>(0, 0) = 100.f;
  double mean = cv::mean(img)[0];
  std::cout << mean << ", "<< cv::mean(img) << std::endl;
  std::cout << (img > 0).size() << std::endl;
}
