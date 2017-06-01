#include <stdio.h>
#include <stdlib.h>



//百分比转16进制数值
void alphaPercentTurnToHexadecimal(int percent)
{
	const int MAX = 255;
	float _floatPercent = percent / 100.00;
	int num=MAX * _floatPercent;
	int a[100]; 
	int i=0; 
	int m=0;
	int yushu; 
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
 
	while(num>0) 
	{ 
		yushu=num%16; 
		a[i++]=yushu; 
		num=num/16; 
	}  
	for(i=i-1;i>=0;i--)//倒序输出 
	{ 
		m=a[i];
		printf("%c",hex[m]); 
	} 
	printf("\n"); 
}


int main(int argc,char *args[])
{

	if(argc < 2)
	{
		printf("输入参数有误\n");
		return 1;
	}

	char *param = *(args+1);
	int percent = atoi(param);
	printf("参数为：%d \n 结果为：",percent);
	alphaPercentTurnToHexadecimal(percent);
	
}

