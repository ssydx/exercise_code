#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#include <time.h>


//1语法错误：双击错误信息自动跳转至错误处，简单错误，代码无法运行
// 
//2链接错误：双击错误信息不一定自动跳转至错误处（函数定义但未声明时自动跳转，函数未定义时不自动跳转）
// 简单错误
// 代码未必可以运行（当函数真的未定义时不可运行，当函数 只是未声明（或未引用头文件）时可以运行）
// 有时可能是名字拼写错误
//
//3运行错误：借助调试解决，困难错误



//语法错误

//int main()
//{
//	int a = 10;
//	char b='h'//未使用分号结尾，语法错误
//
//	return 0;
//}

//链接错误

////int add(const int x, const int y)
////{
////	return x + y;
////}
//
////int add(int, int);
//
////int main()
////{
////	//int i = (int)time(NULL);//使用库函数，例如使用time而不包含头文件会产生未定义警告，但可运行
////	//printf("%d\n", i);
////	//int a = 10;
////	//int b = 20;
////	//int c = add(a, b);//使用自定义函数而未定义，例如该add函数会产生未定义警告，不可运行
////	//				  //使用自定义函数，但函数定义在主调函数后而未声明，会产生未定义警告，但可运行
////	//printf("%d\n", c);
////
////
////	return 0;
////}
//
////int add(const int x, const int y)
////{
////	return x + y;
////}

//调试错误见调试文件