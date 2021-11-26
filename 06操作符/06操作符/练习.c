#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//不创建变量，实现两数的交换（利用异或）

//int main()
//{
//	int a = 5;//00000000000000000000000000000101
//	int b = 3;//00000000000000000000000000000011
//
//	//常规交换
//
//	//int tmp = 0;
//	//tmp = a;//tmp=5
//	//a = b;  //a=3
//	//b = tmp;//b=5
//
//	//加法交换，有溢出的缺陷
//
//	//a = a + b;//a=8
//	//b = a - b;//a=8,b=5
//	//a = a - b;//a=3
//
//	//异或交换，利用异或的可逆性（可用于异或加密）
//
//	a = a ^ b;//00000000000000000000000000000110→a=6
//	b = a ^ b;//00000000000000000000000000000101→b=5
//	a = a ^ b;//00000000000000000000000000000011→a=3
//}



//求一个整数以二进制形式存储在内存中的1的个数（利用按位与）

//int main()
//{
//	//模除法，负数不可求解（因为其存补码）
//	//int num = 5;//00000000000000000000000000000101
//	//int count = 0;
//	//while (num != 0)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}
//
//	//按位与法
//	int num = -1;//10000000000000000000000000000001（原码）
//	             //11111111111111111111111111111110（反码）
//			     //11111111111111111111111111111111（补码）
//
//	//代码不够精炼
//	//int i = 1;
//	//int count = 0;
//	//int j = 0;
//	//for(j=1;j<=32;j++)
//	//{
//	//	if ((num & i) == i)
//	//	{
//	//		count++;
//	//	}
//	//	i = i * 2;
//	//}
//
//	//利用移位操作
//	//int count = 0;
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))//右移位依此与1做按位与，从最低位按位与到最高位，按位与为1则该位为一
//	//	{
//	//		count++;
//	//	}
//	//}
//
//	//printf("%d\n", count);
//	return 0;
//}


//逻辑运算的步骤

//int main()
//{
//	////逻辑与，遇假则假且不进行为假之后的操作
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//由于首操作数即为假，因此后面操作都不再进行，即a执行++得到1，其余保持不变
//	//printf("%d %d %d %d\n", a, b, c, d);//1 2 3 4
//
//	////逻辑或，遇真则真且不进行为真之后的操作
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ || ++b || d++;//首假，次真，因此后面的操作不再进行，即a执行++得到1，b执行++得到3，d不变
//	//printf("%d %d %d %d\n", a, b, c, d);//1 3 3 4
//
//	return 0;
//}


//一个整型提升的例子

//int main()//==是计算
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//整型提升a变为11111111111111111111111110110110与0xb6不再相等
//	{
//		printf("a\n");
//	}
//	if (b == 0xb600)//同理
//	{
//		printf("b\n");
//	}
//	if (c = 0xb6000000)
//	{
//		printf("c\n");//仅输出c
//	}
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4，是计算
//	printf("%u\n", sizeof(!c));//1，!不是计算
//
//	return 0;
//}

//两个问题表达式的例子

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer = 0;
//	answer = fun() - fun() * fun();//虽然是先把后两个fun()的返回值进行乘积，再加首个fun()的返回值
//	                               //但是先调用哪个fun()是不确定的，不同的调用顺序造成不同的结果
//								   //六种顺序：2-3*4  2-4*3  3-2*4  3-4*2  4-2*3  4-3*2
//								   //三种答案：-10 （VS）    -5            -2
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d\n", a);//当前VS输出12
//	return 0;
//}