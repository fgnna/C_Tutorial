#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"
double rectangleArea(double length, double width)
{
	static int ___result = 2;//局部静态变量，不会随函数的结束而销毁，下次函数调用时会继续
							 //访问上一次的值：
	return length * width;

}

//指针的使用
void transformMinutes(int *hours,int *minutes)
{
	int *myPointer = hours;
	printf("hours地址：%p,myPointer地址：%p\n",hours,myPointer);
	*myPointer = *minutes / 60;
	*minutes = *minutes % 60;
}


