#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <stddef.h>


//结构体的声明，结构体变量的定义及初始化

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}s4, s5 = { "liu",20,"male","1234" };//全局变量在大括号外定义并赋初值，默认为0
//
////s4 = { "wangwu",22,"male","01231231230" };不能这么用
//
//typedef struct S
//{
//	char name[20];
//	int age;
//}Stu;//此处为别名
//
//struct  //匿名结构体只能在创建时定义全局变量，成员结构相同的匿名结构体也是不同
//		//匿名结构体可以重命名也可以自引用结构指针（需要提前声明）
//{
//	char name[20];
//	char sex[5];
//}s6 = { "liu","male" };
//
//struct//匿名结构体只能在创建时定义全局变量，成员结构相同的匿名结构体也是不同（除重定义）
//{
//	char name[20];
//	char sex[5];
//}*ps6;
//
////结构体不能包含自己，会无法计算结构体大小
//
////struct Node
////{
////	int data;
////	struct Node;
////};
//
////链表可存放自己类型的指针，指针大小都是4/8，指针为指针域，数据为数据域，自引用不要使用匿名结构体
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
////结构体包含其他结构体
//
//struct T
//{
//	char name[20];
//	int age;
//};
//struct S1
//{
//	struct T t;
//	char sex[5];
//};
//
//
//int main()
//{
//	struct Stu s1 = { "zhangsan",20,"male","12345678912" };//初始化
//	Stu s2 = { "lisi",21 };
//	//ps6 = &s6;//不兼容
//	printf("%d\n", s4.age);//访问
//	printf("%d\n", s5.age);
//	struct S1 s = { {"zhangsan",20},"male" };//嵌套结构体定义
//	printf("%s %d %s\n", s.t.name, s.t.age, s.sex);//嵌套结构体访问
//	return 0;
//}

//结构体对齐
//结构体的第一个成员在偏移值为0的位置存放，第二个起放在对齐数的整数倍的偏移值处
//对齐数取默认对齐数（VS默认为8）与该成员大小中的较小值，最终大小为已出现的对齐数中的最大值的整数倍
//没有默认对齐数时按成员大小计算
//嵌套结构体时取子结构体的最大对齐数进行对齐，最终大小的对齐数也包括子结构体的对齐数
//内存对齐的原因，平台移植原因（有些平台可能不支持访问任意地址处的内存），性能原因（内存对齐时访存效率更高）
//结构体设计：让占用内存空间较小的成员尽量集中在一起

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;//10000000
//	struct S3 s3;//111111111000111
//	double d;//11111111
//};
//int main()
//{
//	struct S1 s1 = { 0 };//100011111000大小为12
//	struct S2 s2 = { 0 };//11001111大小为8
//	printf("%d %d\n", sizeof(s1), sizeof(s2));//由于内存对齐，成员类型个数都相同但顺序不同的结构体大小也可能不同
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

//修改默认对齐数，使用#pragma pack(n)开始，使用#pragma pack()结束，通常为2的次方数

//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
//int main()
//{
//	//修改前为16，修改后为12
//	printf("%d\n", sizeof(struct S));
//}

//offsetof求偏移量，参数为结构体类型名和成员名

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}

//结构体传参，传址与传值，尽量传址以减少压栈开销

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 10;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print(struct S s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//void Print1(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print(s);
//	Print1(&s);
//	return 0;
//}