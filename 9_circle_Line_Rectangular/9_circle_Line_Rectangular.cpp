// 9_circle_Line_Rectangular.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main()
{
	//Բ
	cv::Point pt,pt1,pt2;
	cv::Mat dispMat = imread("C:\\Users\\lenovo\\Desktop\\����\\1.jpg");
	pt.x = 10;
	pt.y = 10;
	circle(dispMat, pt, 10, CV_RGB(255, 255, 255), -1, 8, 0);
	
	//�߶�
	pt1.x = 10;
	pt1.y = 10;
	pt2.x = 30;
	pt2.y = 30;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	
	//���ο�
	cv::Rect rect;
	rect.x = 10;
	rect.y = 50;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), -1, 8, 0);

	cv::imshow("dispMat", dispMat); //չʾͼƬ
/*	cv::imshow("dispMat2", dispMat2); //չʾͼƬ
	cv::imshow("dispMat3", dispMat3); //չʾͼƬ
	*/
	waitKey(0);
	return 0;
}

