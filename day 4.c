#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//-strcpy库函数
struct book
{
	char name[20];
	short price;//-结构体
};
int main()
{
	//int i
	//for(i=0;i<5;i++)
		//printf("%d",i);-五次循环
	struct book b1 = {"c learn",55};
	printf("%s\n", b1.name);
	b1.price = 15;
	strcpy(b1.name, "c++ learn");//-数组非变量，不能直接b1.name = "c++";
	printf("%d\n", b1.price);
	struct book* p = &b1;
	printf("%s\n", p->name);
	return 0;
}