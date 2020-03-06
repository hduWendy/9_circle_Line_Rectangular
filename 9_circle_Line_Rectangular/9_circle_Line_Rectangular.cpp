// 9_circle_Line_Rectangular.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main()
{
	//圆
	cv::Point pt,pt1,pt2;
	cv::Mat dispMat = imread("C:\\Users\\lenovo\\Desktop\\推文\\1.jpg");
	pt.x = 10;
	pt.y = 10;
	circle(dispMat, pt, 10, CV_RGB(255, 255, 255), -1, 8, 0);
	
	//线段
	pt1.x = 10;
	pt1.y = 10;
	pt2.x = 30;
	pt2.y = 30;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	
	//矩形框
	cv::Rect rect;
	rect.x = 10;
	rect.y = 50;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), -1, 8, 0);

	cv::imshow("dispMat", dispMat); //展示图片
/*	cv::imshow("dispMat2", dispMat2); //展示图片
	cv::imshow("dispMat3", dispMat3); //展示图片
	*/
	waitKey(0);
	return 0;
}

