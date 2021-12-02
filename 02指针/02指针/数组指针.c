#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>



//字符指针/字符串指针

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char arr[] = "abcdef";
//	char* parr = arr;//数组名是字符串首字符的地址，将首地址赋给parr
//	char* p = "abcdef";//将字符串的首字符的地址赋给p，与上两句代码等价
//	//即arr,parr,p是等价的,前两者地址相同，后者不同
//	printf("%c\n", *pc);//打印pc地址处的字符串,w
//	printf("%s\n", arr);//从arr地址处开始打印字符串,abcdef
//	printf("%c\n", *arr);//打印arr地址处的字符,a
//	printf("%s\n", parr);//从parr地址处开始打印字符串,abcedf
//	printf("%c\n", *parr);//打印parr地址处的字符,a
//	printf("%s\n", p);//从p地址处开始打印字符串,abcdef
//	printf("%c\n", *p);//打印p地址处的字符,a
//
//	return 0;
//}


//注意常量字符串修改是非法操作

//int main()
//{
//	//char* p = "abcdef";
//	//*p = 'w';//这种操作是非法的，会使程序崩溃
//	//const char* p = "abcdef";//使用const修饰避免被修改
//	//printf("%s\n", p);
//
//	return 0;
//}


//区分常量字符串与变量字符串

//int main()
//{
//	char arr1 = "abcdef";//相同的变量字符串在内存中有各自的地址
//	char arr2 = "abcdef";
//	char* p1 = "abcdef";//相同的常量字符串在内存中只有一份，地址相同
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");/输出haha，因为arr1和arr2是两个不同的字符串的首地址
//	//}
//
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");//输出hehe，因为p1和p2指向同一个常量字符串的首地址
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}




//区分指针数组与数组指针！！！
//区分数组地址与数组首元素地址与数组名，数组名就是首元素地址（除sizeof(arr)和&arr）
//数组地址解引用得到数组名（数组）,数组名（首元素地址）解引用得到首元素
//*(p+i)==p[i]
//p[i]得到元素或子数组名
//p+i得到元素或子数组的地址，解引用得到元素或子数组名


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int* p = arr;//即p就是arr
//	for (i = 0; i < 10; i++)
//	{
//		//以下四种写法等价
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}


//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)//注意理解！！！，arr是首元素地址，首元素是数组，其为数组指针，类型就是int [5]*
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);//p[i]得到子数组名,[j]得到元素
//			printf("%d ", *(p[i] + j));//p[i]得到子数组名（即子数组首元素地址），+j得到子数组每个元素的地址，再解引用
//			//printf("%d ", (*(p+i))[j]);//p+i为每个子数组的地址，解引用得到子数组名，[j]得到子数组的每个元素
//			printf("%d ", *(*(p + i) + j));//p+i为每个子数组的地址，解引用也为子数组首元素地址
//										   //+j得到子数组每个元素地址
//										   //再解引用得到子数组每个元素
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int* p = NULL;//存放整型地址
//	//char* pc = NULL;//存放字符地址
//	//int arr[10] = { 0 };
//	////arr首元素地址
//	////&arr[0]首元素地址
//	////&arr数组地址
//	////int* parr = &arr; 是错误的，parr是整型指针
//	////int* parr1[10] = &arr; //也是错误的，parr[10]类型为int*，即parr的类型为int* [10]，其为指针数组
//	//int(*parr)[10] = &arr;//               (*p)类型为int[10]，即parr的类型为int[10] *，其为数组指针
//
//	//char* arr[5];
//	//char* (*pa)[5] = &arr;//pa的类型为char*[5] *，即其为字符指针数组的指针
//	////表示某数组指针，首先(*p)表示p为指针，[n]则表示该指针指向数组，type表示数组元素类型，type [n]为数组类型
//	////即type (*p)[n]表示p为指向某类型数组的指针，p类型为type[n] *
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*parr)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*parr)[i]);//parr为数组地址，*parr得到数组，(*parr)[i]得到数组元素
//	//	printf("%d ", *((*parr) + i));//*parr也是数组名，数组名为首元素地址，首元素地址+i解引用得到各元素
//	//}
//
//	//用法
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//利用数组名
//	print2(arr, 3, 5);//利用数组首元素地址，二维数组的首元素地址为首个子数组的地址，解引用的到首个子数组名
//
//	return 0;
//}


//理解以下类型！！！

//int main()
//{
//	int arr[5];//整型数组，元素为整型(5)
//	int* arr1[10];//指针数组，元素为整型指针(5)
//	int(*parr2)[10];//数组指针，指向整型数组(元素为整型(10))的指针
//	int(*parr3[10])[5];//指针数组，元素为指向整型数组(元素为整型(5))的指针(10)
//
//	return 0;
//}