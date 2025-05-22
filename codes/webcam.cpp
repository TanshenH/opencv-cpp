#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main() {

  VideoCapture cap(0);
  Mat cam;

  while (true) {
    cap.read(cam);
    imshow("Camera", cam);
    waitKey(1);
  }
  return 0;
}
