#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main() {

  std::string path = "resources/photo.jpg";
  Mat img = imread(path);
  Mat imgGray;
  cvtColor(img, imgGray, COLOR_BGR2GRAY); // convert color photo to gray;
  imshow("Image", imgGray);
  waitKey(0);
  return 0;
}
