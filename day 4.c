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
	/*int i;
	for(i=0;i<5;i++)
		printf("%d",i)*/;//-五次循环
	//struct book b1 = {"c learn",55};
	//printf("%s\n", b1.name);
	//b1.price = 15;
	//strcpy(b1.name, "c++ learn");//-数组非变量，不能直接b1.name = "c++";
	//printf("%d\n", b1.price);
	//struct book* p = &b1;
	//printf("%s\n", p->name);
	//------------------------------------------
	//int a;
	//scanf("%d", &a);
	//if (a < 10)
	//	printf("个位数\n");
	//else if (10 <= a && a < 100)
	//{
	//	printf("二位数\n");
	//	printf("9<a<100\n");
	//}//-{ }当执行多条命令必须使用	
	//else
	//	printf(">99\n");
	//------------------------------------------
	//if (a < 100)
	//{
	//	if (10 < a)
	//		printf("二位数\n");
	//}
	//else
	//	printf("非二位数\n");//-else会和最近的if匹配
	//switch (a)
	//{
	//case 1:
	//	printf("1");
	//	break;
	//case 2:
	//	printf("2");
	//	break;
	//case 3:
	//case 4:
	//	printf("3|4");//如果没有break，则继续运行下面的case
	//	break;
	//default:
	//	printf("err");
	//}
	//while的break continue
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
	}