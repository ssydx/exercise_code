#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>


//whileѭ��������һЩȱ�ݣ��Ƽ�forѭ��

//int main()
//{
//	//while (1)//������ѭ��
//	//	printf("hehe\n");
//
//	//int i = 1;
//	//while (i < 11)
//	//{
//	//	if (5 == i)//��i=5ʱ��������ǰѭ��
//	//		break;
//	//	if (4 == i)
//	//		continue;//��i=4ʱ����������ѭ������������ѭ��
//	//	//�����޷���������Ϊi��������ʼ�ձ���Ϊ4��������ѭ��
//	//	printf("%d ", i);//��ӡ��1-3
//	//	i++;
//	//}
//
//	//int i = 0;
//	//while (i < 11)
//	//{
//	//	i++;
//	//	if (6 == i)//��i=5ʱ��������ǰѭ��
//	//		break;
//	//	if (4 == i)
//	//		continue;//��i=4ʱ����������ѭ������������ѭ��
//	//	printf("%d ", i);//��ӡ��1-3��5
//	//}
//
//	//int ch = getchar();//���һ���ַ�
//	//putchar(ch);//���ch�洢���ַ�
//	//printf("%c\n", ch);//ͬ��
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl+z��ʾEOF����������ѭ��
//	//{
//	//	putchar(ch);
//	//}
//
//	//int ret = 0;
//	//char password[20] = { 0 };
//	//printf("please enter your password:>");
//	//scanf("%s", password);//�������룬�س�ȷ��(\n)��ȡ�����룬��������\n
//	//printf("please verify your password(Y/N):>");
//	//ret = getchar();//ֱ�Ӷ���\n������ret!="Y"
//	//if (ret == "Y")//˫����Ӧ�ĳɵ�����
//	//{
//	//	printf("sucessful\n");
//	//}
//	//else
//	//{
//	//	printf("quit\n");
//	//}
//
//	//int ret = 0;
//	//char password[20] = { 0 };
//	//int ch = 0;
//	//printf("please enter your password:>");
//	//scanf("%s", password);//�������룬�س�ȷ��(\n)��ȡ�����룬��������\n
//	//while ((ch = getchar()) != '\n')//δ����\nǰһֱ��ȡ��ֱ���ѻ���������
//	//{
//	//	getchar();
//	//}
//	//printf("please verify your password(Y/N):>");
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("sucessful\n");
//	//}
//	//else
//	//{
//	//	printf("quit\n");
//	//}
//
//	//int ch;
//	//while ((ch = getchar()) != EOF)//getcharҲ��\n��Ϊ��������ı�־���ڻس�ǰ�ɳ������룬����ֵΪ����
//	//{
//	//	if (ch < '0' || ch > '9')
//	//		continue;
//	//	putchar(ch);//һֱ��ȡ��������Ϊ���ٽ����´�ѭ��
//	//}
//
//
//	return 0;
//}



//forѭ��

//int main()//��Ҫ��ѭ�������޸ĵ�������
//{
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//�Էֺŷָ�����һ���ǳ�ʼ�����ڶ������ж��������������ǵ���
//	//	printf("%d ", i);
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//������Ҫ��for������������Ʊ���
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//}
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//��while��ͬ��������������ѭ��
//	//{
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d ", i);
//	//}
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)
//	//{
//	//	if (i = 5)//��ֵ������ѭ��
//	//		printf("haha\n");
//	//	printf("hehe\n");
//	//}
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//for (i = 0; i < 10; i++)//�����������ҿ����䣬���ڿ���ѭ������
//	//	printf("%d ", arr[i]);
//
//	//for (;;)//�������ֶ���ʡ�ԣ�����������ѭ�����ж�����Ĭ��Ϊ�棩����Ҫ����ʡ��ĳ����
//	//	printf("haha\n");
//
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)//����j�ĳ�ʼ������࣬����ѭ��j��Ϊ10��������Ϊ0�������ڲ�ѭ�����ڵ�һ�ִ�ӡ
//	//		printf("haha\n");
//	//}
//
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//֧�ֶ����
//	//{
//	//	printf("haha\n");
//	//}
//
//	//int i = 1;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)//��ѭ������Ϊ�ж�������ʼ��Ϊ�٣�k��ֵΪ��0��
//	//	k++;
//
//	return 0;
//}



//do whileѭ��

//int main()
//{
//	//int i = 1;
//	//do//��ִ��һ�����жϣ��õ���
//	//{
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)//���1-4
//	//		break;
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)//���1-4��ͬ����ѭ��
//	//		continue;
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//
//	return 0;
//}




//С��ϰ


//����n�Ľ׳�

//int main()
//{
//	int n = 1;
//	int fac = 1;
//	while (n < 11)
//	{
//		fac = fac * n;
//		n++;
//	}
//	printf("%d", fac);
//	return 0;
//}


//����1-10�Ľ׳�֮�ͣ�ע�⣩

//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	int i = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			ret = ret * n;//ret�����ۻ������ϴε���������������㣬�Ӷ���ɴ���
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	int i = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = 1;//�����򲻻����
//		for (n = 1; n <= i; n++)
//		{
//			ret = ret * n;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	int i = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		while (n <= i)
//		{
//			ret = ret * n;//������ɴ���Ϊʲô��
//			n++;          //��ΪnҲδ���ã�ÿ�ζ�����ԭ������n���ڲ���״����ѭ��һ�Σ����������������㣬���Ӹ�Ч
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)//��ǰһ��д��Ч����ͬ������������
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//�����������в���ĳԪ�ص�λ�ã��ص㣩

//int main()//˳����ң�Ч�ʵ��£�O(n)
//{
//	int arr[] = { 1,2,4,5,7,9,14,15,16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int f = 15;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == f)
//		{
//			printf("%d\n", i);
//			break;//���ҵ�������ѭ��
//		}
//	}
//	if (i == sz)
//		printf("not found");
//	return 0;
//}

//int main()//�۰���ң���Ҫ�㷨��O(log2(n))
//{
//	int arr[] = { 1,2,4,5,7,9,14,15,16,17 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int f = 12;
//	int left = 0, right = sz-1;//Ԫ�ظ�����һ
//	while (left <= right)//ע���ж�����
//	{
//		int mid = (right + left) / 2;//д���ڲ�
//		if (arr[mid] > f)
//			right = mid-1;//�����һ
//		else if (arr[mid] < f)
//			left = mid+1;//�����һ
//		else
//		{
//			printf("found:%d", mid);
//			break;//����
//		}
//	}
//	if (left > right)
//		printf("not found");
//	return 0;
//}


//�ַ������������м���

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "***********";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr2[0]) - 2;//��������Ϊ�ַ��������һ��\n
//	int right1 = strlen(arr1) - 1;//�˷�������
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ�룬�⺯����ͷ�ļ�Ϊ<windows.h>
//		system("cls");//�����Ļ���⺯����ͷ�ļ�Ϊ<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//�������һ�α����������Բ�����
//	return 0;
//}


//��������

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)//�ַ�������ֱ�ӱȽϣ�Ҫ���ÿ⺯��
//		{                                   //��ͬ����0��ǰ���ں��򷵻����������򷵻ظ���
//			printf("������ȷ");
//			break;
//		}
//	}
//	if (3 == i)
//		printf("���ξ�����");
//	return 0;
//}