#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int str_len(const char *str);

int main()
{
	
	char *str = "length";
	int length = strlen(str);
	printf("str长度：%d\n",length);
	printf("str长度：%d\n",str_len(str));
	
	char *strSource = "sourceStr";
	printf("source:%s\n",strSource);
	char copy[100]={};
	strcpy(copy,strSource);
	printf("copy:%s\n",copy);
	
	char str1[100] = "before";
	char str2[] = "after";	
	strcat(str1,str2);
	printf("合并后:%s\n",str1);
	
	if(strcmp(str1,str2)==0)
		printf("一样\n");
	else
		printf("不一样\n");

	if(strcmp(str2,str2)==0)
		printf("一样\n");
	else
		printf("不一样\n");
	sprintf(str1,"str1新写入的字符串%d,sprintf是覆盖写入",6666);
	if(strcmp(str1,str2))
		printf("一样");
	else
		printf("不一样");
	printf("%s\n",str1);
	char *sub = strstr(str1,"7777777666");
	printf("\n666在字符串的位置是:%p\n",sub);
}


int str_len(const char *str)
{
	int count = 0;
	char tempChar=0;
	while(1)
	{
		tempChar = *(str+count);
		if(tempChar == '\0')
			break;
		printf("%c",tempChar);
		count++;
	}
	printf("\n");
	return count;
}

