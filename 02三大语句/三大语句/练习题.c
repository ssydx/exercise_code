#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//�Ƚ��������ֵĴ�С

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//����ʱÿ�������Կո�ָ����ɲ���scanf("%d,%d,%d", &a, &b, &c)
//								//����ʱ����ʱҲ�����Զ��ŷָ�����������ͬ���������Ĭ����ʽ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//���1-100���ܱ�3����������

//int main()
//{
//	for (int i = 1; i < 101; i++)
//		if (0 == i % 3)
//			printf("%d ", i);
//
//	return 0;
//}


//�������ֵ����Լ����շת�������

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)//շת������������������ģ������ģ����ģ����������������Ϊ0ʱ��ģ���������Լ��
//				//��������ν��С���򣬴�����Ϊ��ģ��ʱ������С����ģ��ʱ��һ��
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//��ӡ����

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400))
//			//1�ܱ������������ܱ�100������2�ܱ�400����
//			count++;
//			printf("%d ", year);
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//��ӡ����

//int main()//�������sqrt(i)<j��int s=sqrt(i)+1
//{
//	int i = sqrt(101);//�õ�ȡ��������
//	float j = sqrt(101);//�õ��Ͼ�ȷ�ķ�����
//	printf("%d %f", i, j);//i<j
//	return 0;
//}
//int main()
//{
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j < i; j++)
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	if (i == j)//��������ʱj��Ȼ����i
//	//	{
//	//		count++;
//	//		printf("%d������\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j <= sqrt(i); j++)
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	int s = (int)sqrt(i) + 1;//s�൱���ϸ��㷨�е�i
//	//	if (s == j)
//	//	{
//	//		count++;
//	//		printf("%d������\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//
//	//int count = 0;
//	//for (int i = 100; i <= 200; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 2; j <= sqrt(i); j++)//��������Ȼ��С�ڵ��ڸ�����ƽ�������ӣ�sqrtΪ�⺯��
//	//	{
//	//		if (0 == i % j)
//	//		{
//	//			break;
//	//		}
//	//	}
//	//	if (sqrt(i) < j)//ע����⣬��������ʱj��Ȼ����sqrt(i),sqrt(i)�õ�С��j�ĸ�����
//	//	{
//	//		count++;
//	//		printf("%d������\n", i);
//	//	}
//	//}
//	//printf("%d", count);
//	return 0;
//}


//��9�ĸ���

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//�˴���Ҫ��else if��©��99ʱʮλ��9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//�������

//int main()
//{
//	double i = 0.0;
//	double sum = 0.0;//����Ϊ˫���ȸ�����
//	int flag = -1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(flag, i+1) * 1.0 / i;//���ÿ⺯����Ҳ�ɲ���flagÿ��ȡ���������
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��ʮ�������е����ֵ

//int main()
//{
//	int arr[] = { -10,2,3,-4,5,6,7,8,9,0,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];//��max����Ϊ�����е�ĳԪ�ض�����0���������֣�����max��������Ԫ�ص���������
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//��ӡ�˷��ھ���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//ȷ������
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//ȷ��һ�е��������
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//printf("%nd",para)�����е�nΪ�����ȣ������Ҷ��룬���������
//		}
//		printf("\n");//ÿ��ӡһ�к���
//	}
//	return 0;
//}



//��������Ϸ���ص���ᣩ

//ѡ��˵�

//void menu()
//{
//	printf("***************************\n");
//	printf("*****1.play    0.exit******\n");
//	printf("***************************\n");
//}

//��Ϸʵ��

//void game()
//{
//	int num = 0;
//	//time_t time(time_t *timer
//	num = rand()%100+1;//����һ������0��32767֮�����������һ��ģ100ʹ����0-99���ټ�һ�õ�1-100
//	//num����ѭ�����⣬����ÿ�β¶��ı���ֵ�������Ѳ���
//	while (1)//�²��Ծͳ���ѭ��
//	{
//		int guess = 0;
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;//�¶Ժ�����ѭ��
//		}
//	}
//	printf("%d\n", num);
//}

//�������

//int main()
//{
//	int input = 0;//������ѭ������
//	srand((unsigned int)time(NULL));//����һ�μ��ɣ���ҪƵ������
//	//rand��srand������stdlib�⺯����rand�����������������Ҫһ������
//	// �����Ӳ���Ϊ����Ĳ������ú����޲Σ���srand���ú���Ӧ��rand����֮ǰ���ã�
//	//srand��Ҫһ���޷������Ͳ������̶��Ĳ�����������ͬ���У������Ҫ��һ�����������
//	//������������ʱ�����ǿ������ת��Ϊ�޷���������
//	// ͨ������time����ʵ�֣��ú�������ϵͳ��ǰʱ�䣬�Զ�������ʽ��
//	//time������Ҫ���������������ΪNULL
//	do//��ִ�����жϣ����Ƴ��򳣲��õķ�ʽ
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);//�����ʹinput����ѭ����inputΪ0ʱֹͣѭ��������ֵ������ѭ��
//	return 0;
//}