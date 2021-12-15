#include "add.h"


//预处理（翻译环境）.c
// 编译（编译器）
//		预编译.i（把include的内容加入，空格替换注释，define的内容替换）
//		编译.s（把C代码翻译为汇编代码）
//		汇编.o（把汇编代码转换为机器代码）
// 链接（链接器）.exe（把预处理的文件链接在一起）
//运行（运行环境）（载入内存，由操作系统 或 手工操作 或 可执行代码置入只读内存
					//程序执行开始调用main函数
					//程序执行会调用运行时堆栈存储函数的局部变量和返回地址，同时也可使用静态变量保存在静态区
					//程序终止，可能正常结束也可能意外终止）


//__STDC__

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//		printf("%s\n", __FUNCTION__);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//预处理指令:#开头，调用宏时先替换符号再替换宏

//#define定义的标识符，严格替换，尽量不要加分号，函数名仅首字母大写，宏全部大写

//#define MAX 20
//#define STR "haha"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	reg int a;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	do_forever;
//	return 0;
//}



//#define定义的宏，参数列表左括号要与名字紧邻，严格替换
//尽量加多的括号使其明确
//字符串常量的内容不被替换
//宏中可以包含其他宏定义的内容，但不可以出现递归

//#define SQUARE(X) ((X)*(X))
//#define MAX 10

//void Print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	//int ret = SQUARE(MAX+MAX);
//	//printf("%d\n", ret);
//
//	int a = 10;
//	int b = 20;
//	//printf("the value is %d\n", a);
//	Print(a);
//	Print(b);//无法打印出the value of b is 20
//
//	return 0;
//}



//字符串的天然连接

//int main()
//{
//	printf("hello world\n");
//	printf("hel"  "lo " "world\n");//字符串天然连接在一起
//	return 0;
//}



//把宏参数插入到字符串，#参数

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}



//从分离片段创建标识符，如CAT(X,Y) X##Y 使CAT(X,Y)显示为X,Y对应的实参相连

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class1 = 2020;
//	printf("%d\n", class1);
//	printf("%d\n", CAT(class, 1));
//	return 0;
//}



//带副作用的宏，尽量不要使用带有副作用的参数
//宏更加灵活，类型无关
//宏在代码量很小时规模和速度方面更优
//宏可以做到一些函数无法做到的事情，如传入的参数是某种类型（可用于简化代码）
//多次使用宏将执行多次代码替换，多次使用函数则仅调用同一函数代码，在代码量大时宏会增加代码规模
//宏是不可调试的，会隐蔽函数可能存在的问题
//宏可能带来运算符优先级的问题导致程序出错
//宏在使用带副作用的参数时往往导致难以预测的结果

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	//int a = 0;
//	//int b = a + 1;
//	//int c = ++a;//副作用
//
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//a=11 b=12 a=11(由于求值顺序改变没有机会再次++） b=13(虽然执行++，但先赋值后++）
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//
//
//	float c = 3.0f;
//	float d = 4.0f;
//	float max1 = MAX(c, d);//直接翻译执行
//	float max2 = Max2(c,d);//存在函数调用和返回的开销，该函数调用和返回的代码比实际执行代码所用时间更多
//	printf("%f\n", max1);
//	printf("%f\n", max2);
//
//	return 0;
//}

//#undef 宏名  用于使接下来的代码不受该宏的影响



//命令行定义，在预处理时指定某个源文件未定义的变量的值



//条件编译指令

//#ifdef 名称，#endif

//#define A//定义
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef A//定义则执行，否则不执行
//		printf("%d ", arr[i]);
//#endif//结束条件编译指令
//	}
//	return 0;
//}

//#if defined(名称)，#endif   等价于ifdef   括号实际可省略但要留出空格

//#define A
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if defined(A)
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#ifndef 名称，#endif

//#define A
//int main()
//{
//#ifndef A
//	printf("haha\n");
//#endif
//	return 0;
//}

//#if !defined(名称)，#endif

////#define A
//int main()
//{
//#if !defined(A)
//	printf("haha\n");
//#endif
//	return 0;
//}

//以上嵌套使用

//#if 常量表达式，#endif

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0//为0不执行，非零则执行
//		printf("%d ", arr[i]);
//#endif//结束条件编译指令
//	}
//	return 0;
//}

//#if 常量表达式，#elif 常量表达式，#else，#endif

//#define A 4
//int main()
//{
//#if A==2
//	printf("haha\n");
//#elif A==2
//	printf("hehe\n");
//#else
//	printf("hihi\n");
//#endif
//	return 0;
//}



//头文件包含
//#include <库头文件> ，直接在标准位置查找，库头文件也可以用双引号但会降低效率
//#include "自定义头文件"，先在工程目录下查找，查找不到再去编译器标准位置查找


////避免头文件重复引用
//int main()
//{
//	printf("%d\n", Add(2, 5));
//	return 0;
//}



//#pragma once   #pragma pack()



//offsetof的使用（模拟实现）

//#define OFFSETOF(struct_name, member_name) ((int)&(((struct_name*)0)->member_name))
////将0强制转换为结构体指针，再访问0地址指向的成员，取该成员的地址，最后将地址强制转换为整型
//typedef struct
//{
//	char c1;
//	int a;
//	char c2;
//}S;
//int main()
//{
//	//S s;
//	printf("%d\n", offsetof(S, c2));
//	printf("%d\n", OFFSETOF(S, c2));
//	return 0;
//}