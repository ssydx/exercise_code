#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//指针类型

//int main()
//{
//	////指针变量的大小在32平台都是4个字节
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	//指针类型决定了解引用时其能访问的内存的大小（以字节为单位），也决定了指针改变时单位
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//将11223344修改为00000000，能操作四个字节
//	//char* pc = &a;//同样可存储int型变量的地址
//	//*pc = 0;//仅修改44为00，只能操作一个字节
//	//double* pd = &a;
//	//*pd = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);//在前一地址基础上加4
//	//printf("%p\n", pc);
//	//printf("%p\n", pc+1);//在前一地址基础上加1
//	
//	//int arr[10] = { 0 };
//	//char* p = arr;//arr是首元素地址，将该地址赋予p
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1;//每循环一次地址加单位一（不同指针的单位不同）
//	//}
//
//	return 0;
//}

//野指针，指针指向的位置不可知：指针未初始化，指针越界访问，指针所指向的内存空间已经被释放
//局部变量不进行初始化时默认为随机值，局部指针变量同理
//避免野指针：指针初始化，避免越界访问，指针指向的空间被释放时把指针置为NULL，判断指针有效性
//C标准规定允许指向数组的指针与数组末元素后面的那个内存地址比较，但不允许与首元素之前的那个内存地址比较
//全局变量不初始化默认为0，指针变量同理

//int* test()
//{
//	int a = 3;
//	return &a;
//}
//
//int main()
//{
//	//int* p;//未初始化的指针不可使用，不能对该指针指向的内存空间进行操作
//	//*p = 20;
//
//	//int arr[10] = { 0 };
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i <= 12; i++)//越界
//	//{
//	//	//*p++=i;
//	//	*p = i;
//	//	p++;
//	//}
//
//	//int* p = test();//test中的a的地址传给p，但函数调用结束后a的内存已经被释放，p指针指向的内存并不属于当前程序
//	//printf("%d\n", *p);//虽然输出结果正确但程序本质是错误的
//
//	//int* p = NULL;//本质是(void*)0
//	//*p = 10;//空指针不可使用
//	//if (p != NULL)
//	//{
//	//	//执行代码
//	//}
//
//	return 0;
//}

//指针运算

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[9];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p - 1;
//	//}
//
//	//float values[5];
//	//float* vp;
//	//for (vp = &values[0]; vp < &values[5];)
//	//{
//	//	*vp++ = 0;
//	//}
//	//for (vp = &values[5]; vp > &values[0];)//体会与上个代码的区别，从最后一个元素后的地址开始访问，推荐
//	//{
//	//	*--vp = 0;//得到最后一个元素并赋值为0
//	//}
//	//for (vp = &values[5 - 1]; vp >= &values[0]; vp--)//不推荐，因为C标准不允许指向数组的指针与数组首元素之前的地址比较
//	//{
//	//	*vp = 0;
//	//}
//	//for (vp = &values[5 - 1]; vp >= &values[0]; )//不推荐，同理
//	//{
//	//	*vp-- = 0;
//	//}
//
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int a = &arr[9] - &arr[0];//得到元素个数差而非字节个数差
//	//printf("%d\n", a);//9
//
//
//	return 0;
//}



//练习-strlen

//int length(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[5] = "bit";
//	int len = length(arr);
//	printf("%d\n", len);
//	return 0;
//}


//数组指针

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", &arr);//形式上是首元素地址，但实际是整个数组的地址，sizeof（arr)得到的也是整个数组的地址
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", arr+1);//第二个元素的地址
//	printf("%p\n", &arr+1);//数组后的地址
//	printf("%p\n", &arr[0]+1);//第二个元素的地址
//	
//	return 0;
//}


//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;//*pa为int类型
//	int** ppa = &pa;//*ppa为int*类型
//	int*** ppa = &ppa;//*pppa为int**类型
//	return 0;
//}

//指针数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);//根据指针数组中的每一个指针找到其对应的数据
//	}
//	return 0;
//}
