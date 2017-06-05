#include <stdio.h>
#include <stdlib.h>

void display(int *array,int arraySize);
void display2(int array[],int arraySize);//这种方式会拷贝
int main()
{

	//如果不进行{}初始化，元素有可能带有未知的默认值
	int array[4]={};//={1,2}其余会默认初始化为0
					//={1,2,3,4};
	//array[0]=10;
	//array[1]=20;
	//array[2]=30;
	//array[3]=40;
	display(array,4);	
	display2(array,4);	

	printf("\n指向首元素的内存地址：%p\n",array);
	printf("首元素：%d\n",*array);
	//printf("%d",array[5]); 会出现不确定因素，一个数字或出错.
	printf("\n");
	printf("%ld\n",sizeof(char));	

	char string[6] = {'h','e','l','l','o','\0'};
	printf("%s\n",string);
	char string1[] = "hello1";
	printf("%s\n",string1);
	char *string2 = "hello2";
	printf("%s\n",string2);
	//stringPointer里面只是存放了一个地址，
	//这个地址上存放的字符串是常量字符串。
	//这个常量字符串存放在内存的静态区，不可以更改。
	string2 = "ssssss";//这里，指针头地址会改变 

	string[0] = 'P';
	printf("%s\n",string);
	string1[0] = 'O';
	printf("%s\n",string1);
	
	char input[100];
	printf("输入你的名字:");
	scanf("%s",input);
	printf("你输入的名字是%s\n",input);

}
void display(int *array,int arraySize)
{
	for(int i=0; i < 4; i++)
	{
		printf("%d_",array[i]);	
	}
	for(int i=0; i < 4; i++)
	{
		printf("%d_",*(array+i));	
	}
}

void display2(int array[],int arraySize)
{
	for(int i=0; i < 4; i++)
	{
		printf("%d_",array[i]);	
	}
}
