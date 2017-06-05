#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"


int _result = 0;//全局变量，避免使用

static int __result = 1;//私有变量，只能文件内访问

int _function();//全局函数

static int __function();//私有函数，只能文件内访问

int main(int argc,char *args[])
{
	
	printf("长为10,宽为5的矩形面积=%f\n ",rectangleArea(10,5));

	int hours = 0, minutes = 90;
	transformMinutes(&hours,&minutes);
	printf("内存地址：%p\n",&hours);
	printf("%d 小时 : %d 分钟\n",hours,minutes);

}

