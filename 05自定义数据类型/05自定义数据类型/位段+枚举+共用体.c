#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//λ�Σ�λ�εĳ�Աһ����ͬ���͵����ͻ��ַ���(�з����޷��Ŷ�����)����Ա�����ð�źʹ�С��������λ����
//��С������Ϊ�ָ�����ĳ��Ա�Ų���ʱ����һ���µ����ʹ�С���ڴ�ռ䣬��Ա��С���ɳ������ʹ�С
//���մ�СΪ���ʹ�С��������
//λ�εĴ洢���ֽ�ʹ�÷�����Ƿ��������Ǳ�׼δ�涨�ģ����ע�ؿ�ƽ̨��Ӧ����ʹ��λ��
//λ�ε������Ŀ��ƽ̨��ͬҲ��ȷ����intλ�α������з����������޷�����Ҳ��ȷ��
//λ�εĵ���Ӧ�����������ݴ����еķ�װ

//struct A
//{
//	int _a : 2;//11
//	int _b : 5;//11111
//	int _c : 10;//1111111111000000000000000
//	int _d : 30;//11111111111111111111111111111100
//};
//int main()
//{
//	printf("%d", sizeof(struct A));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//0 0100 010   000 00011    0000 0100
//	//0010 0010 0000 0011 0000 0100
//	//22 03 04
//	//��VS�Ǵ��ֽڵ��Ҳ࿪ʼ��ţ�ÿ����Ա�ӵ��ֽڵ�ַ��ʼ���
//	return 0;
//}


//ö�٣�ö���ǳ�������С��int

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,//���һ����Ա���Բ���,
//};
//enum Color
//{
//	RED = 2,//���ó�ʼֵ
//	GREEN = 4,
//	BLUE = 8
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = GREEN;//��ö�ٳ���ֵ�����ܸ���Ӧ��ֵ
//	printf("%d %d %d\n", RED, GREEN, BLUE);//Ĭ�ϴ��㿪ʼ
//	printf("%d %d %d\n", MALE,FEMALE,SECRET);
//	printf("%d\n", sizeof(enum Sex));//��СΪ����int�Ĵ�С
//}
//
//#define RED 0
//#define GREEN 1
//#define BLUE 2
////����#defineҲ�У���ö�پ��м�������
////ö�ٶ���ı�ʶ���������ͼ������Ͻ�
////ʹ��ö�ٴ���Ŀɶ��ԺͿ�ά���Ը���
////��ֹ������Ⱦ��ö�ٳ�����װ��ö�����Ͷ����У�
////���ڵ���
////ʹ�÷��㣬һ�οɶ�����


//�����壨�����壩
//������Ĵ�С����Ϊ��������Ա�Ĵ�С�����մ�СΪ����������������������Ķ���������Ԫ�����ʹ�С

//union U
//{
//	char c;
//	int i;
//};
//
//int check_sys(void)
//{
//	union
//	{
//		char c;
//		int i;
//	}u;//�����ṹ�弴��
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	union U u;
//	//printf("%d\n", sizeof(u));
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));//���ߵ�ַ��ͬ
//	//printf("%p\n", &(u.i));
//	u.i = 1;
//	if (u.c)//Ϊ1С�ˣ�Ϊ0���
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	if (check_sys())
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//union U
//{
//	int a;//������Ϊ4
//	char arr[5];//������Ϊ1
//};
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));//8
//	return 0;
//}
