#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//ע��sizeof(a)��sizeof(a+num)��ͬ��ǰ�������飬�����ǵ�ַ
//��sizeof(a)��&aʱa��ʾ���飬��������ʾ��Ԫ�ص�ַ
//strlen���봫��ַ����\0ʱ������
//���ַ�������ָ��ʱʵ�ʾ��Ǹ�������ĸ��ַ������ͬ���ɽ����������ע����������������
//��һ��֤����*(p+i)==p[0]==a[i]==*(a+i)��p��a�����������a�����������ʾ����
//
//��ά������:sizeof(a)��ʾ���飬&a��ʾ���飬���������ʾ�������飨���������һ�������֣�
//���һά���飬��ÿ�������鵱��һ��Ԫ��

//int main()
//{
//	//��������sizeof
//
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));			//�������Ĵ�С��16,int[4]
//	//printf("%d\n", sizeof(a + 0));		//���������Ԫ�ص�ַ�Ĵ�С��4,int *
//	//printf("%d\n", sizeof(*a));			//�����Ԫ�صĴ�С��4,int
//	//printf("%d\n", sizeof(a + 1));		//����ڶ���Ԫ�ص�ַ�Ĵ�С��4,int *
//	//printf("%d\n", sizeof(a[1]));		//����ڶ���Ԫ�صĴ�С��4,int
//	//printf("%d\n", sizeof(&a));			//��������ַ�Ĵ�С��4,int[4] *
//	//printf("%d\n", sizeof(*&a));		//�������Ĵ�С��16,int[4]
//	//printf("%d\n", sizeof(&a + 1));		//��������ַ��һ����ַ�Ĵ�С��4,int[4]
//	//printf("%d\n", sizeof(&a[0]));		//�����Ԫ�ص�ַ�Ĵ�С��4,int *
//	//printf("%d\n", sizeof(&a[0] + 1));	//����ڶ���Ԫ�ص�ַ�Ĵ�С��4,int *
//
//	//�ַ�����sizeof
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));			//char[6],6
//	//printf("%d\n", sizeof(arr+0));			//char *,4
//	//printf("%d\n", sizeof(*arr));			//char,1
//	//printf("%d\n", sizeof(arr[1]));			//char,1
//	//printf("%d\n", sizeof(&arr));			//char[6] *,4
//	//printf("%d\n", sizeof(&arr+1));			//char[6] *,4
//	//printf("%d\n", sizeof(&arr[0]+1));		//char *,4
//
//	//�ַ�����strlen
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", strlen(arr));			//char *,n(nΪδ֪��)
//	//printf("%d\n", strlen(arr+0));			//char *,n
//	////printf("%d\n", strlen(*arr));			//char,error
//	////printf("%d\n", strlen(arr[1]));			//char,error
//	//printf("%d\n", strlen(&arr));			//char[6] *,n
//	//printf("%d\n", strlen(&arr+1));			//char[6] *,n-6
//	//printf("%d\n", strlen(&arr[0]+1));		//char *,n-1
//
//	//�ַ�������sizeof
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));			//char[7],7
//	//printf("%d\n", sizeof(arr+0));			//char *,4
//	//printf("%d\n", sizeof(*arr));			//char,1
//	//printf("%d\n", sizeof(arr[1]));			//char,1
//	//printf("%d\n", sizeof(&arr));			//char[7] *,4
//	//printf("%d\n", sizeof(&arr+1));			//char[7] *,4
//	//printf("%d\n", sizeof(&arr[0]+1));		//char *,4
//
//	//�ַ�������strlen
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", strlen(arr));				//char *,6
//	//printf("%d\n", strlen(arr + 0));			//char *,6
//	////printf("%d\n", strlen(*arr));				//char,error
//	////printf("%d\n", strlen(arr[1]));			//char,error
//	//printf("%d\n", strlen(&arr));				//char[7] *,6
//	//printf("%d\n", strlen(&arr + 1));			//char[7] *,n
//	//printf("%d\n", strlen(&arr[0] + 1));		//char *,5
//
//	//�ַ�������ָ��sizeof
//
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));			//char *,4
//	//printf("%d\n", sizeof(p+1));			//char *,4
//	//printf("%d\n", sizeof(*p));			//char,1
//	//printf("%d\n", sizeof(p[0]));			//char,1
//	//printf("%d\n", sizeof(&p));			//char * *,4
//	//printf("%d\n", sizeof(&p+1));			//char * *,4
//	//printf("%d\n", sizeof(&p[0]+1));		//char *,4
//
//	//�ַ�������ָ��strlen
//
//	//char* p = "abcdef";
//	//printf("%d\n", strlen(p));			//char *,6
//	//printf("%d\n", strlen(p + 1));			//char *,5
//	////printf("%d\n", strlen(*p));			//char,error
//	////printf("%d\n", strlen(p[0]));			//char,error
//	//printf("%d\n", strlen(&p));			//char * *,n
//	//printf("%d\n", strlen(&p + 1));			//char * *,m,m��nδ���й�ϵ
//	//printf("%d\n", strlen(&p[0] + 1));		//char *,5
//
//
//
//	//��ά���飬ע������ȡ��ַ�����Ȳ�������
//
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));				//int[3][4],48
//	//printf("%d\n", sizeof(a[0][0]));		//int,4
//	//printf("%d\n", sizeof(a[0]));			//int[4],16
//	//printf("%d\n", sizeof(a[0]+1));			//int *,4
//	//printf("%d\n", sizeof(*&a[1]));			//int[4],16
//	//printf("%d\n", sizeof(*&*(a+1)));		//int[4],16
//	//printf("%d\n", sizeof(*(a[0]+1)));		//int,4---a[0]������������������Ԫ�ص�ַ��+1�õ����еڶ���Ԫ�ص�ַ
//	//printf("%d\n", sizeof(a+1));			//int[4] *,4
//	//printf("%d\n", sizeof(*(a+1)));			//int[4],16
//	//printf("%d\n", sizeof(&a[0]+1));		//int[4] *,4
//	//printf("%d\n", sizeof(*(&a[0]+1)));		//int[4],16---��ȡ��ַ�õ����е�ַ��+1�õ��ڶ��е�ַ
//	//printf("%d\n", sizeof(*a));				//int[4],16
//	//printf("%d\n", sizeof(a[3]));			//int[4],16---ͬһάԽ��Ҳ�ɼ����С����Ϊsizeof�ڲ�ʵ�ʲ����з���
//
//
//
//	return 0;
//}
