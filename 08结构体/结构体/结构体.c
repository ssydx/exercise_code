#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


//结构体用于描述复杂对象，可理解为对象，其成员可理解为属性

//struct Stu//struct为结构体关键字，Stu为结构体标签，struct Stu才是结构体类型
//{
//	//成员列表，可以是变量，数组，指针，结构体
//	char name[20];//以分号结尾
//	int age;
//	char tele[12];
//	char gender[5];
//}s1, s2, s3;//此处可声明变量列表，但通常不这么做，因为其为全局变量，同样以分号结尾
//
//typedef struct Stu//typedef为重命名关键字
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char gender[5];
//}Stu;//Stu可取代struct Stu使用，注意区分与变量列表的区别
//
//int main()
//{
//	struct Stu stu1 = { "杨佳奇",21,"17530401097","男" };//定义并初始化
//	Stu stu2 = { "yjq",21,"175","保密" };
//	Stu stu3;//结构体变量的定义
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//成员是结构体
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world\n";//与结构体中的arr互不影响
//	struct T t = { "haha",{100,'w',"this is me",3.14},arr };
//	printf("%s\n", t.ch);//haha
//	printf("%s\n", t.s.arr);//this is me
//	printf("%lf\n", t.s.d);//3.140000
//	printf("%s\n", t.pc);//hello world
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char tele[13];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);//.的使用
//	printf("age : %d\n", tmp.age);	
//	printf("tele: %s\n", tmp.tele);
//}
//
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);//->的使用
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//}
//
//int main()
//{
//	Stu s = { "杨佳奇",21,"17530401097" };
//	print1(s);//传值
//	print2(&s);//传址，更优，不创建临时变量，临时拷贝开辟内存空间且临时拷贝需要时间（当结构体变量很庞大时优势更明显）
//	return 0;
//	
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = add(a, b);
//	//压栈行为，涉及数据结构
//	//函数传参需要压栈，例如main函数调用function(arg1,arg2)，调用main时在栈区开辟空间s1，
//	// s中又进行划分分别存放函数中的变量ret,a,b（先创建的变量在栈下面）
//	//实参传递需要在栈上另外开辟空间，实参是从右向左依次传递的，因此存储顺序为a,b，a,b即x,y
//	//add开辟空间分配给z内存空间，最终的顺序从上到下是：z,x,y,ret,b,a
//	return 0;
//}
