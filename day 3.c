#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//正数：原码=反码=补码
//负数：原码—符号位不变，其它取反—>反码—+1—>补码
int main()
{
	//int a = 10;
	//int b =a++; : a=11 b=10
	//int b =++a; : a=b=11
	//------------------------------------------
	//(exp1?exp2:exp3)-条件操作符：如果exp1满足，则执行exp2，否则执行exp3
	//int a, b;
	//scanf("%d%d", &a, &b);
	//int max = (a > b ? a : b);
	//printf("%d", max);//-a，b取大值
	//------------------------------------------
	//typedef int i -下次i a就等同于int a
	//------------------------------------------
	//static -修饰局部变量：使生命周期变长；
	//-修饰全局变量和自定义函数：改变变量作用域（只能在所在源文件内使用）
	//extern -声明外部符号（函数）
	//#define -定义标识符常量，宏。例：#define max(x,y) (x>y?x:y)
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);
	return 0;
}