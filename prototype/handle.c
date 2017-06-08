#include <stdio.h> //预编译头文件，实制上就是在预编译时把h文件的代码替换替掉这一行
#include "handleDefine.c"
#define LIFE_NUMBER 8 //预处理自定，其实也是一样道理，在预处理阶段didiid，
					  //把上下文中的LIFE_NUMBER"常量"自动替换为8
#define LIFE_NUMBER2 (LIEF_NUMBER * 8)//支持运算，其实也是一个道理,记得要用括号包含起来
#define hello() printf("我是宏函数\n");
#define mutile() printf("我是\n");\
                 printf("多行\n");\
                 printf("宏函数,注意多行宏函数在换行时，反斜杠后面必须跟回车，不能有空格\n");
//带参宏函数
#define matuer(age) if(age >= 18)\
					printf("你成年了\n");


int main()
{
	//预处理指令是全局的，例如C默认就有一些预处理常量
	printf("当前在<%s>文件的第%d行:编译时间为 %s %s\n",__FILE__,__LINE__,__DATE__,__TIME__); 
	//注意一件事，预处理只会替换代码中的常量，并不会替换字符串中的同名文字
	printf("在handleDefine.c中的预自义常量HAHAHA为:%ld\n",HAHAHA);
	//其实我们又称预理 为 宏  意思是巨集，大集合
	hello()
	mutile()
	matuer(18)
	hahaha();
}
