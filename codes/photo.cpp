#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main() {

  std::string path = "resources/photo.jpg";
  Mat img = imread(path);
  imshow("Image", img);
  waitKey(0);
  return 0;
}
