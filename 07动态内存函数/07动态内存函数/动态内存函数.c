#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//动态内存分配在堆区使用内存,malloc,realloc,calloc,free

//typedef struct
//{
//	char name[20];
//	int age;
//}S;//匿名结构体可以重命名
//
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	//S s[n];
//	S s[50];//C99标准已经支持变长数组，但很多编译器并不支持，比如VS
//	return 0;
//}

//malloc，参数为要开辟的字节数，返回值为指向所开辟空间首字节的指针，开辟失败返回空指针
//通常要将指针强制转换为所需类型
//free用于释放开辟的空间，参数是指针

//int main()
//{
//	//申请内存空间
//	int* p = (int*)malloc(10 * sizeof(int));//开辟字节不要开辟0字节，0字节是标准未定义
//	//p = (int*)malloc(INT_MAX * sizeof(int));INT_MAX是最大的整型数值，开辟会失败
//	if (!p)
//		//失败返回错误原因
//		printf("%s\n", strerror(errno));
//	else
//	{
//		printf("开辟成功\n");
//		//使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			p[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	//用完后释放，避免内存泄漏，不要释放非动态内存开辟的空间的指针
//	free(p);
//	//将指针置为空指针，避免误用
//	p = NULL;
//	return 0;
//}

//calloc，与malloc的区别是其会将开辟的内存的每个字节都初始化为0
//参数有两个一个是开辟单位，一个是个数
//当需要初始化为0时使用，效率低于malloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc，用于再分配，失败同样返回空指针
//一个参数是之前开辟用于维护的指针(可以传入空指针,此时相当于malloc)
//另一个是需要开辟字节数（包括上次开辟的空间）
//开辟原理是若当前空间后有足够的空间则从当前位置扩展，返回的指针依然是原来的地址
//若当前空间后无足够空间，就在新位置开辟空间(原空间自动被释放)，把原数据拷贝过去，返回指向新空间的指针
//为避免多指针维护，应使用原指针接收返回值
//但由于存在开辟失败（会使原指针为NULL导致原数据丢失）的风险，需设置一个临时指针

//int main(void)
//{
//	int* p = (int*)malloc(20);
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//	//临时指针变量接收新地址
//	int* ptr = (int*)realloc(p, 4000);//p指针可能改变，也可能不改变，取决于已开辟空间后是否有足够大的空间
//	//若临时指针不为空则将让原指针指向该新空间
//	if (ptr)
//	{
//		p = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			p[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	//释放新空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//常见错误
//1没有对开辟内存后返回的指针做检查（malloc/calloc realloc）
//2越界访问（动态分配的空间要尤其注意越界访问）
//3释放非动态开辟空间的指针
//4修改了维护用的指针(尤其使用前置后置++/--),释放的空间已不是原空间
//5对同一块空间多次释放,一个简单的方法是每次释放都将指针置为空指针
//6内存泄漏,开辟空间但不释放
//申请后检查,避免越界,保证指针不变,释放动态内存,指针置为NULL   谁开辟谁释放!!!

//int main()
//{
//	//越界访问
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	p[i] = i;
//	//}
//	//free(p);
//	//p = NULL;
//	
//	//修改维护指针
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//free(p);
//	//p = NULL;
//	
//	//多次释放
//	//int* p = (int*)malloc(40);
//	//if (!p)
//	//	return 0;
//	//free(p);
//	//free(p);
//
//	//多次释放的处理方法
//	//int* p = (int*)malloc(40);
//	//if (!p)
//	//	return 0;
//	//free(p);
//	//p = NULL;
//	//free(p);//free空指针不会报错
//
//	//内存泄漏
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//	return 0;
//}



//练习

//传指针的值

//源代码
//void GetMemory(char* p)//传参方式错误
//{
//	p = (char*)malloc(100);//未检查指针,未释放空间
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str依然是空指针
//	printf(str);//这种写法是可以的
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//修改1
//void GetMemory(char** p)
//{
//	char* ptr = (char*)malloc(100);
//	if (ptr)
//		*p = ptr;
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//修改2
//char* GetMemory(void)
//{
//	char* ptr = (char*)malloc(100);
//	if (ptr)
//		return ptr;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//返回栈空间地址,非法访问

//源代码
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//非法访问,返回栈空间地址是错误的
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改1
//char* GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//静态区可返回
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改2
//char* GetMemory(void)
//{
//	char str[] = "hello world";
//	char* p = (char*)malloc(20);
//	if (p)
//	{
//		strcpy(p, str);
//		return p;
//	}
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//静态区可返回
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//内存泄漏

//源代码
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//内存泄漏
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//修改后
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//访问已释放空间,非法访问

//源代码
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//访问已被释放的空间
//	if (str)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//修改后
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main(void)
//{
//	Test();
//	return 0;
//} 