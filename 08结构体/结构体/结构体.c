#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


//�ṹ�������������Ӷ��󣬿����Ϊ�������Ա�����Ϊ����

//struct Stu//structΪ�ṹ��ؼ��֣�StuΪ�ṹ���ǩ��struct Stu���ǽṹ������
//{
//	//��Ա�б������Ǳ��������飬ָ�룬�ṹ��
//	char name[20];//�ԷֺŽ�β
//	int age;
//	char tele[12];
//	char gender[5];
//}s1, s2, s3;//�˴������������б���ͨ������ô������Ϊ��Ϊȫ�ֱ�����ͬ���ԷֺŽ�β
//
//typedef struct Stu//typedefΪ�������ؼ���
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char gender[5];
//}Stu;//Stu��ȡ��struct Stuʹ�ã�ע������������б������
//
//int main()
//{
//	struct Stu stu1 = { "�����",21,"17530401097","��" };//���岢��ʼ��
//	Stu stu2 = { "yjq",21,"175","����" };
//	Stu stu3;//�ṹ������Ķ���
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;//��Ա�ǽṹ��
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world\n";//��ṹ���е�arr����Ӱ��
//	struct T t = { "haha",{100,'w',"this is me",3.14},arr };
//	printf("%s\n", t.ch);//haha
//	printf("%s\n", t.s.arr);//this is me
//	printf("%lf\n", t.s.d);//3.140000
//	printf("%s\n", t.pc);//hello world
//
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char tele[13];
//}Stu;
//
//void print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);//.��ʹ��
//	printf("age : %d\n", tmp.age);	
//	printf("tele: %s\n", tmp.tele);
//}
//
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);//->��ʹ��
//	printf("age : %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//}
//
//int main()
//{
//	Stu s = { "�����",21,"17530401097" };
//	print1(s);//��ֵ
//	print2(&s);//��ַ�����ţ���������ʱ��������ʱ���������ڴ�ռ�����ʱ������Ҫʱ�䣨���ṹ��������Ӵ�ʱ���Ƹ����ԣ�
//	return 0;
//	
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = add(a, b);
//	//ѹջ��Ϊ���漰���ݽṹ
//	//����������Ҫѹջ������main��������function(arg1,arg2)������mainʱ��ջ�����ٿռ�s1��
//	// s���ֽ��л��ֱַ��ź����еı���ret,a,b���ȴ����ı�����ջ���棩
//	//ʵ�δ�����Ҫ��ջ�����⿪�ٿռ䣬ʵ���Ǵ����������δ��ݵģ���˴洢˳��Ϊa,b��a,b��x,y
//	//add���ٿռ�����z�ڴ�ռ䣬���յ�˳����ϵ����ǣ�z,x,y,ret,b,a
//	return 0;
//}
