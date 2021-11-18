#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if语句


//int Max(int a, int b)
//{
//	//不规范
//	if (a > b)
//	{
//		return a;
//	}
//	return b;//注意若执行return a;则不再执行return b;
//
//	//规范
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	////单分支
//	//int age = 13;
//	//if (age < 18)
//	//	printf("未成年\n");
//
//	////双分支
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	////多分支
//	//int age = 34;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age < 28 && age > 18)//不能使用18<age<28，相当于(18<age)<28
//	//	printf("青年\n");
//	//else if (age < 60 && age > 28)
//	//	printf("壮年\n");
//	//else
//	//	printf("老年\n");
//
//	//多语句
//	//int age = 14;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("禁止抽烟\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//	printf("抽烟有害健康\n");
//	//}
//
//	//复合语句，注意if与else的匹配
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//{
//	//	if (b == 2)
//	//		printf("哈哈\n");
//	//}
//	//else
//	//	printf("嘿嘿\n");//若使其与第一个if匹配则必须将第二个if括起来
//
//	//int a = 4, b = 5;
//	//int max = Max(a, b);//调用Max函数
//	//printf("%d", max);
//	
//	//关于赋值与等于
//	//int a = 4;
//	//if (a = 6)//易错点
//	//	printf("haha\n");
//	//if (5 == a)//常量与变量比较时将常量放在左侧避免与赋值搞混
//	//	printf("haha\n");
//
//	////小练习，判断奇偶
//	//int a = 16;
//	//if (a % 2)
//	//	printf("奇数");
//	//else
//	//	printf("偶数");
//
//	////小练习，输出1-100间奇数
//	//int i = 1;
//	//while (i < 101)
//	//{
//	//	if (i % 2)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//
//	return 0;
//	}



//switch语句

//int main()
//{
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)//需要判断的变量，必须为整型
//	//{
//	//case 1://case后跟整型常量表达式（char也可以，以ASCII码值存放），以冒号分隔
//	//	printf("星期一\n");
//	//	break;//成功则跳出，否则会从满足的条件起执行至最后，包括default
//	//case 2://没有顺序
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	//default:
//	//	printf("无效输入\n");
//	//}
//
//	////省略break的情况
//	//int n = 1;
//	//switch (day)
//	//{
//	//case 1://可省略
//	//	if (n == 1)//可嵌套其他语句
//	//		printf("haha\n");
//	//case 2:
//	//case 3:
//	//case 5:
//	//	printf("工作日\n");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("休息日\n");
//	//	break;
//	//default://处理意外情况，可放在任意位置，最好放在末尾
//	//	printf("无效输入\n");
//	//	break;//在最后不要省略break
//	//}
//
//	////小练习
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//case 1:
//	//	m++;//m=3
//	//case 2:
//	//	n++;//n=2
//	//case 3:
//	//	switch (n)//可嵌套
//	//	{
//	//	case 1:
//	//		n++;
//	//	case 2:
//	//		m++;//m=4
//	//		n++;//n=3
//	//		break;//跳出当前循环
//	//	}
//	//case 4:
//	//	m++;//m=5
//	//	break;
//	//default:
//	//	break;
//	//}
//	//printf("m = %d, n = %d\n", m, n);//m=5,n=3
//
//	return 0;
//}
