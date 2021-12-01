#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//判断机器的存储模式（字节序模式）

//int check_sys(void)//返回值为1则为小端，否则为大端，VS默认小端
//{
//	const int a = 1;
//	const char* const p = (char*)&a;//取出首字节，如果首字节为1则为小端，否则为大端
//						//使用(char*)强制类型转换避免不兼容警告
//	assert(p != NULL);
//	if (*p)
//	{
//		return 1;
//	}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}

//int check_sys(void)
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//一道练习题
//char:记住-1的补码是全一,-128的补码是1加全0(规定)
//依次加一  1,2,3...126,127,-128,-127...-2,-1
//依次减一  -1,-2...-127,-128,127,126...3,2,1

//int main()//先转无符号数再整型提升
//{
//	char a = -1;//-1为全一，取前八个1放进a中
//	signed char b = -1;//同上
//	unsigned char c = -1;//同上
//	printf("a=%d b=%d,c=%d", a, b, c);//（整型提升）a,b补1，c补0
//	//a=b=-1,c=255
//	return 0;
//}


//一道练习题

//int main()//先整型提升再转无符号数
//{
//	char a = -128;//10000000
//	printf("%u\n", a);//11111111111111111111111110000000（原反补），但看作无符号数，即原反补相同
//
//	return 0;
//}



//一道练习题，注意理解模数与原码补码

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	char b = 128;
//	printf("%u\n", b);
//	//输出结果相同，因为两者的二进制形式完全相同
//	//进一步的负数+正数为256的signed char数字的二进制都相同，根据模数256
//	//再进一步，所有一正一负相加等于模数的有符号数在该类型（如char int short long）范围内二进制都相同
//	//若求一个超范围正数a的二进制，则找-(M-a)的二进制，同理求负数b则找-(M+b)的二进制
//	return 0;
//}


//一道练习题

//int main()//先转无符号数再转有符号数
//{
//	int i = -20;//10000000000000000000000000010100原码
//				//11111111111111111111111111101011反码
//				//11111111111111111111111111101100(a)补码
//	unsigned int j = 10;
//				//00000000000000000000000000001010(b)原反补
//	printf("%d\n", i + j);//输出-10
//				//11111111111111111111111111110110(a+b)补码
//				//10000000000000000000000000001001反码
//				//10000000000000000000000000001010→-10原码
//
//	return 0;
//}


//一道练习题

//int main()//无符号数慎用，易产生死循环
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//无符号数不会有负数，i=0后会变成2^32-1...
//	{
//		printf("%d\n", i);//再按有符号数输出9，8，7，6，5，4，3，2，1，0，-1，-2...
//	}
//
//	return 0;
//}


//一道练习题

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1,-2...-128,127...2,1,0
//	}
//	printf("%d\n", strlen(a));//255
//
//	return 0;
//}

//一道练习题

//unsigned char i = 0;
//int main()//死循环
//{
//	for (i = 0; i <= 255; i++)//255+1=0
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}
