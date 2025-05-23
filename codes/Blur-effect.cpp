#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main() {

  std::string path = "resources/photo.jpg";
  Mat img = imread(path);
  Mat imgBlur;
  GaussianBlur(img, imgBlur, Size(7, 7), 5, 0); // add blur effect;
  imshow("Image", imgBlur);
  waitKey(0);
  return 0;
}
