#include <stdio.h>
#include <stdlib.h>
#include "object.c"


void initializeObject(Object *obj);


int main()
{
	struct Object myObject;

	//如果已经定义别名，用typedef关键字，可以省略struce声明
	Object myObject1;
	initializeObject(&myObject1);

	Object1 myObject11;
	
	myObject11.age = 30;
	printf("%d\n",myObject1.age);
	printf("%d\n",myObject11.age);
	UnionObject uObj;
	printf("%ld\n",sizeof(myObject11));
	printf("%ld\n",sizeof(uObj));
	
	Shape shape = FAT;
	printf("%d\n",shape);	

}

void initializeObject(Object *obj)
{
	(*obj).firsName[0] = '\0';
	(*obj).lastName[0] = '\0';
	obj -> age = 444;
	obj -> sex = 0;
}
