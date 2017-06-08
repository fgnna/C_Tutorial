
#ifndef DEF_OBJECT
#define DEF_OBJECT
//坐标
struct Object
{
	char firsName[100];
	char lastName[100];
	int age;
	int sex;
};

typedef struct Object Object;

//另一种简洁写法
typedef struct
{

	char firsName[100];
	char lastName[100];
	int age;
	int sex;
} Object1;

//共同体，以最大占用的变量为大小，涉及内存对齐问题，共同体为了省内存设计，只能用共同体内的其中一个变量
typedef union
{
	char firstName[100];
	int age;
}UnionObject;

typedef enum
{
	THIN,//瘦 其值默认由编译器分配 从0开始
	MEDIUM,//中
	FAT=90//肥 但也可以自定义值
}Shape;



#endif
