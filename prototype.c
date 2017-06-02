#include <stdio.h>
#include <stdlib.h>
#include "prototype/prototype.h"


int _result = 0;//全局变量，避免使用

static int __result = 1;//私有变量，只能文件内访问

int _function();//全局函数

static int __function();//私有函数，只能文件内访问

void transformMinutes(int *hours,int *minutes);

int main(int argc,char *args[])
{
	
	printf("长为10,宽为5的矩形面积=%f\n ",rectangleArea(10,5));

	int hours = 0, minutes = 90;
	transformMinutes(&hours,&minutes);
	printf("内存地址：%p\n",&hours);
	printf("%d 小时 : %d 分钟\n",hours,minutes);

}


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





