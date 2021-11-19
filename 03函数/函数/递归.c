#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


//栈区：存放局部变量和函数形参
//堆区：存放动态开辟的内存，malloc,calloc
//静态区：存放全局变量和static修饰的变量


//递归的主要思想是大事化小，即把原问题化为与原问题相同但规模较小的问题
//递归是函数调用自身
//递归常出现栈溢出的错误，不适于大规模使用

//int main()
//{
//	printf("haha\n");
//	main();//调用自身，在栈区申请空间，栈区内存耗尽则出现栈溢出
//	return 0;
//}


//按位输出一个无符号整型数字

//void print(int n)
//{
//	if (n > 9)//递归必须有终止条件
//	{
//		print(n/10);//递归结束才能执行下面的代码，每次调用都越来越接近终止条件
//	}
//	printf("%d ", n%10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	//print(123),4
//	//print(12),3,4
//	//print(1),2,3,4
//	return 0;
//}



//不创建临时变量求字符串长度

//int length(char* str)
//{
//	if (*str != '\0')//字符可直接比较
//	{
//		return length(str + 1) + 1;//str为数组指针，移动指针则地址改变，指向的元素也改变
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	int ret = 0;
//	ret = length(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//阶乘

//1递归法

//int fac(int num)
//{
//	if (num > 1)
//	{
//		return fac(num - 1) * num;
//	}
//	return 1;
//
//}

//int main()
//{
//	int i = 10;
//	long ret = fac(i);
//	printf("%ld", ret);
//	return 0;
//}

//2循环法

//int fac(int num)
//{
//	int fac = 1;
//	while (num)
//	{
//		fac *= num;
//		num--;
//	}
//	return fac;
//}

//int main()
//{
//	int i = 10;
//	int ret = 0;
//	ret = fac(i);
//	printf("%d\n", ret);
//	return 0;
//}



//斐波那契数列

//1递归法

//int count = 0;
//int fib(int num)
//{
//	if (num == 3)//fac(3)的次数，是个庞大的数字
//	{
//		count++;
//	}
//	if (num == 1 || num == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(num - 1) + fib(num - 2);
//	}
//}

//int main()
//{
//	int i = 40;//该数字较大时时间会很长，即时间复杂度高，指数型
//	int ret = 0;
//	ret = fib(i);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}

//2循环法

//int fib(int count)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	while (count - 3)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		count--;
//	}
//	return c;
//}

//int main()
//{
//
//	int count = 1000;
//	int ret = 0;
//	ret = fib(count);
//	printf("%d\n", ret);
//	return 0;
//}



//汉诺塔问题2^n-1 

//int i = 0;//函数可省略，直接进行打印
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);//把A上的一个移到C
//	i++;
//}

//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		//move(a, c);//将A上的一个移到C
//		printf("%c->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//将上面的n-1个移到B
//		//move(a, c);           //将A上的最后一个移到C
//		printf("%c->%c\n", a, c);
//		hanoi(n - 1, b, a, c);//将B上的n-1个移到C
//	}
//}

//int main()
//{
//	int count = 3;
//	hanoi(count, 'A', 'B', 'C');
//	//printf("%d\n", i);
//	return 0;
//}



//青蛙跳台阶（斐波那契的变形）

//int skip(int num)//可以跳一阶或两阶
//{
//	if (num == 1)
//	{
//		return num;
//	}
//	else if (num == 2)
//	{
//		return num;
//	}
//	else
//	{
//		return skip(num - 1) + skip(num - 2);//本质上有n个台阶就是
//											 //（在n-1个台阶基础上都多跳一阶）+（在n-1个台阶基础上都多跳两阶）
//	}
//}

//int skip(int num)//可以跳一二三阶
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	else if (num == 2)
//	{
//		return 2;
//	}
//	else if (num == 3)
//	{
//		return 4;
//	}
//	else
//	{
//		return skip(num - 1) + skip(num - 2) + skip(num - 3);//同理为n-1,n-2,n-3基础上各跳1,2,3阶
//	}
//}

//int main()
//{
//	int i = 4;
//	int ret = skip(i);
//	printf("%d\n", ret);
//	return 0;
//}



//青蛙跳台阶升级版

//int skip(int num,int pace)//可以跳1-n阶
//{
//	int sum = 0;
//	int i = 0;
//	if (num <= pace)//当台阶数小于等于跳数时
//	{
//		return pow(2, num - 1);//总跳法就是2^(num-1)
//	}
//	if (num > pace)//当台阶数多于跳数时
//	{
//		for (i = 1; i <= pace; i++)
//		{
//			num--;
//			sum += skip(num, pace);//总跳法=num-1,num-2...num-pace
//		}
//		return sum;//返回sum的值，sum递归调用skip
//				   //将skip的值(依然可能是sum形式，但最终可转化为skip的值)返回给sum
//	}
//}


//int main()
//{
//	int num = 5;//台阶数
//	int pace = 3;//一次最多可跳台阶数
//	int ret = skip(num,pace);//跳法个数
//	printf("%d\n", ret);
//	return 0;
//	//以5，3为例,skip(3)返回4，skip(2)返回2,skip(1)返回1
//	//调用函数后得到sum=skip(4)+skip(3)+skip(2)
//	//skip(4)进一步返回sum=skip(3)+skip(2)+skip(1)
//	//即sum=skip(3)+skip(2)+skip(1)+skip(3)+skip(2)=4+2+1+4+2=13
//}