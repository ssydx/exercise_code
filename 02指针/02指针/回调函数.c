#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//回调函数是调用函数指针的函数
//利用回调函数实现计算器

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
////void cal()
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
//void Usefun(int(*p)(int, int))//回调函数，即该函数的参数是另一个函数的地址
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//
//void cal()//利用回调函数去掉冗余
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Usefun(Add);
//			break;
//		case 2:
//			Usefun(Sub);
//			break;
//		case 3:
//			Usefun(Mul);
//			break;
//		case 4:
//			Usefun(Div);
//			break;
//		case 5:
//			Usefun(Xor);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	cal();
//
//	return 0;
//}



//回调函数

//void print(char* str)
//{
//	printf("print\n");//3
//	printf("%s", str);//4
//}
//
//void test(void(*pf)(char*))
//{
//	printf("test\n");//2
//	pf("hello world");//调用print函数
//}
//
//int main()
//{
//	printf("main\n");//1
//	test(print);
//
//	return 0;
//}



//void*类型的指针

//int main()
//{
//
//	char ch = 'w';
//	//int* pc = &ch;//指针不兼容
//	void* pv = &ch;//接收任意类型的地址
//	//*pv = 0;//非法寻址，因为void*指针一次访问的字节数不定
//	*(int*)pv = 0;//强制转换为int*指针以便访问
//
//	return 0;
//}



//冒泡排序整型

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int count = 1;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				count = 0;
//			}
//		}
//		if (count)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//qsort-库函数-排序函数，四个参数，第一个是数组名，第二个是元素个数，第三个是元素大小，第四个是函数指针
//指针指向的函数：返回值为int，两个参数为const void*，返回值>0则参数1指向的元素更大，反之更小，为0相等
//实现该函数的要点是对void*的强制类型转换，以及如何比


void bubble_sort_plus(void*, int, int, void(*)(const void*, const void*));//声明自定义函数

struct stu
{
	char name[20];
	int age;
};



int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}



int cmp_by_age(const void* e1, const void* e2)//按年龄
{
	return ((struct stu*)e1)->age - (*(struct stu*)e2).age;//两种找结构体成员的方法都可以
														   //但要注意.和->的优先级高于*
														   //因此将其括起来
}

int cmp_by_name(const void* e1, const void* e2)//按名字
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int cmp_struct(const void* e1, const void* e2)//结构体比较按成员
{
	//return cmp_by_age(e1, e2);
	return cmp_by_name(e1,e2);
}



void test1()//整型
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);//利用库函数排序，使用stdlib.h
	bubble_sort_plus(arr, sz, sizeof(arr[0]), cmp_int);//利用自定义函数bubble_sort_plus
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()//浮点型
{
	float arr2[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	//qsort(arr2, sz, sizeof(arr2[0]), cmp_float);//利用库函数排序，使用stdlib.h
	bubble_sort_plus(arr2, sz, sizeof(arr2[0]), cmp_float);//利用自定义函数bubble_sort_plus
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr2[i]);
	}
}

void test3()//结构体型
{
	struct stu arr1[] = { {"qksn",20},{"yjq",21},{"ssydx",10} };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//printf("%d\n", sizeof(arr1[0]));
	//qsort(arr1, sz, sizeof(arr1[0]), cmp_struct);//利用库函数排序，使用stdlib.h
	bubble_sort_plus(arr1, sz, sizeof(arr1[0]), cmp_struct);//利用自定义函数bubble_sort_plus
	// 
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}不进行打印展示
}

//int main()
//{
//	//test1();//整型
//	//test2();//浮点型
//	test3();//结构体型
//	return 0;
//}




//bubble_sort_plus

void swap(char* buf1, char* buf2, int width)
{
	int k = 0;
	for (k = 0; k < width; k++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort_plus(void* base, int sz, int width,int(*pf)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int count = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (pf((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
			count = 0;
		}
		if (count)
		{
			break;
		}
	}
}
