#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <stddef.h>


//�ṹ����������ṹ������Ķ��弰��ʼ��

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}s4, s5 = { "liu",20,"male","1234" };//ȫ�ֱ����ڴ������ⶨ�岢����ֵ��Ĭ��Ϊ0
//
////s4 = { "wangwu",22,"male","01231231230" };������ô��
//
//typedef struct S
//{
//	char name[20];
//	int age;
//}Stu;//�˴�Ϊ����
//
//struct  //�����ṹ��ֻ���ڴ���ʱ����ȫ�ֱ�������Ա�ṹ��ͬ�������ṹ��Ҳ�ǲ�ͬ
//		//�����ṹ�����������Ҳ���������ýṹָ�루��Ҫ��ǰ������
//{
//	char name[20];
//	char sex[5];
//}s6 = { "liu","male" };
//
//struct//�����ṹ��ֻ���ڴ���ʱ����ȫ�ֱ�������Ա�ṹ��ͬ�������ṹ��Ҳ�ǲ�ͬ�����ض��壩
//{
//	char name[20];
//	char sex[5];
//}*ps6;
//
////�ṹ�岻�ܰ����Լ������޷�����ṹ���С
//
////struct Node
////{
////	int data;
////	struct Node;
////};
//
////����ɴ���Լ����͵�ָ�룬ָ���С����4/8��ָ��Ϊָ��������Ϊ�����������ò�Ҫʹ�������ṹ��
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
////�ṹ����������ṹ��
//
//struct T
//{
//	char name[20];
//	int age;
//};
//struct S1
//{
//	struct T t;
//	char sex[5];
//};
//
//
//int main()
//{
//	struct Stu s1 = { "zhangsan",20,"male","12345678912" };//��ʼ��
//	Stu s2 = { "lisi",21 };
//	//ps6 = &s6;//������
//	printf("%d\n", s4.age);//����
//	printf("%d\n", s5.age);
//	struct S1 s = { {"zhangsan",20},"male" };//Ƕ�׽ṹ�嶨��
//	printf("%s %d %s\n", s.t.name, s.t.age, s.sex);//Ƕ�׽ṹ�����
//	return 0;
//}

//�ṹ�����
//�ṹ��ĵ�һ����Ա��ƫ��ֵΪ0��λ�ô�ţ��ڶ�������ڶ���������������ƫ��ֵ��
//������ȡĬ�϶�������VSĬ��Ϊ8����ó�Ա��С�еĽ�Сֵ�����մ�СΪ�ѳ��ֵĶ������е����ֵ��������
//û��Ĭ�϶�����ʱ����Ա��С����
//Ƕ�׽ṹ��ʱȡ�ӽṹ��������������ж��룬���մ�С�Ķ�����Ҳ�����ӽṹ��Ķ�����
//�ڴ�����ԭ��ƽ̨��ֲԭ����Щƽ̨���ܲ�֧�ַ��������ַ�����ڴ棩������ԭ���ڴ����ʱ�ô�Ч�ʸ��ߣ�
//�ṹ����ƣ���ռ���ڴ�ռ��С�ĳ�Ա����������һ��

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;//10000000
//	struct S3 s3;//111111111000111
//	double d;//11111111
//};
//int main()
//{
//	struct S1 s1 = { 0 };//100011111000��СΪ12
//	struct S2 s2 = { 0 };//11001111��СΪ8
//	printf("%d %d\n", sizeof(s1), sizeof(s2));//�����ڴ���룬��Ա���͸�������ͬ��˳��ͬ�Ľṹ���СҲ���ܲ�ͬ
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

//�޸�Ĭ�϶�������ʹ��#pragma pack(n)��ʼ��ʹ��#pragma pack()������ͨ��Ϊ2�Ĵη���

//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
//int main()
//{
//	//�޸�ǰΪ16���޸ĺ�Ϊ12
//	printf("%d\n", sizeof(struct S));
//}

//offsetof��ƫ����������Ϊ�ṹ���������ͳ�Ա��

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}

//�ṹ�崫�Σ���ַ�봫ֵ��������ַ�Լ���ѹջ����

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 10;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print(struct S s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//void Print1(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print(s);
//	Print1(&s);
//	return 0;
//}