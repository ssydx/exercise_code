#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



//һ���򵥵ļӷ�����

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//�⺯��

//�Ѿ�ʹ�ù���
//stdio.h    include printf scanf
//stdlib.h   include system
//math.h     include pow sqrt
//string.h   inclue strcpy strcmp strlen memset
//time.h     include  time

//strcpy and printf

//int main()
//{
//	char arr1[] = "world";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);//strcpy�Ὣ\0һͬ������ȥ
//	printf("%s\n", arr2);//printf����\0ֹͣ��ӡ����������ֻ��world��û��ʣ���#
//	return 0;
//}

//memset

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//�׸�����Ϊָ��ptr������������ʱ����Ǹ��������Ԫ�أ��±�Ϊ0�����ڴ��ַ��
//						//�ڶ�������ΪҪ���õ�ֵvalue������ʹ���ַ����Զ�ת��Ϊ��Ӧ��ASCII��ֵ��
//						// ����������Ϊ��ֵ���ֵĸ���num
//						//������ptr��ָ�����num���ڴ�飨һ���ڴ��Ϊһ���ֽڣ�����Ϊvalue
//	printf("%s", arr);
//	return 0;
//}