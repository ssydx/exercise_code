#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//goto语句要慎用，常用于一口气跳出多重循环

//int main()
//{
//again://标签后跟冒号
//	printf("hello world\n");
//	goto again;//跳到again标签处执行，导致死循环
//	return 0;
//}

//int main()
//{
//	printf("hello\n");
//	goto x;//跳过haha
//	printf("haha\n");
//x:
//	printf("world\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		printf("i=%d\n", i);
//		int j = 0;
//		for (j = 1; j < 11; j++)
//		{
//			printf("j=%d\n", j);
//			int k = 0;
//			for (k = 1; k < 11; k++)
//			{
//				printf("k=%d\n", k);
//				if (5 == k)
//				{
//					goto error;
//				}
//			}
//		}
//	}
//error:
//	printf("11\n");
//	return 0;
//}



//关机程序，该文件下的debug中有exe执行程序可加入启动菜单

//goto语句

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60意为电脑60秒内关机,shutdown -a表示取消关机
//	system("shutdown -s -t 60");//system为系统命令库函数，参数要加双引号
//again:
//	printf("Be careful, your computer will shutdown in 60 seconds!\n");
//	printf("If you input:我是猪, the operation will be cancelled!\n ");
//	printf("Please input:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//非goto

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60意为电脑60秒内关机,shutdown -a表示取消关机
//	system("shutdown -s -t 60");//system为系统命令库函数，参数要加双引号
//	while (1)//借用while死循环
//	{
//		printf("Be careful, your computer will shutdown in 60 seconds!\n");
//		printf("If you input:我是猪, the operation will be cancelled!\n ");
//		printf("Please input:>");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}