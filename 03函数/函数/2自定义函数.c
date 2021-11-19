#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//参数有两种
//形式参数，定义时函数名后括号中的内容，只能是变量，调用时才实例化（分配内存空间），只在函数体内存在
//实际参数，调用时函数名后括号中的内容，可以是变量，常量，表达式，函数等，调用时必须具有确定的值

//传递方式
//传值，函数的形参和实参占有不同的内存空间，对形参的修改不影响实参
//传址，在实参和形参间建立联系，从而从函数内部操作函数外部变量（改变外部变量时使用）

//两数最大值函数，传值

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//交换两变量内容，传址
//*变量(pointer)是地址指向的内存空间（即int），&变量(int)是内存空间对应的地址（即pointer）

//void swap(int* x, int* y)//形参为指针类型，xy是地址
//{
//	int tmp = 0;
//	tmp = *x;//x为地址，解引用后得到该地址的值，赋给tmp对应的内存空间
//	*x = *y;//将y地址的值赋给x地址指向的内存空间（即将b的值赋给a)
//	*y = tmp;//将tmp中的值赋给y地址指向的内存空间
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);//传入两变量的地址,ab是值
//	printf("%d %d\n", a, b);
//	return 0;
//}


