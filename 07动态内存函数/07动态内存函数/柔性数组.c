#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//C99�涨�ṹ������һ����Ա(����������Ա)�����Ǵ�Сδ֪������(����д��)
//����ָ��Ҳ���Դ��춯̬����
//��������ĺô��ǿ��ٿռ�����(�ṹ���������һ��),����Ч�ʸ���(�ֲ���ԭ��)ͬʱ�����ڼ����ڴ���Ƭ,�ҷ����ڴ��ͷ�

//��������

//struct S
//{
//	int n;
//	int arr[];
//};

//struct S
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(struct S));//��������Ĵ�С����������
//
//	//�״ο���
//	struct S* ps = (struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
//	//�ֽ�����=�ṹ���ֽ���+��Ҫ����������Ĵ�С
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//�ٴο���
//	struct S* ptr = realloc(ps, 44);
//	if (ptr)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷſռ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//������ʽ

//struct S
//{
//	int n;
//	int* parr;//ע��һά����˴�������ָ��,��������������ָ��
//};

//int main(void)//�����鲿�ֶ�̬����
//{
//	struct S s = { 0 };
//	s.parr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		s.parr[i] = i;
//	}
//	int* ptr = realloc(s.parr, 10 * sizeof(int));
//	if (ptr)
//	{
//		s.parr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		s.parr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.parr[i]);
//	}
//	free(s.parr);
//	s.parr = NULL;
//	return 0;
//}

//int main(void)
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));//�ṹ��Ҳ��̬����
//	ps->parr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->parr[i] = i;
//	}
//	int* ptr = realloc(ps->parr, 10 * sizeof(int));
//	if (ptr)
//	{
//		ps->parr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->parr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->parr[i]);
//	}
//	free(ps->parr);
//	ps->parr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}