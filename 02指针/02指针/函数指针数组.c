#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*p[4])(int, int) = { Add,Sub,Mul,Div };//����Ϊint(*)(int,int)[4]
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = p[i](3, 5);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	;
//}
//
//int main()
//{
//	char* (*p)(char*, const char*) = my_strcpy;//����ָ��
//	char* (*parr[5])(char*, const char*) = { my_strcpy };//����ָ������
//	return 0;
//}


//���ú���ָ������ʵ�ּ�����

//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.add        2.sub*****\n");
//	printf("*****3.mul        4.div******\n");
//	printf("*****5.xor        0.exit*****\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
////void cal()//��������������������
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	do
////	{
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("�˳�����\n");
////			break;
////		default:
////			printf("ѡ�����\n");
////			break;
////		}
////	} while (input);
////}
//
//void cal()//ɾ������ʱ�޸�����Ԫ�ز��޸Ĳ˵�����
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//���ú���ָ��������ʽ�������࣬����Ϊת�Ʊ�
//	int sz = sizeof(p)/sizeof(p[0]);
//	while(1)
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input > sz-1 || input < 0)
//		{
//			printf("ѡ�����\n");
//			continue;//ѡ�����ʱ��������ѭ��
//		}
//		if (input)
//		{
//			printf("�˳�����\n");
//			break;//ѡ��Ϊ0ʱ�˳�ѭ��
//		}
//		printf("����������������:>");
//		scanf("%d%d", &x, &y);
//		printf("%d\n", p[input](x, y));
//	}
//}
//
//int main()
//{
//	cal();
//
//	return 0;
//}
