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
	/*int i;
	for(i=0;i<5;i++)
		printf("%d",i)*/;//-���ѭ��
	//struct book b1 = {"c learn",55};
	//printf("%s\n", b1.name);
	//b1.price = 15;
	//strcpy(b1.name, "c++ learn");//-����Ǳ���������ֱ��b1.name = "c++";
	//printf("%d\n", b1.price);
	//struct book* p = &b1;
	//printf("%s\n", p->name);
	//------------------------------------------
	//int a;
	//scanf("%d", &a);
	//if (a < 10)
	//	printf("��λ��\n");
	//else if (10 <= a && a < 100)
	//{
	//	printf("��λ��\n");
	//	printf("9<a<100\n");
	//}//-{ }��ִ�ж����������ʹ��	
	//else
	//	printf(">99\n");
	//------------------------------------------
	//if (a < 100)
	//{
	//	if (10 < a)
	//		printf("��λ��\n");
	//}
	//else
	//	printf("�Ƕ�λ��\n");//-else��������ifƥ��
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
	//	printf("3|4");//���û��break����������������case
	//	break;
	//default:
	//	printf("err");
	//}
	//while��break continue
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
	}