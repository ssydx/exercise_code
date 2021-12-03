#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//指针的算术运算与其类型有关
//地址减地址得到的数字除以指向的类型大小才得到差值


//指针的强制类型转换

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr=(int*) (&a + 1);//int *,(int[5] *被强制转换为int *
//	printf("%d %d\n", *(a + 1), *(ptr - 1));//2,5
//	
//	int(*p)[5] = &a + 1;
//	printf("%p\n", ptr);
//	printf("%p", &a[4]);
//
//	return 0;
//}



//不同指针类型加一和强制类型转换

//struct test
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;//假定p的值为0x100000,结构体大小为20byte
//
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014，指针类型为结构体指针，单位20
//	printf("%d\n", (unsigned long)p + 0x1);//0x00100001，指针类型转为无符号整型，实际已变成整数的算术运算，本质不是指针了，因此产生警告
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004，指针类型转为无符号整型指针，单位4
//
//	return 0;
//}



//整型地址转整型后加一，再转整型指针，指针偏移一字节
//整型地址加一，指针偏移四字节

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//int *,数组后的元素地址
//	int* ptr2 = (int*)((int)a + 1);//int *,
//	//01000000020000000300000004000000（小端存储）
//	//  00000002
//	//*ptr2得到02000000，十六进制就是2000000
//	printf("%x,%x", ptr1[-1], *ptr2);//4,02000000(2000000)
//
//	return 0;
//}



//注意逗号表达式

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//注意！！！里面是逗号表达式，本质是{{1，3},{5}}
//	int* p;
//	p = a[0];//首行首元素地址
//	printf("%d\n", p[0]);//*(p+0)==1
//
//	return 0;
//}



//地址进行运算时，地址差要除以其单位
//%p地址是无符号十六进制

//int main()
//{
//	//short a[5][5];
//	//short(*p)[4];
//	//p = a;
//	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//差值为-16，除以单位4，输出-4
//	//															//由于格式化为地址，地址是无符号十六进制的
//	//															//输出FFFFFFFC
//	int arr[5] = { 1,2,3,4,5 };
//	int* parr = &arr[0];
//	int* parr1 = &arr[3];
//	printf("%d\n", *(parr + 1));//偏移4个字节，取四个字节，指针±整数==p±num*elesize
//	printf("%d\n", *((char*)parr + 1));//偏移1个字节，取一个字节，指针访址以元素大小为单位
//	printf("%d\n", *(char*)((int)parr + 1));//偏移1个字节，取1个字节
//	printf("%d\n", *(int*)((char*)parr + 1));//偏移1个字节，取四个字节
//	printf("%d\n", *(int*)((int)parr + 1));//偏移1个字节，取四个字节
//	printf("%d\n", *(char*)(parr + 1));//偏移四个字节，取一个字节
//
//	printf("%d\n",parr - parr1 );//指针可以相减，得到的差值要除以元素大小，即得到个数差
//	//printf("%d\n", parr + parr1);指针不可相加
//	return 0;
//}



//记住*(p+n)==p[n]

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//数组后首行首元素地址
//	int* ptr2 = (int*)(*(aa + 1));//第二行首元素地址，不强制类型转换也可以
//	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));//10，5
//
//	return 0;
//}



//字符串指针与字符串输出
//字符指针与字符输出

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//指针数组
//	char** pa = a;//指向数组首指针的指针
//	pa++;//指向数组第二个指针的指针
//	printf("%s\n", *pa);//数组第二个指针，是"at"首元素地址，输出at
//
//	char* p = "abcdef";//p是首元素地址
//	char arr[7] = "abcdef";//arr也是首元素地址
//	//两者是等价的,字符串输出时传入的是地址,字符指针类型，不能传入数组名或元素名等
//	printf("%s\n", p);//字符串打印输入地址
//	printf("%s\n", arr);
//	printf("%c\n", *(p));//字符输出传入的是元素名
//
//	return 0;
//}



//[],(),.,->优先级最高
//-(取相反数),强制类型转换,++,--,*,&,!,~,sizof,次之，注意自增改变值
//算术，移位，比较，位，逻辑，条件表达式，赋值，逗号表达式

//int main()
//{
//	char* c[] = { "enter","new","point","first" };//指针数组
//	char** cp[] = { c + 3,c + 2,c + 1,c };//指针数组，指针指向指针
//	char*** cpp = cp;//指向指针数组的指针
//	printf("%s\n", **++cpp);//point,此时指针移位，下一次要在这次基础上进行
//	printf("%s\n", *-- * ++cpp + 3);//er
//	printf("%s\n", *cpp[-2] + 3);//st
//	printf("%s\n", cpp[-1][-1] + 1);//ew
//
//	return 0;
//}