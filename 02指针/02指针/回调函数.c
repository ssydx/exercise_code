#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//�ص������ǵ��ú���ָ��ĺ���
//���ûص�����ʵ�ּ�����

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
////void cal()
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
//void Usefun(int(*p)(int, int))//�ص����������ú����Ĳ�������һ�������ĵ�ַ
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//
//void cal()//���ûص�����ȥ������
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Usefun(Add);
//			break;
//		case 2:
//			Usefun(Sub);
//			break;
//		case 3:
//			Usefun(Mul);
//			break;
//		case 4:
//			Usefun(Div);
//			break;
//		case 5:
//			Usefun(Xor);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	cal();
//
//	return 0;
//}



//�ص�����

//void print(char* str)
//{
//	printf("print\n");//3
//	printf("%s", str);//4
//}
//
//void test(void(*pf)(char*))
//{
//	printf("test\n");//2
//	pf("hello world");//����print����
//}
//
//int main()
//{
//	printf("main\n");//1
//	test(print);
//
//	return 0;
//}



//void*���͵�ָ��

//int main()
//{
//
//	char ch = 'w';
//	//int* pc = &ch;//ָ�벻����
//	void* pv = &ch;//�����������͵ĵ�ַ
//	//*pv = 0;//�Ƿ�Ѱַ����Ϊvoid*ָ��һ�η��ʵ��ֽ�������
//	*(int*)pv = 0;//ǿ��ת��Ϊint*ָ���Ա����
//
//	return 0;
//}



//ð����������

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int count = 1;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				count = 0;
//			}
//		}
//		if (count)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//qsort-�⺯��-���������ĸ���������һ�������������ڶ�����Ԫ�ظ�������������Ԫ�ش�С�����ĸ��Ǻ���ָ��
//ָ��ָ��ĺ���������ֵΪint����������Ϊconst void*������ֵ>0�����1ָ���Ԫ�ظ��󣬷�֮��С��Ϊ0���
//ʵ�ָú�����Ҫ���Ƕ�void*��ǿ������ת�����Լ���α�


void bubble_sort_plus(void*, int, int, void(*)(const void*, const void*));//�����Զ��庯��

struct stu
{
	char name[20];
	int age;
};



int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}



int cmp_by_age(const void* e1, const void* e2)//������
{
	return ((struct stu*)e1)->age - (*(struct stu*)e2).age;//�����ҽṹ���Ա�ķ���������
														   //��Ҫע��.��->�����ȼ�����*
														   //��˽���������
}

int cmp_by_name(const void* e1, const void* e2)//������
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int cmp_struct(const void* e1, const void* e2)//�ṹ��Ƚϰ���Ա
{
	//return cmp_by_age(e1, e2);
	return cmp_by_name(e1,e2);
}



void test1()//����
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);//���ÿ⺯������ʹ��stdlib.h
	bubble_sort_plus(arr, sz, sizeof(arr[0]), cmp_int);//�����Զ��庯��bubble_sort_plus
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()//������
{
	float arr2[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	//qsort(arr2, sz, sizeof(arr2[0]), cmp_float);//���ÿ⺯������ʹ��stdlib.h
	bubble_sort_plus(arr2, sz, sizeof(arr2[0]), cmp_float);//�����Զ��庯��bubble_sort_plus
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr2[i]);
	}
}

void test3()//�ṹ����
{
	struct stu arr1[] = { {"qksn",20},{"yjq",21},{"ssydx",10} };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//printf("%d\n", sizeof(arr1[0]));
	//qsort(arr1, sz, sizeof(arr1[0]), cmp_struct);//���ÿ⺯������ʹ��stdlib.h
	bubble_sort_plus(arr1, sz, sizeof(arr1[0]), cmp_struct);//�����Զ��庯��bubble_sort_plus
	// 
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}�����д�ӡչʾ
}

//int main()
//{
//	//test1();//����
//	//test2();//������
//	test3();//�ṹ����
//	return 0;
//}




//bubble_sort_plus

void swap(char* buf1, char* buf2, int width)
{
	int k = 0;
	for (k = 0; k < width; k++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort_plus(void* base, int sz, int width,int(*pf)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int count = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (pf((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
			count = 0;
		}
		if (count)
		{
			break;
		}
	}
}
