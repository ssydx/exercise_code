#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//指针可以比较大小，可以相减，不可以相加
//数组创建时要指定大小，直接初始化时不需要指定
//结构体访问时用到的操作符有：. -> *

//int main()
//{
//	unsigned long pularr[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pularr;
//	*(pulptr + 3) += 3;//pularr[3]=9+3=12
//	printf("%d %d\n", *pulptr, *(pulptr + 3));//6,12
//
//	return 0;
//}



//字符串逆序

//char* reverse(char* const pc, const int sz)//采用数组形式，本质还是指针
//{
//	assert(pc);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = pc[left];
//		pc[left] = pc[right];
//		pc[right] = tmp;
//		left++;
//		right--;
//	}
//	return pc;
//}
//
////char* reverse(char* pc, int sz)//指针形式
////{
////	assert(pc);
////	char* left = pc;//首元素地址
////	char* right = pc + sz - 1;//最后一个元素地址
////	while (left<right)
////	{
////		char tmp = *left;
////		*left=*right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////	return pc;
////}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//scanf遇到空格后的内容不再录入
//	gets(arr);//读入一行
//	printf("%s\n", reverse(arr, strlen(arr)));
//	return 0;
//}


//求a+aa+aaa+...

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int num = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += num;
//		num = num * 10 + a;
//	}
//	printf("%d", sum);
//	return 0;
//}



//自幂数

//int digit(int i)//求位数
//{
//	int count = 1;
//	while (i /= 10)
//	{
//		count++;
//	}
//	return count;
//}
//
//int is_nar(int i)//判断
//{
//	int sum = 0;
//	int expo = digit(i);
//	int tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, expo);
//		tmp /= 10;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//   return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000000; i++)
//	{
//		if (is_nar(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//打印菱形

//void printpattern(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)//上半部分
//	{
//		int tmp = i;
//		while (n - tmp)
//		{
//			printf(" ");
//			tmp++;
//		}
//		tmp = 2 * i - 1;
//		while (tmp)
//		{
//			printf("*");
//			tmp--;
//		}
//		//tmp = i;
//		//while (n - tmp)
//		//{
//		//	printf(" ");
//		//	tmp++;
//		//}
//		printf("\n");
//	}
//	for (i = n-1; i > 0; i--)//下半部分
//	{
//		int tmp = i;
//		while (n - tmp)
//		{
//			printf(" ");
//			tmp++;
//		}
//		tmp = 2 * i - 1;
//		while (tmp)
//		{
//			printf("*");
//			tmp--;
//		}
//		//tmp = i;
//		//while (n - tmp)
//		//{
//		//	printf(" ");
//		//	tmp++;
//		//}
//		printf("\n");
//	}
//}

//void printpattern(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n-1; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//上半部分的行数
//	printpattern(n);
//
//	return 0;
//}



//struct s
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct s a, * p = &a;
//	a.a = 99;
//	printf("%d\n", (*p).a);
//	printf("%d\n", p->a);
//	printf("%d\n", a.a);
//	//printf("%d\n",*p.a);错误写法
//	return 0;
//}



//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);
//	//输出wang
//	return 0;
//}


//喝汽水，一瓶汽水一元，两个空瓶可换一瓶汽水，20元可喝几瓶！！！

//int main()
//{
//	int money = 20;
//	int empty = 0;
//	int total = 0;
//	empty = money;
//	total = money;
//	while (empty > 1)
//	{
//		total += empty / 2;//喝掉的汽水等于之前喝的加这次换的
//		empty = empty / 2 + empty % 2;//这次换的汽水喝完后的空瓶加没有换的
//	}
//	printf("%d\n", total);
//	printf("%d\n", drink(money));
//	return 0;
//}


//调整数组使奇数位于前部，偶数位于后部

//void just(int* arr,int sz)//每轮至少使首尾一对满足要求
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < sz / 2; i++)//最多排一半趟
//	{
//		for (j = i; j < sz - 1 - i; j++)//每轮要调整的元素减2
//		{
//			if ((arr[j] % 2 == 0) && (arr[j + 1] % 2 != 0))//如果前偶后奇则交换
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)//某轮未交换则退出循环
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 2,4,7,34,76,1,6,87,90,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	just(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数据存储
//大小端指的是字节顺序
//大端高地址放低位，小端高地址放高位，默认从左到位为地址增大
//0x11223344:大端11223344，小端44332211



//猜名次！！！
//A说B第二A第三。B说B第二E第四。C说C第一D第二。D说C第五D第三。E说E第四A第一。结果每人对一半，确定名次

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) +
//							(d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((a == 1) + (e == 4) == 1))
//						{
//							if(a*b*c*d*e==120)//该步骤必不可少，不然可能出现同名次
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//猜凶手
//A说不是A。B说是C。C说是D。D说C说谎。四人有三人说真话，一人说谎，则谁是凶手

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c", killer);//c
//		}
//	}
//}

//赛马问题
//有三十六匹马，六个赛道，确定前三名需要比几次（假定25匹5个跑道呢）
//需要比八次：分为六组，分别比赛决定出每组第一名，然后对每组第一名再比赛，确定出名次
//取第一名所在组别的前三名，第二名所在组别的前两名，第三名取其自己，令该六匹比赛得到最终的前三名

//烧香问题
//一根非均质的香可燃烧一个小时，现有两根香，试用它们得到精准的十五分钟
//点燃A的两端同时点燃B的一端，当A燃烧完毕时时间过去半个小时，此时点燃B的另一端，当B燃烧完毕时时间又过去十五分钟
//即得到十五分钟的精准时间

//数组应放到数组指针中，不应该放到整形指针中



//int (* (*fun)(int, int) )(int);//定义一个函数指针，指针指向的数组有两个int形参
								 //返回一个指针（指针指向一个有一个int形参且返回值为int的函数）
//int(*(*p)[10])(int*);//定义一个指针，指针指向含有十个元素的数组，元素类型为为指向函数的指针（指向形参int*，返回值int的函数）




//左旋字符串

//暴力求解法

//char* rotate_str(char* const arr, int n,const int mode)
//{
//	//判断指针非空
//	assert(arr);
//	//求字符串长度，不包括\0
//	int sz = 0;
//	while (arr[sz])
//	{
//		sz++;
//	}
//	//左旋模式
//	if (mode == 1)
//	{
//		while (n)//左移元素的个数
//		{
//			char tmp = arr[0];//取出首部元素
//			int i = 0;
//			while (i < sz - 1)//每轮移动sz-1次
//			{
//				arr[i] = arr[i + 1];//左移元素
//				i++;
//			}
//			arr[sz - 1] = tmp;//指针停留在最后一个元素地址
//			n--;
//		}
//	}
//	//右旋模式
//	else if (mode == 2)
//	{
//		while (n)//右移元素的个数
//		{
//			char tmp = arr[sz - 1];//取出末尾元素
//			int i = sz - 1;
//			while (i > 0)//每轮移动sz-1次
//			{
//				arr[i] = arr[i - 1];//右移元素
//				i--;
//			}
//			arr[0] = tmp;
//			n--;
//		}
//	}
//	//非指定模式
//	else
//	{
//		printf("模式选择错误\n");
//	}
//	return arr;//返回字符串起始地址
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int n = 3;
//	printf("%s\n", rotate_str(arr, n, 1));
//
//	return 0;
//}

//三步翻转法

//void reverse(char* arr, int count)//逆序字符串
//{
//	int left = 0;
//	int right = count - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//char* rotate_str(char* const arr, int n, int mode)
//{
//	//判断指针非空
//	assert(arr);
//	//求字符串长度，不包括\0
//	int sz = 0;
//	while (arr[sz])
//	{
//		sz++;
//	}
//	//左旋
//	if (mode == 1)
//	{
//		reverse(&arr[0],n);//先逆序前半部分
//		reverse(&arr[n],sz - n);//再逆序后半部分
//		reverse(&arr[0], sz);//整体逆序
//	}
//	//右旋
//	else if (mode == 2)//右旋n本质上是左旋sz-n
//	{
//		reverse(&arr[0], sz - n);
//		reverse(&arr[sz - n], n);
//		reverse(&arr[0], sz);
//	}
//	//错误
//	else
//	{
//		printf("模式选择错误\n");
//	}
//	return arr;//返回起始地址
//}

//int main()
//{
//	char arr[] = "abcdefgh";
//	printf("%s\n", rotate_str(arr, 3, 1));
//	return 0;
//}

//判断是否旋转得到

//穷举法

//int check_rotate_str(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (arr1[i])
//	{
//		if (!strcmp(arr1, rotate_str(arr2, 1, 1)))//判断arr1与arr2旋转1,2...个字符后是否相等
//												  //由于每次旋转后原字符串被改变，因此每次旋转一个
//												  //而不是使用i，使用i相当于旋转0,1,3,6,10
//		{
//			return 1;
//		}
//		printf("%s\n",arr2);
//		i++;
//	}
//	return 0;
//}

//追加字符串法

//int check_rotate_str(char* arr1, char* arr2)
//{
//	//在arr1后追加其本身
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	//字符串长度不同一定不是旋转得来的，同时避免求字串可能产生的问题
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1,len1);
//	//判断arr2是否为arr1的子串
//	if (strstr(arr1, arr2)==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "aabcd";
//	char arr2[] = "abcd";
//	if (check_rotate_str(arr1, arr2))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//查找杨氏矩阵

//int young_matrix(int arr[3][3], int num,int* px,int* py)//采用副对角线查找法
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y>-1)
//	{
//		if (arr[x][y] > num)
//		{
//			y--;
//		}
//		else if (arr[x][y] < num)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;//将找到的坐标赋给外界的x,y
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int ret = young_matrix(arr, 5, &x, &y);//利用传址改变外部x,y
//	if (ret)
//	{
//		printf("坐标为：%d %d \n", x, y);
//	}
//	else
//	{
//		printf("未找到\n");
//	}
//
//	return 0;
//}


//整型提升与无符号数

//int main()
//{
//	unsigned char a = 200;
//	//200→00000000000000000000000011001000
//	//a → 11001000
//	unsigned char b = 100;
//	//100→00000000000000000000000001100100
//	//b → 01100100
//	unsigned char c;
//	c = a + b;
//	//a+b整型提升(无符号数直接高位补零)后相加→000000000000000000000000100101100（300）
//	//c → 00101100
//	//打印时c进行整型提升 →00000000000000000000000000101100（44）
//	printf("%d %d\n", a+b, c);
//
//	return 0;
//}

//字节序存储模式

//int main()
//{
//	//假定大端
//	unsigned int a = 0x1234;//00 00 12 34
//	unsigned char b = *(unsigned char*)&a;//00
//	//b中是十六进制的00
//	return 0;
//}

//杨辉三角

//void print_yanghui(void)
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if(i>1 && j>0 && j<i)
//			{
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
