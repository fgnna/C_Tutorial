#include <stdio.h>
#include <stdlib.h>

int main()
{

	const char *path = "./err";
	FILE *file = fopen(path,"r");
	printf("文件指针:%p\n",file);
	//读取单个字符
	if(NULL != file)
	{
		//
		//file ->
		int tempchar = 0;
		do
		{
			tempchar = fgetc(file);
			if(tempchar != EOF)
			{
				if(10 == tempchar)
					printf("换行\n");
				else
					printf("%d ",tempchar); 
			}
			else
				break;
		}
		while(1 );  
	
		fclose(file);
	}
	else
	{
		printf("找不到文件\n");
	}	
	
	//读取一行	
	file = fopen(path,"r");
	if(NULL != file)
	{
		char tempstr[1024] = "";
		while(1)
		{
			if(NULL != fgets(tempstr,1024,file))
			{
				printf("%s\n",tempstr);	
			}	
			else
			{
				fclose(file);
			}
		}
	}
	//从指定文件中，以特定格式输入
	//fscanf(file, "%d %d %d", &score[0], &score[1], &score[2]);
	//ftell：告知目前在文件中哪个位置。tell是英语“告诉”的意思。
	//long ftell(FILE* pointerOnFile);
	
	//fseek：移动文件中的游标到指定位置。seek是英语“探寻”的意思。
	//int fseek(FILE* pointerOnFile, long move, int origin); move 正数代表向前，负数代表向后移
	//SEEK_SET ：文件开始处。SET是英语“设置”的意思。
	//SEEK_CUR ：游标当前所在位置。CUR是英语current（当前）的缩写。
	//SEEK_END ：文件末尾。END是英语“结尾”的意思。
	
	//rewind：将游标重置到文件的开始位置（这和用fseek函数来使游标回到文件开始位置是一个效果）。rewind是英语“转回”的意思。
	//void rewind(FILE* pointerOnFile);
	//重命名
	//int rename(const char* oldName, const char* newName);
	//删除
	//int remove(const char* fileToRemove);
}
