#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//注意由宏不带括号造成的差别以及副作用导致的结果

//结构体位段与十六进制

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
//	pstPimData->ucPim1 = 2;	//00000010首字节
//	pstPimData->ucData0 = 3;//00000001第二字节
//	pstPimData->ucData1 = 4;//00000001第二字节
//	pstPimData->ucData2 = 5;//00101001第二字节
//	//02，29，00，00
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//按十六进制宽度为2输出且不够则高位补零
//	return 0;
//}

//共用体

//int main()
//{
//	union Un
//	{
//		short s[7];//14，对齐数为2
//		int n;//4，对齐数位4
//		//共用体大小为最大的成员大小14，但最大对齐数为4，所以实际大小为16
//	};
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}

//共用体与十六进制

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

//开辟零字节动态内存严格来说是错误的，标准未定义。内存不释放是一定对程序有影响的


//找独数!!
//0和任何数字异或都为其本身，-1和任何数字异或都为其按位取反的值

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
//	//一个独数，直接异或
//
//	//int arr[] = { 2,3,4,5,6,5,6,3,2};
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//int num = SearchSingle(arr,sz);
//	//printf("%d ", num);
//
//	//两个独数，先异或得出一个值，该值必然非0，取其任意一个比特值为1的位，按该位为1和为0分组，则将数字分为两组
//	//各包含一个独数，两组分别异或得到各自的独数
//
//	//int arr[] = { 2,3,4,5,6,5,6,3,2,1,1,7 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	////首次异或
//	//int num = SearchSingle(arr, sz);
//	////求num的首个非0比特的所在位
//	//int bit = GetFirstBitone(num);
//	////开辟两个空数组，大小都至少为 原数组大小减一，极端情况下可能分为sz-1和1两个大小的数组
//	//int* arr1 = (int*)calloc((sz - 1), sizeof(int));
//	//int* arr2 = (int*)calloc((sz - 1), sizeof(int));
//	//if (!arr1 || !arr2)
//	//{
//	//	return 0;
//	//}
//	////数据分组
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
//	////求两个数组各自的独数
//	//int num1 = SearchSingle(arr1, sz - 1);
//	//int num2 = SearchSingle(arr2, sz - 1);
//	////释放内存
//	//free(arr1);
//	//arr1 = NULL;
//	//free(arr2);
//	//arr2 = NULL;
//	////打印
//	//printf("%d %d\n", num1, num2);
//
//	return 0;
//}
