#include <opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
	cv::Mat scrMat = imread("C:\\Users\\duzhi\\Pictures\\Saved Pictures\\1.jpg", 0);
	imshow("ImputImage", scrMat);

	waitKey(0);
	return 0;
}
