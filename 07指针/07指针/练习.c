#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//函数
//return不能一次返回两个值
//函数参数可以是数组，指针，变量，常量
//函数不可以嵌套定义，可以嵌套调用
//函数调用未必带回返回值也未必有参数，形参实参名称可相同，主调函数可以与被调函数不在同一文件
//函数必须先声明后使用，声明是说明有这个函数，定义是说明函数如何实现！！！
//ecec((v1,v2),(v2,v4),v5,v6)该函数有四个参数v2，v4，v5，v6（逗号表达式仅返回最后一个的值）！！！
//耦合：关联大，内聚：关联少。函数追求高内聚低耦合
//尽量少使用全局变量
//函数参数尽量不要超过四个
//函数设计时做到谁申请的资源谁释放
//库函数的使用必须包含头文件，使用其他文件中的库函数也要包含头文件
//main函数可以写在任何位置，但程序执行必须从主函数开始
//不同函数中可使用相同变量名！！！
//局部变量放在栈上，包括函数的参数
// 函数内定义的变量只在该函数内部有效（用const只能保证其不可改变，
// 用static只能保证其生命周期延长，但作用域仍然是该函数，因此函数外无效）！！！
// 此外函数内定义的变量也未必整个函数范围有效，而是其所在的大括号内
//局部变量作用域为其所在的大括号范围内！！！
//staic有三种用法，其一是延长局部变量生命周期，其他两种为限制函数或全局变量的作用域仅在所处文件！！！


//变量作用域为大括号的例子

//int main()
//{
//	{
//		int a = 10;
//	}
//	a = a + 10;
//	return 0;
//}


//乘法口诀表plus

//void Mult_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num = 1;
//	Mult_table(num);
//
//	return 0;
//}


//字符串逆序

//void Reverse(char arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = ' ';
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%s\n", arr);
//	Reverse(arr, sz - 1);
//	printf("%s\n", arr);
//	return 0;
//}




//递归
//递归不可无限制调用，会产生溢出
//递归必须有限制条件且每调用后都越来越接近限制条件


//递归实现字符串逆序(难点）

//void Reverse(char* p, int len)
//{
//	
//	if (p < p+len-1)//不减一同样可行，
//	{
//		char tmp = ' ';
//		tmp = *p;
//		*p = *(p + len-1);
//		*(p + len-1) = tmp;
//		//p++;
//		//len-=2;
//		Reverse(p+1, len-2);
//	}
//
//	//char* left = p;
//	//char* right = p + len - 1;
//	//if (left < right)
//	//{
//	//	char tmp = ' ';
//	//	tmp = *left;
//	//	*left = *right;
//	//	*right = tmp;
//	//	Reverse(p+1, len-2);
//	//}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//递归实现计算一个正数的各位之和

//int digit_sum(int num)
//{
//	if (num > 9)
//	{
//		return digit_sum(num / 10) + (num % 10);
//	}
//	return num;
//}
//
//int main()
//{
//	int num = 1729;
//	int ret = digit_sum(num);
//	printf("%d\n", ret);//19
//	return 0;
//}


//递归实现n的k次方（注意负数情形）

//double mypower(int n, int k)
//{
//	if (k < 0)//不要忘记负数情形
//	{
//		return 1.0 / n * mypower(n, k + 1);
//	}
//	if (k == 0)//注意区分等于和赋值！！！
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * mypower(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 2;
//	int k = 0;
//	double ret = mypower(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//递归实现斐波那契数列

//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 10;
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//数组
//数组下标由大到小，对应的地址由低到高

//int main()
//{
//	int arr[] = { 1,(3,4),5 };//注意逗号表达式
//	printf("%d\n", sizeof(arr));//输出12
//	return 0;
//}

//数组逆置

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<right)
//	{
//		int tmp = 0;
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//初始化为0,1,2,3...
//	Print(arr, sz);//打印
//	Reverse(arr, sz);//逆置数组
//	Print(arr, sz);
//	return 0;
//}

//等大数组交换

//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	return 0;
//}

//利用指针打印数组

//void Print(int* arr[], int sz)//实现1
//{
//	int* p = arr;
//	for (p=arr; p < &arr[sz];)
//	{
//		printf("%d ", *p++);
//	}
//}
//
//void Print(int* p, int sz)//实现2
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *p++);
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//利用指针求水仙花数（一个n位数，各位数的n次方之和就是该数）(怎么优化算法？）

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
//
//	return 0;
//}





//操作符

//表达式求值要先看是否存在整型提升和算术转换，再进行计算
//表达式求值先相邻（注意是相邻）看优先级再看结合性
//表达式未必能求出唯一值
//32位机器指针长度为4byte，32bit,即四个字节长的指针，访问内存大小为2^32
//无符号数与有符号数计算时都按无符号数


//sizeof返回值为无符号数，括号内的表达式计算的结果仅用于sizeof计算大小，而实际未产生运算，可以理解为传值调用

//int i;//全局变量不初始化默认为0
//int main()
//{
//	i--;//-1
//	    //10000000000000000000000000000001（原码）
//	    //11111111111111111111111111111110（反码）
//	    //11111111111111111111111111111111（补码）
//		//11111111111111111111111111111111（无符号数）2^32-1
//	//sizeof(i)为无符号整型4
//	if (i > sizeof(i))//sizeof()返回的值为无符号数
//	{
//		printf(">\n");//输出>
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//逗号表达式优先级最低

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++, 10;//b=7,c=7,c=8,a=7,a=8，此处将++c赋给b，后面计算但不会赋给b
//	b += a++ + c;//a=9,c=8,b=23
//	printf("a = %d b = %d c = %d\n", a, b, c);//9，23，8
//	return 0;
//}


//统计二进制中1或0的个数

//int count_bit_one(unsigned int a)//通过强制类型转换，就没有不能求负数的缺陷了，并且比按位与更优
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1)//依次右移，将右移后的数字按位与上1，若右移后的数字末位为1则count加一
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one(int a)//求1
//{
//	int count = 0;
//	while (a != 0)//当a中的1全部被消去时跳出循环
//	{
//		a = a & (a - 1);//该操作每进行一次会从右消去一个1
//		count++;//消去1的次数就是1的个数
//	}
//	return count;
//}
//
//int count_bit_zero(int a)//求0
//{
//	int count = 0;
//	while (a != -1)//当a中的0全部变为1时跳出循环
//	{
//		a = a | (a + 1);//该操作每进行一次会从右把一个0变为1
//		count++;//变1的次数就是1的个数
//	}
//	return count;
//}
//
//int main()
//{
//	int x = 15;
//	int ret = count_bit_zero(x);//统计函数
//	printf("%d\n", ret);
//	//system("pause");//使程序停止
//	return 0;
//}


//统计两个整数二进制中不同位的个数（异或+统计1的个数）

//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int ret = count_bit_one(a ^ b);//利用异或可得到（由同0异1得到的数字，其中1的个数就是不同位的个数）
//	printf("%d\n", ret);//7
//	return 0;
//}


//分别打印二进制的奇数位和偶数位

//void print(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)//打印奇数位
//	{
//		printf("%d ", (n >> i) & 1);//同1为1，否则为0，即得到实际该位的值
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)//打印偶数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 13;
//	print(a);
//
//	return 0;
//}


//交换变量值，但不使用临时变量

//void Swap(int* x, int* y)
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d b = %d", a, b);
//
//	return 0;
//}






