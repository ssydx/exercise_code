#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//ָ����ԱȽϴ�С��������������������
//���鴴��ʱҪָ����С��ֱ�ӳ�ʼ��ʱ����Ҫָ��
//�ṹ�����ʱ�õ��Ĳ������У�. -> *

//int main()
//{
//	unsigned long pularr[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pularr;
//	*(pulptr + 3) += 3;//pularr[3]=9+3=12
//	printf("%d %d\n", *pulptr, *(pulptr + 3));//6,12
//
//	return 0;
//}



//�ַ�������

//char* reverse(char* const pc, const int sz)//����������ʽ�����ʻ���ָ��
//{
//	assert(pc);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = pc[left];
//		pc[left] = pc[right];
//		pc[right] = tmp;
//		left++;
//		right--;
//	}
//	return pc;
//}
//
////char* reverse(char* pc, int sz)//ָ����ʽ
////{
////	assert(pc);
////	char* left = pc;//��Ԫ�ص�ַ
////	char* right = pc + sz - 1;//���һ��Ԫ�ص�ַ
////	while (left<right)
////	{
////		char tmp = *left;
////		*left=*right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////	return pc;
////}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//scanf�����ո������ݲ���¼��
//	gets(arr);//����һ��
//	printf("%s\n", reverse(arr, strlen(arr)));
//	return 0;
//}


//��a+aa+aaa+...

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int num = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += num;
//		num = num * 10 + a;
//	}
//	printf("%d", sum);
//	return 0;
//}



//������

//int digit(int i)//��λ��
//{
//	int count = 1;
//	while (i /= 10)
//	{
//		count++;
//	}
//	return count;
//}
//
//int is_nar(int i)//�ж�
//{
//	int sum = 0;
//	int expo = digit(i);
//	int tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, expo);
//		tmp /= 10;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//   return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000000; i++)
//	{
//		if (is_nar(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//��ӡ����

//void printpattern(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)//�ϰ벿��
//	{
//		int tmp = i;
//		while (n - tmp)
//		{
//			printf(" ");
//			tmp++;
//		}
//		tmp = 2 * i - 1;
//		while (tmp)
//		{
//			printf("*");
//			tmp--;
//		}
//		//tmp = i;
//		//while (n - tmp)
//		//{
//		//	printf(" ");
//		//	tmp++;
//		//}
//		printf("\n");
//	}
//	for (i = n-1; i > 0; i--)//�°벿��
//	{
//		int tmp = i;
//		while (n - tmp)
//		{
//			printf(" ");
//			tmp++;
//		}
//		tmp = 2 * i - 1;
//		while (tmp)
//		{
//			printf("*");
//			tmp--;
//		}
//		//tmp = i;
//		//while (n - tmp)
//		//{
//		//	printf(" ");
//		//	tmp++;
//		//}
//		printf("\n");
//	}
//}

//void printpattern(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n-1; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//�ϰ벿�ֵ�����
//	printpattern(n);
//
//	return 0;
//}



//struct s
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct s a, * p = &a;
//	a.a = 99;
//	printf("%d\n", (*p).a);
//	printf("%d\n", p->a);
//	printf("%d\n", a.a);
//	//printf("%d\n",*p.a);����д��
//	return 0;
//}



//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);
//	//���wang
//	return 0;
//}


//����ˮ��һƿ��ˮһԪ��������ƿ�ɻ�һƿ��ˮ��20Ԫ�ɺȼ�ƿ������

//int main()
//{
//	int money = 20;
//	int empty = 0;
//	int total = 0;
//	empty = money;
//	total = money;
//	while (empty > 1)
//	{
//		total += empty / 2;//�ȵ�����ˮ����֮ǰ�ȵļ���λ���
//		empty = empty / 2 + empty % 2;//��λ�����ˮ�����Ŀ�ƿ��û�л���
//	}
//	printf("%d\n", total);
//	printf("%d\n", drink(money));
//	return 0;
//}


//��������ʹ����λ��ǰ����ż��λ�ں�

//void just(int* arr,int sz)//ÿ������ʹ��βһ������Ҫ��
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < sz / 2; i++)//�����һ����
//	{
//		for (j = i; j < sz - 1 - i; j++)//ÿ��Ҫ������Ԫ�ؼ�2
//		{
//			if ((arr[j] % 2 == 0) && (arr[j + 1] % 2 != 0))//���ǰż�����򽻻�
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)//ĳ��δ�������˳�ѭ��
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 2,4,7,34,76,1,6,87,90,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	just(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���ݴ洢
//��С��ָ�����ֽ�˳��
//��˸ߵ�ַ�ŵ�λ��С�˸ߵ�ַ�Ÿ�λ��Ĭ�ϴ���λΪ��ַ����
//0x11223344:���11223344��С��44332211



//�����Σ�����
//A˵B�ڶ�A������B˵B�ڶ�E���ġ�C˵C��һD�ڶ���D˵C����D������E˵E����A��һ�����ÿ�˶�һ�룬ȷ������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) +
//							(d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((a == 1) + (e == 4) == 1))
//						{
//							if(a*b*c*d*e==120)//�ò���ز����٣���Ȼ���ܳ���ͬ����
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//������
//A˵����A��B˵��C��C˵��D��D˵C˵�ѡ�����������˵�滰��һ��˵�ѣ���˭������

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c", killer);//c
//		}
//	}
//}

//��������
//����ʮ��ƥ������������ȷ��ǰ������Ҫ�ȼ��Σ��ٶ�25ƥ5���ܵ��أ�
//��Ҫ�Ȱ˴Σ���Ϊ���飬�ֱ����������ÿ���һ����Ȼ���ÿ���һ���ٱ�����ȷ��������
//ȡ��һ����������ǰ�������ڶ�����������ǰ������������ȡ���Լ��������ƥ�����õ����յ�ǰ����

//��������
//һ���Ǿ��ʵ����ȼ��һ��Сʱ�����������㣬�������ǵõ���׼��ʮ�����
//��ȼA������ͬʱ��ȼB��һ�ˣ���Aȼ�����ʱʱ���ȥ���Сʱ����ʱ��ȼB����һ�ˣ���Bȼ�����ʱʱ���ֹ�ȥʮ�����
//���õ�ʮ����ӵľ�׼ʱ��

//����Ӧ�ŵ�����ָ���У���Ӧ�÷ŵ�����ָ����



//int (* (*fun)(int, int) )(int);//����һ������ָ�룬ָ��ָ�������������int�β�
								 //����һ��ָ�루ָ��ָ��һ����һ��int�β��ҷ���ֵΪint�ĺ�����
//int(*(*p)[10])(int*);//����һ��ָ�룬ָ��ָ����ʮ��Ԫ�ص����飬Ԫ������ΪΪָ������ָ�루ָ���β�int*������ֵint�ĺ�����




//�����ַ���

//������ⷨ

//char* rotate_str(char* const arr, int n,const int mode)
//{
//	//�ж�ָ��ǿ�
//	assert(arr);
//	//���ַ������ȣ�������\0
//	int sz = 0;
//	while (arr[sz])
//	{
//		sz++;
//	}
//	//����ģʽ
//	if (mode == 1)
//	{
//		while (n)//����Ԫ�صĸ���
//		{
//			char tmp = arr[0];//ȡ���ײ�Ԫ��
//			int i = 0;
//			while (i < sz - 1)//ÿ���ƶ�sz-1��
//			{
//				arr[i] = arr[i + 1];//����Ԫ��
//				i++;
//			}
//			arr[sz - 1] = tmp;//ָ��ͣ�������һ��Ԫ�ص�ַ
//			n--;
//		}
//	}
//	//����ģʽ
//	else if (mode == 2)
//	{
//		while (n)//����Ԫ�صĸ���
//		{
//			char tmp = arr[sz - 1];//ȡ��ĩβԪ��
//			int i = sz - 1;
//			while (i > 0)//ÿ���ƶ�sz-1��
//			{
//				arr[i] = arr[i - 1];//����Ԫ��
//				i--;
//			}
//			arr[0] = tmp;
//			n--;
//		}
//	}
//	//��ָ��ģʽ
//	else
//	{
//		printf("ģʽѡ�����\n");
//	}
//	return arr;//�����ַ�����ʼ��ַ
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int n = 3;
//	printf("%s\n", rotate_str(arr, n, 1));
//
//	return 0;
//}

//������ת��

//void reverse(char* arr, int count)//�����ַ���
//{
//	int left = 0;
//	int right = count - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//char* rotate_str(char* const arr, int n, int mode)
//{
//	//�ж�ָ��ǿ�
//	assert(arr);
//	//���ַ������ȣ�������\0
//	int sz = 0;
//	while (arr[sz])
//	{
//		sz++;
//	}
//	//����
//	if (mode == 1)
//	{
//		reverse(&arr[0],n);//������ǰ�벿��
//		reverse(&arr[n],sz - n);//�������벿��
//		reverse(&arr[0], sz);//��������
//	}
//	//����
//	else if (mode == 2)//����n������������sz-n
//	{
//		reverse(&arr[0], sz - n);
//		reverse(&arr[sz - n], n);
//		reverse(&arr[0], sz);
//	}
//	//����
//	else
//	{
//		printf("ģʽѡ�����\n");
//	}
//	return arr;//������ʼ��ַ
//}

//int main()
//{
//	char arr[] = "abcdefgh";
//	printf("%s\n", rotate_str(arr, 3, 1));
//	return 0;
//}

//�ж��Ƿ���ת�õ�

//��ٷ�

//int check_rotate_str(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (arr1[i])
//	{
//		if (!strcmp(arr1, rotate_str(arr2, 1, 1)))//�ж�arr1��arr2��ת1,2...���ַ����Ƿ����
//												  //����ÿ����ת��ԭ�ַ������ı䣬���ÿ����תһ��
//												  //������ʹ��i��ʹ��i�൱����ת0,1,3,6,10
//		{
//			return 1;
//		}
//		printf("%s\n",arr2);
//		i++;
//	}
//	return 0;
//}

//׷���ַ�����

//int check_rotate_str(char* arr1, char* arr2)
//{
//	//��arr1��׷���䱾��
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	//�ַ������Ȳ�ͬһ��������ת�����ģ�ͬʱ�������ִ����ܲ���������
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1,len1);
//	//�ж�arr2�Ƿ�Ϊarr1���Ӵ�
//	if (strstr(arr1, arr2)==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "aabcd";
//	char arr2[] = "abcd";
//	if (check_rotate_str(arr1, arr2))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//�������Ͼ���

//int young_matrix(int arr[3][3], int num,int* px,int* py)//���ø��Խ��߲��ҷ�
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y>-1)
//	{
//		if (arr[x][y] > num)
//		{
//			y--;
//		}
//		else if (arr[x][y] < num)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;//���ҵ������긳������x,y
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int ret = young_matrix(arr, 5, &x, &y);//���ô�ַ�ı��ⲿx,y
//	if (ret)
//	{
//		printf("����Ϊ��%d %d \n", x, y);
//	}
//	else
//	{
//		printf("δ�ҵ�\n");
//	}
//
//	return 0;
//}


//�����������޷�����

//int main()
//{
//	unsigned char a = 200;
//	//200��00000000000000000000000011001000
//	//a �� 11001000
//	unsigned char b = 100;
//	//100��00000000000000000000000001100100
//	//b �� 01100100
//	unsigned char c;
//	c = a + b;
//	//a+b��������(�޷�����ֱ�Ӹ�λ����)����ӡ�000000000000000000000000100101100��300��
//	//c �� 00101100
//	//��ӡʱc������������ ��00000000000000000000000000101100��44��
//	printf("%d %d\n", a+b, c);
//
//	return 0;
//}

//�ֽ���洢ģʽ

//int main()
//{
//	//�ٶ����
//	unsigned int a = 0x1234;//00 00 12 34
//	unsigned char b = *(unsigned char*)&a;//00
//	//b����ʮ�����Ƶ�00
//	return 0;
//}

//�������

//void print_yanghui(void)
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if(i>1 && j>0 && j<i)
//			{
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
