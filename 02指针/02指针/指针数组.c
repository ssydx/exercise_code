#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//int main()
//{
//	//int arr[10] = { 0 };//�������飬����Ϊint[10]
//	//char ch[5] = { 0 };//�ַ�����
//	//int* parr[4];//����ָ������
//	//char* pch[5];//�ַ�ָ������
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int d = 40;
//	//int* arr[4] = { &a,&b,&c,&d };//����Ϊint *[4]
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	printf("%d\n", *arr[i]);//��ָ�������ÿ��Ԫ�ؽ��н�����
//	//}
//
//	//�÷�
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)//��ӡÿ��
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));//��ӡÿ�е�ÿ��Ԫ�أ�paar[i]Ϊÿ����Ԫ�ص�ַ��+j��õ�����ÿ��Ԫ�ص�ַ
//										  //�������ҵ�ÿ��Ԫ��
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 3; i++)//��ӡÿ��
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);//��ӡÿ�е�ÿ��Ԫ�أ�parr[i]Ҳ��ÿ����������parr[i][j]��õ�����ÿ��Ԫ�ص�ַ
//										  //�������ҵ�ÿ��Ԫ��
//		}
//		printf("\n");
//	}
//
//	return 0;
//}