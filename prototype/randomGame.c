#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//猜数字游戏
int main()
{

	printf("game start!\n");
	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 100;
	int randomNumber;
	int inputNumber; 
	bool success = false;
 	
	do
	{
		srand(time(NULL));
		randomNumber = rand() % MAX_NUMBER; 
	}
	while(randomNumber < MIN_NUMBER);
	printf("随机数为：%d\n",randomNumber);


	int minRange = MIN_NUMBER;
	int maxRange = MAX_NUMBER;
        while(true)
	{
		printf("请输入%d到%d之间的整数\n",minRange,maxRange);
		scanf("%d",&inputNumber);
		printf("你输入了：%d\n",inputNumber);
		if(inputNumber == randomNumber)
		{
			printf("猜对了！\n游戏结束！");
			break;
		}
		else if(inputNumber >= minRange && inputNumber <= maxRange)
		{
			if(inputNumber > randomNumber)
				maxRange = inputNumber;
			else
				minRange = inputNumber; 
		}
	}
	

}
