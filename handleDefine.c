#define HAHAHA 6666666666
//条件预编译
#if (HAHAHA==6666666666)
//如果成立，编译这块代码
void hahaha()
{
	printf("HAHAHA==666666666\n");
}
#elif (HAHAHA==7777777)
//如果不成立，编译这块代码
void hahaha()
{
	printf("HAHAHA==7777777\n");
}
#else
void hahaha()
{
	printf("HAHAHA==88888888\n");
}
#endif

#ifdef DEF_XXXXXX
//如果已定义 DEF_XXXXXX
#endif

#ifndef DEF_XXXXX
//如果未定义 DEF_XXXXXXXX
#endif

//在头文件习惯这样写，避免重复定义或相互接入头文件时造成死循环预编译
#ifndef DEF_HANDLE_DEFINE
#define DEF_HANDLE_DEFINE
//头文件代码
#endif
