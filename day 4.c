#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//-strcpy�⺯��
struct book
{
	char name[20];
	short price;//-�ṹ��
};
int main()
{
	//int i
	//for(i=0;i<5;i++)
		//printf("%d",i);-���ѭ��
	struct book b1 = {"c learn",55};
	printf("%s\n", b1.name);
	b1.price = 15;
	strcpy(b1.name, "c++ learn");//-����Ǳ���������ֱ��b1.name = "c++";
	printf("%d\n", b1.price);
	struct book* p = &b1;
	printf("%s\n", p->name);
	return 0;
}