#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//位段，位段的成员一般是同类型的整型或字符型(有符号无符号都可以)，成员名后跟冒号和大小（二进制位数）
//大小以类型为分隔，当某成员放不下时开辟一个新的类型大小的内存空间，成员大小不可超过类型大小
//最终大小为类型大小的整数倍
//位段的存储（字节使用方向和是否舍弃）是标准未规定的，因此注重跨平台性应避免使用位段
//位段的最大数目由平台不同也不确定，int位段被当作有符号数还是无符号数也不确定
//位段的典型应用是网络数据传输中的封装

//struct A
//{
//	int _a : 2;//11
//	int _b : 5;//11111
//	int _c : 10;//1111111111000000000000000
//	int _d : 30;//11111111111111111111111111111100
//};
//int main()
//{
//	printf("%d", sizeof(struct A));//8个字节
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//0 0100 010   000 00011    0000 0100
//	//0010 0010 0000 0011 0000 0100
//	//22 03 04
//	//即VS是从字节的右侧开始存放，每个成员从低字节地址开始存放
//	return 0;
//}


//枚举，枚举是常量，大小是int

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,//最后一个成员可以不加,
//};
//enum Color
//{
//	RED = 2,//设置初始值
//	GREEN = 4,
//	BLUE = 8
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = GREEN;//赋枚举常量值，不能赋对应数值
//	printf("%d %d %d\n", RED, GREEN, BLUE);//默认从零开始
//	printf("%d %d %d\n", MALE,FEMALE,SECRET);
//	printf("%d\n", sizeof(enum Sex));//大小为整型int的大小
//}
//
//#define RED 0
//#define GREEN 1
//#define BLUE 2
////采用#define也行，但枚举具有几点优势
////枚举定义的标识符具有类型检查更加严谨
////使用枚举代码的可读性和可维护性更高
////防止命名污染（枚举常量封装在枚举类型定义中）
////便于调试
////使用方便，一次可定义多个


//共用体（联合体）
//联合体的大小至少为其中最大成员的大小，最终大小为最大对齐数的整数倍，数组的对齐数是其元素类型大小

//union U
//{
//	char c;
//	int i;
//};
//
//int check_sys(void)
//{
//	union
//	{
//		char c;
//		int i;
//	}u;//匿名结构体即可
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	union U u;
//	//printf("%d\n", sizeof(u));
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));//三者地址相同
//	//printf("%p\n", &(u.i));
//	u.i = 1;
//	if (u.c)//为1小端，为0大端
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	if (check_sys())
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//union U
//{
//	int a;//对齐数为4
//	char arr[5];//对齐数为1
//};
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));//8
//	return 0;
//}
