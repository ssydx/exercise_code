#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//ע���ɺ겻��������ɵĲ���Լ������õ��µĽ��

//�ṹ��λ����ʮ������

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0:1;
//		unsigned char ucData1:2;
//		unsigned char ucData2:3;
//	}*pstPimData;
//	pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;	//00000010���ֽ�
//	pstPimData->ucData0 = 3;//00000001�ڶ��ֽ�
//	pstPimData->ucData1 = 4;//00000001�ڶ��ֽ�
//	pstPimData->ucData2 = 5;//00101001�ڶ��ֽ�
//	//02��29��00��00
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//��ʮ�����ƿ��Ϊ2����Ҳ������λ����
//	return 0;
//}

//������

//int main()
//{
//	union Un
//	{
//		short s[7];//14��������Ϊ2
//		int n;//4��������λ4
//		//�������СΪ���ĳ�Ա��С14������������Ϊ4������ʵ�ʴ�СΪ16
//	};
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}

//��������ʮ������

//int main()
//{
//	typedef union
//	{
//		short k;
//		char i[2];
//	}U;
//	U a;
//	U* s = &a;
//	s->i[0] = 0x39;//39
//	s->i[1] = 0x38;//38
//	//3938
//	//3839
//	printf("%x\n", a.k);//3839
//	return 0;
//}

//�������ֽڶ�̬�ڴ��ϸ���˵�Ǵ���ģ���׼δ���塣�ڴ治�ͷ���һ���Գ�����Ӱ���


//�Ҷ���!!
//0���κ��������Ϊ�䱾��-1���κ��������Ϊ�䰴λȡ����ֵ

//int SearchSingle(const int* arr, int sz)
//{
//	assert(arr);
//	int snum = 0;
//	while (sz--)
//	{
//		snum ^= arr[sz];
//	}
//	return snum;
//}
//
//int GetFirstBitone(const int n)
//{
//	assert(n);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n>>i) % 2 == 1)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//һ��������ֱ�����
//
//	//int arr[] = { 2,3,4,5,6,5,6,3,2};
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//int num = SearchSingle(arr,sz);
//	//printf("%d ", num);
//
//	//���������������ó�һ��ֵ����ֵ��Ȼ��0��ȡ������һ������ֵΪ1��λ������λΪ1��Ϊ0���飬�����ַ�Ϊ����
//	//������һ������������ֱ����õ����ԵĶ���
//
//	//int arr[] = { 2,3,4,5,6,5,6,3,2,1,1,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////�״����
//	//int num = SearchSingle(arr, sz);
//	////��num���׸���0���ص�����λ
//	//int bit = GetFirstBitone(num);
//	////�������������飬��С������Ϊ ԭ�����С��һ����������¿��ܷ�Ϊsz-1��1������С������
//	//int* arr1 = (int*)calloc((sz - 1), sizeof(int));
//	//int* arr2 = (int*)calloc((sz - 1), sizeof(int));
//	//if (!arr1 || !arr2)
//	//{
//	//	return 0;
//	//}
//	////���ݷ���
//	//int i = 0;
//	//int j = 0;
//	//int k = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if ((arr[i] >> bit)%2 == 1)
//	//	{
//	//		arr1[j] = arr[i];
//	//		j++;
//	//	}
//	//	else
//	//	{
//	//		arr2[k] = arr[i];
//	//		k++;
//	//	}
//	//}
//	////������������ԵĶ���
//	//int num1 = SearchSingle(arr1, sz - 1);
//	//int num2 = SearchSingle(arr2, sz - 1);
//	////�ͷ��ڴ�
//	//free(arr1);
//	//arr1 = NULL;
//	//free(arr2);
//	//arr2 = NULL;
//	////��ӡ
//	//printf("%d %d\n", num1, num2);
//
//	return 0;
//}
