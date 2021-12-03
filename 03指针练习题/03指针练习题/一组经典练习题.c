#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//注意sizeof(a)与sizeof(a+num)不同，前者是数组，后者是地址
//仅sizeof(a)与&a时a表示数组，其他都表示首元素地址
//strlen必须传地址，无\0时结果随机
//将字符串赋予指针时实际就是赋予首字母地址，但其同样可进行数组操作注意与数组名的区别
//进一步证明，*(p+i)==p[0]==a[i]==*(a+i)，p与a的区别仅在与a有两种情况表示数组
//
//二维数组名:sizeof(a)表示数组，&a表示数组，其他情况表示首子数组（首子数组进一步分两种）
//类比一维数组，将每个子数组当作一个元素

//int main()
//{
//	//整型数组sizeof
//
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));			//输出数组的大小，16,int[4]
//	//printf("%d\n", sizeof(a + 0));		//输出数组首元素地址的大小，4,int *
//	//printf("%d\n", sizeof(*a));			//输出首元素的大小，4,int
//	//printf("%d\n", sizeof(a + 1));		//输出第二个元素地址的大小，4,int *
//	//printf("%d\n", sizeof(a[1]));		//输出第二个元素的大小，4,int
//	//printf("%d\n", sizeof(&a));			//输出数组地址的大小，4,int[4] *
//	//printf("%d\n", sizeof(*&a));		//输出数组的大小，16,int[4]
//	//printf("%d\n", sizeof(&a + 1));		//输出数组地址后一个地址的大小，4,int[4]
//	//printf("%d\n", sizeof(&a[0]));		//输出首元素地址的大小，4,int *
//	//printf("%d\n", sizeof(&a[0] + 1));	//输出第二个元素地址的大小，4,int *
//
//	//字符数组sizeof
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));			//char[6],6
//	//printf("%d\n", sizeof(arr+0));			//char *,4
//	//printf("%d\n", sizeof(*arr));			//char,1
//	//printf("%d\n", sizeof(arr[1]));			//char,1
//	//printf("%d\n", sizeof(&arr));			//char[6] *,4
//	//printf("%d\n", sizeof(&arr+1));			//char[6] *,4
//	//printf("%d\n", sizeof(&arr[0]+1));		//char *,4
//
//	//字符数组strlen
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", strlen(arr));			//char *,n(n为未知数)
//	//printf("%d\n", strlen(arr+0));			//char *,n
//	////printf("%d\n", strlen(*arr));			//char,error
//	////printf("%d\n", strlen(arr[1]));			//char,error
//	//printf("%d\n", strlen(&arr));			//char[6] *,n
//	//printf("%d\n", strlen(&arr+1));			//char[6] *,n-6
//	//printf("%d\n", strlen(&arr[0]+1));		//char *,n-1
//
//	//字符串数组sizeof
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));			//char[7],7
//	//printf("%d\n", sizeof(arr+0));			//char *,4
//	//printf("%d\n", sizeof(*arr));			//char,1
//	//printf("%d\n", sizeof(arr[1]));			//char,1
//	//printf("%d\n", sizeof(&arr));			//char[7] *,4
//	//printf("%d\n", sizeof(&arr+1));			//char[7] *,4
//	//printf("%d\n", sizeof(&arr[0]+1));		//char *,4
//
//	//字符串数组strlen
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));				//char *,6
//	//printf("%d\n", strlen(arr + 0));			//char *,6
//	////printf("%d\n", strlen(*arr));				//char,error
//	////printf("%d\n", strlen(arr[1]));			//char,error
//	//printf("%d\n", strlen(&arr));				//char[7] *,6
//	//printf("%d\n", strlen(&arr + 1));			//char[7] *,n
//	//printf("%d\n", strlen(&arr[0] + 1));		//char *,5
//
//	//字符串数组指针sizeof
//
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));			//char *,4
//	//printf("%d\n", sizeof(p+1));			//char *,4
//	//printf("%d\n", sizeof(*p));			//char,1
//	//printf("%d\n", sizeof(p[0]));			//char,1
//	//printf("%d\n", sizeof(&p));			//char * *,4
//	//printf("%d\n", sizeof(&p+1));			//char * *,4
//	//printf("%d\n", sizeof(&p[0]+1));		//char *,4
//
//	//字符串数组指针strlen
//
//	//char* p = "abcdef";
//	//printf("%d\n", strlen(p));			//char *,6
//	//printf("%d\n", strlen(p + 1));			//char *,5
//	////printf("%d\n", strlen(*p));			//char,error
//	////printf("%d\n", strlen(p[0]));			//char,error
//	//printf("%d\n", strlen(&p));			//char * *,n
//	//printf("%d\n", strlen(&p + 1));			//char * *,m,m与n未必有关系
//	//printf("%d\n", strlen(&p[0] + 1));		//char *,5
//
//
//
//	//二维数组，注意是先取地址还是先参与运算
//
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));				//int[3][4],48
//	//printf("%d\n", sizeof(a[0][0]));		//int,4
//	//printf("%d\n", sizeof(a[0]));			//int[4],16
//	//printf("%d\n", sizeof(a[0]+1));			//int *,4
//	//printf("%d\n", sizeof(*&a[1]));			//int[4],16
//	//printf("%d\n", sizeof(*&*(a+1)));		//int[4],16
//	//printf("%d\n", sizeof(*(a[0]+1)));		//int,4---a[0]参与运算后就是首行首元素地址，+1得到首行第二个元素地址
//	//printf("%d\n", sizeof(a+1));			//int[4] *,4
//	//printf("%d\n", sizeof(*(a+1)));			//int[4],16
//	//printf("%d\n", sizeof(&a[0]+1));		//int[4] *,4
//	//printf("%d\n", sizeof(*(&a[0]+1)));		//int[4],16---先取地址得到首行地址，+1得到第二行地址
//	//printf("%d\n", sizeof(*a));				//int[4],16
//	//printf("%d\n", sizeof(a[3]));			//int[4],16---同一维越界也可计算大小，因为sizeof内部实际不进行访问
//
//
//
//	return 0;
//}
