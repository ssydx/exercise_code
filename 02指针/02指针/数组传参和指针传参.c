#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//ָ�����飬����ָ��

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//const����ָ�����ַ�����ָ��
//
//	int* arr[10];//ָ�����飬int *[10]
//
//	int* p3;//����ָ�룬int*
//	char* p4;//�ַ�ָ�룬char*
//	int(*parr)[10];//����ָ�룬int[10] *
//	char* (*pa)[5];//����ָ�룬int *[5] *
//	int(*parr2[10])[5];//ָ�����飬  int[5] *[10]
//
//	return 0;
//}


//һά���鴫��

//void test(int arr[])//OK
//{
//	;
//}
//
////void test(int arr[10])//OK��д��ҲûӰ��
////{
////	;
////}
////
////void test(int* arr)//OK
////{
////	;
////}
////
////void test2(int* arr[20])//OK��20��ʡ��
////{
////	;
////}
//
//void test2(int** arr)//OK��ǰһ��*��ʾָ��ָ������ͣ���һ����ʾ�β�Ϊָ�룬��arr��һ��ָ��ָ�������ָ��
//{
//	;
//}
//
//int main()
//{
//	int arr[10] = { 0 };//int[10]
//	int* arr2[20] = { 0 };//int *[20]
//	test(arr);//�����������飬���Կ����������Կ�����ַ
//	test2(arr2);//��������ָ������
//
//	return 0;
//}



//��ά���鴫��

////void test(int arr[3][5])//Ok
////{
////	;
////}
////
////void test(int arr[][5])//OK����ʡ����
////{
////	;
////}
//
////void test(int* arr)//���棬�������ַ���ɷŽ�����ָ��
////{
////	;
////}
//
////void test(int** arr)//��Ȼ����
////{
////	;
////}
//
//void test(int(*arr)[5])//�������ַҪ�Ž����������͵�ָ���У�����������Ϊint[5]���򴫲�����Ϊint[5] * 
//{
//	;
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int(*p)[5] = arr;//arrΪ�������ַ��������Ϊint[5],���Ӧָ��Ϊint[5] *
//	int(*p1)[3][5] = &arr;//&arrΪ�����ַ����������Ϊint[3][5],���Ӧָ��Ϊint[3][5] *
//	test(arr);
//	//test2(arr);
//
//	return 0;
//}



//�ٶ������β�Ϊһ��ָ��

//void test1(int* p)
//{
//	;
//}
//
//void test2(char* p)
//{
//	;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	test1(&a);
//	test1(pa);
//	char c = 'w';
//	char* pc = &c;
//	test2(&c);
//	test2(pc);
//
//	return 0;
//}

//�ٶ������β�Ϊ����ָ��

//void test(int** pp)
//{
//	;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	//test(&& a);�Ƿ�����
//	test(&pa);
//	test(ppa);
//
//	int* arr[10];
//	test(arr);//arrΪ��Ԫ�ص�ַ����Ԫ��Ϊָ�루��ַ������ַ�ĵ�ַ��Ϊ����ָ��
//
//	return 0;
//}