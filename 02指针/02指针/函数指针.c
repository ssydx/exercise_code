#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//函数指针被重定义，被当作返回值类型时，函数名都要放在(*fname)中

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", add(a, b));//输出30
//	printf("%p\n", &add);//取函数地址,&add类型为int(*)(int,int)
//	printf("%p\n", add);//取函数地址，与上一个相同，但add类型为int (int,int)
//	 
//	 
//	int (*p)(int, int) = &add;//声明p为函数指针
//	int(*p1)(int, int) = add;//与&add效果相同且不产生警告，说明函数名就是函数地址
//	 
//	 
//	printf("%p\n", p);
//	printf("%d\n", (*p)(a, b));//解引用得到函数，输出30
//	printf("%d\n", p(a, b));//不解引用可直接调用函数
// 
//	printf("%d\n", (**p)(a, b));//加任意个*效果不变，最好不要这么写
//	//即函数地址就是函数名
//
//
//
//	//int arr[10] = { 1,3,4,6,7,8,9,10};
//	//int* parr1 = arr;//得到数组名(首元素地址)，解引用后为数组首元素
//	//int* parr4 = &arr;
//
//	////int(*parr2)[10] = &arr;//得到数组地址，不是数组名，解引用后为数组名(首元素地址)，再解引用得到数组首元素
//	////int(*parr3)[10] = arr;//效果与&arr相同但产生警告，说明数组名和数组地址不是一回事，同上必须解引用
//
//
//	//printf("%d\n", *arr);
//	//printf("%d\n", *parr1);
//	//printf("%d\n", *parr4);
//	////printf("%d\n", **parr2);
//	////printf("%d\n", **parr3);
//
//
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", parr1[5]);
//	//printf("%d\n", parr4[5]);
//
//	//printf("%d\n", *(parr1+5));
//	////printf("%d\n", (*parr2)[5]);
//	////printf("%d\n", *((*parr2)+5));
//
//
//	//易知函数与数组的差别
//	//fun:取地址函数名pfun1与函数名pfun2等价，都是函数地址（都可解引用，或不解引用）
//	// 即fun==pfun1=pfun2（后两者必须解引用时必须有括号）
//	//arr:取地址数组名parr1与数组名parr2不等价，前者时数组地址（必须解引用），后者时元素地址（不能解引用）
//	// 即arr==parr2==*parr1（第三个必须有括号）
//
//
//	return 0;
//}



//两段有趣的代码，注意理解！！！

// (  * (  void(*)()  ) 0 ) ();
// void(*)()						为函数指针
// (  void(*)()  )					为强制类型转换，转为函数指针，指针指向的函数的无参，返回值为void
// (  void(*)()  ) 0				把0强制转为为函数指针
// * (  void(*)()  ) 0				解引用地址为0的函数指针，得到函数
// (  * (  void(*)()  ) 0 ) ()		调用函数
//即把0转为类型为void(*)()的函数指针，再解引用0地址，得到该地址指向的函数后调用函数

// void( * signal( int, void(*)(int) ) ) (int);
// void(*)(int)									为函数指针
// signal( int, void(*)(int)					signal函数的参数类型为int和void(*)(int)
//												（函数指针指向的函数的参数为int，返回值为void）
// void( * signal( int, void(*)(int) ) ) (int)	声明函数的返回值类型为void(*)(int)
//												注意声明返回值为函数指针时，函数名要放在(*fname(arg...))中
//即声明一个signal函数，其参数类型为int和void(*)(int)，返回值类型为void(*)(int)
// 
//简化该代码
//typedef void(*pfun)(int);//注意函数指针的重定义与一般变量不同，重定义的名字要放在(*newfname)z中
//pfun signal(int, pfun);
