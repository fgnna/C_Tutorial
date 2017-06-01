#include <stdio.h>
#include <stdlib.h>

int main()
{
	char _char = 128;
	int _int = 1;
	double _double = 1234567890123456789.123456789;
	long _long = 1888888888888;
	float _float = 0.3;
	const int _constInt = 22;
	
	printf("%d \n",_int);
	printf("%ld \n",_long);
	printf("%f \n",_float);
	printf("%lf \n",_double);
	printf("\n");

	printf("请输入一个数字：");
	scanf("%d",&_int);
	printf("输入了：%d \n",_int);

	float test = 0.1;
	for(int i=0;i<100;i++)
	{
		test += 0.1;
	}
	printf("100个0.1=%f",test);
	return 0;
	
}

