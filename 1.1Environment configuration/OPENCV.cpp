#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <iostream>
#pragma comment( lib, "opencv_world341d.lib")
using namespace cv;


int main()
{
	Mat img = imread("1.jpg");

	imshow("图片测试",img);

	waitKey(6000);
	
}

