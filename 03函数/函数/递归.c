#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


//ջ������žֲ������ͺ����β�
//��������Ŷ�̬���ٵ��ڴ棬malloc,calloc
//��̬�������ȫ�ֱ�����static���εı���


//�ݹ����Ҫ˼���Ǵ��»�С������ԭ���⻯Ϊ��ԭ������ͬ����ģ��С������
//�ݹ��Ǻ�����������
//�ݹ鳣����ջ����Ĵ��󣬲����ڴ��ģʹ��

//int main()
//{
//	printf("haha\n");
//	main();//����������ջ������ռ䣬ջ���ڴ�ľ������ջ���
//	return 0;
//}


//��λ���һ���޷�����������

//void print(int n)
//{
//	if (n > 9)//�ݹ��������ֹ����
//	{
//		print(n/10);//�ݹ��������ִ������Ĵ��룬ÿ�ε��ö�Խ��Խ�ӽ���ֹ����
//	}
//	printf("%d ", n%10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	//print(123),4
//	//print(12),3,4
//	//print(1),2,3,4
//	return 0;
//}



//��������ʱ�������ַ�������

//int length(char* str)
//{
//	if (*str != '\0')//�ַ���ֱ�ӱȽ�
//	{
//		return length(str + 1) + 1;//strΪ����ָ�룬�ƶ�ָ�����ַ�ı䣬ָ���Ԫ��Ҳ�ı�
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	int ret = 0;
//	ret = length(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//�׳�

//1�ݹ鷨

//int fac(int num)
//{
//	if (num > 1)
//	{
//		return fac(num - 1) * num;
//	}
//	return 1;
//
//}

//int main()
//{
//	int i = 10;
//	long ret = fac(i);
//	printf("%ld", ret);
//	return 0;
//}

//2ѭ����

//int fac(int num)
//{
//	int fac = 1;
//	while (num)
//	{
//		fac *= num;
//		num--;
//	}
//	return fac;
//}

//int main()
//{
//	int i = 10;
//	int ret = 0;
//	ret = fac(i);
//	printf("%d\n", ret);
//	return 0;
//}



//쳲���������

//1�ݹ鷨

//int count = 0;
//int fib(int num)
//{
//	if (num == 3)//fac(3)�Ĵ������Ǹ��Ӵ������
//	{
//		count++;
//	}
//	if (num == 1 || num == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(num - 1) + fib(num - 2);
//	}
//}

//int main()
//{
//	int i = 40;//�����ֽϴ�ʱʱ���ܳ�����ʱ�临�Ӷȸߣ�ָ����
//	int ret = 0;
//	ret = fib(i);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}

//2ѭ����

//int fib(int count)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	while (count - 3)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		count--;
//	}
//	return c;
//}

//int main()
//{
//
//	int count = 1000;
//	int ret = 0;
//	ret = fib(count);
//	printf("%d\n", ret);
//	return 0;
//}



//��ŵ������2^n-1 

//int i = 0;//������ʡ�ԣ�ֱ�ӽ��д�ӡ
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);//��A�ϵ�һ���Ƶ�C
//	i++;
//}

//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		//move(a, c);//��A�ϵ�һ���Ƶ�C
//		printf("%c->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//�������n-1���Ƶ�B
//		//move(a, c);           //��A�ϵ����һ���Ƶ�C
//		printf("%c->%c\n", a, c);
//		hanoi(n - 1, b, a, c);//��B�ϵ�n-1���Ƶ�C
//	}
//}

//int main()
//{
//	int count = 3;
//	hanoi(count, 'A', 'B', 'C');
//	//printf("%d\n", i);
//	return 0;
//}



//������̨�ף�쳲������ı��Σ�

//int skip(int num)//������һ�׻�����
//{
//	if (num == 1)
//	{
//		return num;
//	}
//	else if (num == 2)
//	{
//		return num;
//	}
//	else
//	{
//		return skip(num - 1) + skip(num - 2);//��������n��̨�׾���
//											 //����n-1��̨�׻����϶�����һ�ף�+����n-1��̨�׻����϶��������ף�
//	}
//}

//int skip(int num)//������һ������
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	else if (num == 2)
//	{
//		return 2;
//	}
//	else if (num == 3)
//	{
//		return 4;
//	}
//	else
//	{
//		return skip(num - 1) + skip(num - 2) + skip(num - 3);//ͬ��Ϊn-1,n-2,n-3�����ϸ���1,2,3��
//	}
//}

//int main()
//{
//	int i = 4;
//	int ret = skip(i);
//	printf("%d\n", ret);
//	return 0;
//}



//������̨��������

//int skip(int num,int pace)//������1-n��
//{
//	int sum = 0;
//	int i = 0;
//	if (num <= pace)//��̨����С�ڵ�������ʱ
//	{
//		return pow(2, num - 1);//����������2^(num-1)
//	}
//	if (num > pace)//��̨������������ʱ
//	{
//		for (i = 1; i <= pace; i++)
//		{
//			num--;
//			sum += skip(num, pace);//������=num-1,num-2...num-pace
//		}
//		return sum;//����sum��ֵ��sum�ݹ����skip
//				   //��skip��ֵ(��Ȼ������sum��ʽ�������տ�ת��Ϊskip��ֵ)���ظ�sum
//	}
//}


//int main()
//{
//	int num = 5;//̨����
//	int pace = 3;//һ��������̨����
//	int ret = skip(num,pace);//��������
//	printf("%d\n", ret);
//	return 0;
//	//��5��3Ϊ��,skip(3)����4��skip(2)����2,skip(1)����1
//	//���ú�����õ�sum=skip(4)+skip(3)+skip(2)
//	//skip(4)��һ������sum=skip(3)+skip(2)+skip(1)
//	//��sum=skip(3)+skip(2)+skip(1)+skip(3)+skip(2)=4+2+1+4+2=13
//}