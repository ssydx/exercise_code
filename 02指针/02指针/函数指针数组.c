#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*p[4])(int, int) = { Add,Sub,Mul,Div };//类型为int(*)(int,int)[4]
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = p[i](3, 5);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	;
//}
//
//int main()
//{
//	char* (*p)(char*, const char*) = my_strcpy;//函数指针
//	char* (*parr[5])(char*, const char*) = { my_strcpy };//函数指针数组
//	return 0;
//}


//利用函数指针数组实现计算器

//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.add        2.sub*****\n");
//	printf("*****3.mul        4.div******\n");
//	printf("*****5.xor        0.exit*****\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
////void cal()//计算器，存在冗余问题
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	do
////	{
////		menu();
////		printf("请选择:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("退出程序\n");
////			break;
////		default:
////			printf("选择错误\n");
////			break;
////		}
////	} while (input);
////}
//
//void cal()//删减函数时修改数组元素并修改菜单即可
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//采用函数指针数组形式避免冗余，称其为转移表
//	int sz = sizeof(p)/sizeof(p[0]);
//	while(1)
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input > sz-1 || input < 0)
//		{
//			printf("选择错误\n");
//			continue;//选择错误时跳过本次循环
//		}
//		if (input)
//		{
//			printf("退出程序\n");
//			break;//选择为0时退出循环
//		}
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", p[input](x, y));
//	}
//}
//
//int main()
//{
//	cal();
//
//	return 0;
//}
