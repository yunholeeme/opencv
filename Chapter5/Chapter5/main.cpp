// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void brightness1();

int main()
{
	brightness1();

	return 0;
}

void brightness1()
{
	Mat src = imread("hodu5.jpg", IMREAD_GRAYSCALE);

	if (src.empty())
	{
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat dst = src + 100;

	namedWindow("src", WINDOW_NORMAL);
	namedWindow("dst", WINDOW_NORMAL);
	imshow("src", src);
	
	imshow("dst", dst);
	waitKey();
	destroyAllWindows();
}
