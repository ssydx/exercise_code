#include <stdio.h>
#define X 20;//代码中的X全部替换为20
#define MAX(X, Y) (X > Y ? X : Y)//代码中的MAX(X, Y)替换为(X > Y ? X : Y)



//#define

//int main()
//{
//	int a = X;
//	int x = 10, y = 20;
//	printf("a = %d\n", a);//输出20
//	int max = MAX(x, y);
//	printf("max = %d\n", max);//输出20
//	return 0;
//}




//静态变量的外部引用

//int g_val = 2020;//全局变量
//static int g_val1 = 2020;//加上static后将无法在其他文件使用
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//static int Add1(int x, int y)
//{
//	int z = x + y;
//	return z;
//}