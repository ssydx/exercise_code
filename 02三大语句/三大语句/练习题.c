#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//比较三个数字的大小

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入时每个数字以空格分隔，可采用scanf("%d,%d,%d", &a, &b, &c)
//								//但此时输入时也必须以逗号分隔，其他符号同理，建议采用默认形式
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//输出1-100间能被3整除的数字

//int main()
//{
//	for (int i = 1; i < 101; i++)
//		if (0 == i % 3)
//			printf("%d ", i);
//
//	return 0;
//}


//两个数字的最大公约数（辗转相除法）

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)//辗转相除，求两者余数，令被模数等于模数，模数等于余数，余数为0时的模数就是最大公约数
//				//数字无所谓大小排序，大数作为被模数时次数比小数做模数时少一次
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//打印闰年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400))
//			//1能被四整除但不能被100整除，2能被400整除
//			count++;
//			printf("%d ", year);
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//打印素数

//int main()//便于理解sqrt(i)<j或int s=sqrt(i)+1
//{
//	int i = sqrt(101);//得到取整的整数
//	float j = sqrt(101);//得到较精确的非整数
//	printf("%d %f", i, j);//i<j
//	return 0;
//}
//int main()
//{
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j < i; j++)
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	if (i == j)//当是素数时j必然等于i
//	//	{
//	//		count++;
//	//		printf("%d是素数\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j <= sqrt(i); j++)
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	int s = (int)sqrt(i) + 1;//s相当于上个算法中的i
//	//	if (s == j)
//	//	{
//	//		count++;
//	//		printf("%d是素数\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j <= sqrt(i); j++)//非素数必然有小于等于该数开平方的因子，sqrt为库函数
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	if (sqrt(i) < j)//注意理解，当是素数时j必然大于sqrt(i),sqrt(i)得到小于j的浮点数
//	//	{
//	//		count++;
//	//		printf("%d是素数\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//	return 0;
//}


//数9的个数

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//此处不要用else if会漏掉99时十位的9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//分数求和

//int main()
//{
//	double i = 0.0;
//	double sum = 0.0;//设置为双精度浮点型
//	int flag = -1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(flag, i+1) * 1.0 / i;//利用库函数，也可采用flag每次取反进行求解
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求十个整数中的最大值

//int main()
//{
//	int arr[] = { -10,2,3,-4,5,6,7,8,9,0,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];//将max设置为数组中的某元素而不是0或其他数字，避免max大于所有元素导致求解错误
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//打印乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//确定行数
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//确定一行的输出个数
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//printf("%nd",para)，其中的n为输出宽度，正数右对齐，负数左对齐
//		}
//		printf("\n");//每打印一行后换行
//	}
//	return 0;
//}



//猜数字游戏（重点体会）

//选择菜单

//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.play    0.exit******\n");
//	printf("***************************\n");
//}

//游戏实现

//void game()
//{
//	int num = 0;
//	//time_t time(time_t *timer
//	num = rand()%100+1;//生成一个介于0到32767之间的整数，进一步模100使其在0-99，再加一得到1-100
//	//num放在循环体外，否则每次猜都改变数值，将很难猜中
//	while (1)//猜不对就持续循环
//	{
//		int guess = 0;
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;//猜对后跳出循环
//		}
//	}
//	printf("%d\n", num);
//}

//主体相关

//int main()
//{
//	int input = 0;//定义在循环体外
//	srand((unsigned int)time(NULL));//调用一次即可，不要频繁调用
//	//rand和srand都属于stdlib库函数，rand用于生成随机数，需要一个种子
//	// （种子不作为传入的参数，该函数无参）即srand（该函数应在rand函数之前调用）
//	//srand需要一个无符号整型参数，固定的参数将产生相同序列，因此需要进一步传入随机数
//	//理想的随机数是时间戳（强制类型转换为无符号整数）
//	// 通过调用time函数实现（该函数返回系统当前时间，以二进制形式）
//	//time函数需要传入参数，可设置为NULL
//	do//先执行再判断，类似程序常采用的方式
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//巧妙地使input控制循环，input为0时停止循环，其他值都持续循环
//	return 0;
//}