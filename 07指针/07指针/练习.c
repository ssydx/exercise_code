#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//����
//return����һ�η�������ֵ
//�����������������飬ָ�룬����������
//����������Ƕ�׶��壬����Ƕ�׵���
//��������δ�ش��ط���ֵҲδ���в������β�ʵ�����ƿ���ͬ���������������뱻����������ͬһ�ļ�
//����������������ʹ�ã�������˵�������������������˵���������ʵ�֣�����
//ecec((v1,v2),(v2,v4),v5,v6)�ú������ĸ�����v2��v4��v5��v6�����ű��ʽ���������һ����ֵ��������
//��ϣ��������ھۣ������١�����׷����ھ۵����
//������ʹ��ȫ�ֱ���
//��������������Ҫ�����ĸ�
//�������ʱ����˭�������Դ˭�ͷ�
//�⺯����ʹ�ñ������ͷ�ļ���ʹ�������ļ��еĿ⺯��ҲҪ����ͷ�ļ�
//main��������д���κ�λ�ã�������ִ�б������������ʼ
//��ͬ�����п�ʹ����ͬ������������
//�ֲ���������ջ�ϣ����������Ĳ���
// �����ڶ���ı���ֻ�ڸú����ڲ���Ч����constֻ�ܱ�֤�䲻�ɸı䣬
// ��staticֻ�ܱ�֤�����������ӳ�������������Ȼ�Ǹú�������˺�������Ч��������
// ���⺯���ڶ���ı���Ҳδ������������Χ��Ч�����������ڵĴ�������
//�ֲ�����������Ϊ�����ڵĴ����ŷ�Χ�ڣ�����
//staic�������÷�����һ���ӳ��ֲ������������ڣ���������Ϊ���ƺ�����ȫ�ֱ�������������������ļ�������


//����������Ϊ�����ŵ�����

//int main()
//{
//	{
//		int a = 10;
//	}
//	a = a + 10;
//	return 0;
//}


//�˷��ھ���plus

//void Mult_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num = 1;
//	Mult_table(num);
//
//	return 0;
//}


//�ַ�������

//void Reverse(char arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = ' ';
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%s\n", arr);
//	Reverse(arr, sz - 1);
//	printf("%s\n", arr);
//	return 0;
//}




//�ݹ�
//�ݹ鲻�������Ƶ��ã���������
//�ݹ����������������ÿ���ú�Խ��Խ�ӽ���������


//�ݹ�ʵ���ַ�������(�ѵ㣩

//void Reverse(char* p, int len)
//{
//	
//	if (p < p+len-1)//����һͬ�����У�
//	{
//		char tmp = ' ';
//		tmp = *p;
//		*p = *(p + len-1);
//		*(p + len-1) = tmp;
//		//p++;
//		//len-=2;
//		Reverse(p+1, len-2);
//	}
//
//	//char* left = p;
//	//char* right = p + len - 1;
//	//if (left < right)
//	//{
//	//	char tmp = ' ';
//	//	tmp = *left;
//	//	*left = *right;
//	//	*right = tmp;
//	//	Reverse(p+1, len-2);
//	//}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//�ݹ�ʵ�ּ���һ�������ĸ�λ֮��

//int digit_sum(int num)
//{
//	if (num > 9)
//	{
//		return digit_sum(num / 10) + (num % 10);
//	}
//	return num;
//}
//
//int main()
//{
//	int num = 1729;
//	int ret = digit_sum(num);
//	printf("%d\n", ret);//19
//	return 0;
//}


//�ݹ�ʵ��n��k�η���ע�⸺�����Σ�

//double mypower(int n, int k)
//{
//	if (k < 0)//��Ҫ���Ǹ�������
//	{
//		return 1.0 / n * mypower(n, k + 1);
//	}
//	if (k == 0)//ע�����ֵ��ں͸�ֵ������
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * mypower(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 2;
//	int k = 0;
//	double ret = mypower(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//�ݹ�ʵ��쳲���������

//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 10;
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//����
//�����±��ɴ�С����Ӧ�ĵ�ַ�ɵ͵���

//int main()
//{
//	int arr[] = { 1,(3,4),5 };//ע�ⶺ�ű��ʽ
//	printf("%d\n", sizeof(arr));//���12
//	return 0;
//}

//��������

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<right)
//	{
//		int tmp = 0;
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//��ʼ��Ϊ0,1,2,3...
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);//��������
//	Print(arr, sz);
//	return 0;
//}

//�ȴ����齻��

//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	return 0;
//}

//����ָ���ӡ����

//void Print(int* arr[], int sz)//ʵ��1
//{
//	int* p = arr;
//	for (p=arr; p < &arr[sz];)
//	{
//		printf("%d ", *p++);
//	}
//}
//
//void Print(int* p, int sz)//ʵ��2
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *p++);
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//����ָ����ˮ�ɻ�����һ��nλ������λ����n�η�֮�;��Ǹ�����(��ô�Ż��㷨����

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
//
//	return 0;
//}





//������

//���ʽ��ֵҪ�ȿ��Ƿ������������������ת�����ٽ��м���
//���ʽ��ֵ�����ڣ�ע�������ڣ������ȼ��ٿ������
//���ʽδ�������Ψһֵ
//32λ����ָ�볤��Ϊ4byte��32bit,���ĸ��ֽڳ���ָ�룬�����ڴ��СΪ2^32
//�޷��������з���������ʱ�����޷�����


//sizeof����ֵΪ�޷������������ڵı��ʽ����Ľ��������sizeof�����С����ʵ��δ�������㣬�������Ϊ��ֵ����

//int i;//ȫ�ֱ�������ʼ��Ĭ��Ϊ0
//int main()
//{
//	i--;//-1
//	    //10000000000000000000000000000001��ԭ�룩
//	    //11111111111111111111111111111110�����룩
//	    //11111111111111111111111111111111�����룩
//		//11111111111111111111111111111111���޷�������2^32-1
//	//sizeof(i)Ϊ�޷�������4
//	if (i > sizeof(i))//sizeof()���ص�ֵΪ�޷�����
//	{
//		printf(">\n");//���>
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//���ű��ʽ���ȼ����

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++, 10;//b=7,c=7,c=8,a=7,a=8���˴���++c����b��������㵫���ḳ��b
//	b += a++ + c;//a=9,c=8,b=23
//	printf("a = %d b = %d c = %d\n", a, b, c);//9��23��8
//	return 0;
//}


//ͳ�ƶ�������1��0�ĸ���

//int count_bit_one(unsigned int a)//ͨ��ǿ������ת������û�в���������ȱ���ˣ����ұȰ�λ�����
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1)//�������ƣ������ƺ�����ְ�λ����1�������ƺ������ĩλΪ1��count��һ
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one(int a)//��1
//{
//	int count = 0;
//	while (a != 0)//��a�е�1ȫ������ȥʱ����ѭ��
//	{
//		a = a & (a - 1);//�ò���ÿ����һ�λ������ȥһ��1
//		count++;//��ȥ1�Ĵ�������1�ĸ���
//	}
//	return count;
//}
//
//int count_bit_zero(int a)//��0
//{
//	int count = 0;
//	while (a != -1)//��a�е�0ȫ����Ϊ1ʱ����ѭ��
//	{
//		a = a | (a + 1);//�ò���ÿ����һ�λ���Ұ�һ��0��Ϊ1
//		count++;//��1�Ĵ�������1�ĸ���
//	}
//	return count;
//}
//
//int main()
//{
//	int x = 15;
//	int ret = count_bit_zero(x);//ͳ�ƺ���
//	printf("%d\n", ret);
//	//system("pause");//ʹ����ֹͣ
//	return 0;
//}


//ͳ�����������������в�ͬλ�ĸ��������+ͳ��1�ĸ�����

//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int ret = count_bit_one(a ^ b);//�������ɵõ�����ͬ0��1�õ������֣�����1�ĸ������ǲ�ͬλ�ĸ�����
//	printf("%d\n", ret);//7
//	return 0;
//}


//�ֱ��ӡ�����Ƶ�����λ��ż��λ

//void print(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)//��ӡ����λ
//	{
//		printf("%d ", (n >> i) & 1);//ͬ1Ϊ1������Ϊ0�����õ�ʵ�ʸ�λ��ֵ
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)//��ӡż��λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 13;
//	print(a);
//
//	return 0;
//}


//��������ֵ������ʹ����ʱ����

//void Swap(int* x, int* y)
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d b = %d", a, b);
//
//	return 0;
//}






