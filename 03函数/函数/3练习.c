#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//�ж�����

//int is_prime(int n)//�������ڲ�Ҫ�ж�������������ӡ��
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)//ģ����������������˵����������
//			return 0;//������������
//	}
//	return 1;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//�ж�����

//int is_leapyear(int year)
//{
//	if((year%4==0 && year%100 != 0) || (year%400 == 0))
//		return 1;//����1����ִ�����´���
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leapyear(year) == 1)
//			printf("%d��������\n", year);
//	}
//	return 0;
//}


//�����������
//1arrԪ�ظ���Ҫ���������2�±꽻��ʱ�鲻����3�±�ı�Ҫ��1

//int binary_search(int arr[],int sz,int num)//arr�������������Ԫ�صĵ�ַ
//{										   //�ں����ڲ�ʹ��sizeof(arr)������ǵ�ַ��С4��sz�޷����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int mid = (left + right) / 2;//�м��±�
//	while (left<=right)//�±꽻��ʱ˵�����Ҳ���
//	{
//		if (arr[mid] < num)
//		{
//			left = mid + 1;//�����һ
//		}
//		else if (arr[mid] > num)
//		{
//			right = mid - 1;//�����һ
//		}
//		else
//		{
//			return mid;
//		}
//		mid = (left + right) / 2;
//	}
//	return -1;
//}

//int main()
//{
//	int num = 9;
//	int arr[] = { 1,3,4,5,6,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,sz,num);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	return 0;
//}


//ʹĳ���ּ�һ

//void Add(int* pnum)
//{
//	(*pnum)++;//++�����ȼ��ϸ�
//}

//int main()
//{
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//Ƕ�׵���

//void new_line()
//{
//	printf("hahahaha\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//		new_line();
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}


//��ʽ����

//int main()
//{
//	//int len = 0;
//	//printf("%d\n", strlen("hello world"));
//	
//	printf("%d", printf("%d", printf("%d", 43)));//��ӡ��4321��printf�ķ���ֵΪ��ӡ���ַ�����
//	
//	return 0;
//}