#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//��̬�ڴ�����ڶ���ʹ���ڴ�,malloc,realloc,calloc,free

//typedef struct
//{
//	char name[20];
//	int age;
//}S;//�����ṹ�����������
//
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	//S s[n];
//	S s[50];//C99��׼�Ѿ�֧�ֱ䳤���飬���ܶ����������֧�֣�����VS
//	return 0;
//}

//malloc������ΪҪ���ٵ��ֽ���������ֵΪָ�������ٿռ����ֽڵ�ָ�룬����ʧ�ܷ��ؿ�ָ��
//ͨ��Ҫ��ָ��ǿ��ת��Ϊ��������
//free�����ͷſ��ٵĿռ䣬������ָ��

//int main()
//{
//	//�����ڴ�ռ�
//	int* p = (int*)malloc(10 * sizeof(int));//�����ֽڲ�Ҫ����0�ֽڣ�0�ֽ��Ǳ�׼δ����
//	//p = (int*)malloc(INT_MAX * sizeof(int));INT_MAX������������ֵ�����ٻ�ʧ��
//	if (!p)
//		//ʧ�ܷ��ش���ԭ��
//		printf("%s\n", strerror(errno));
//	else
//	{
//		printf("���ٳɹ�\n");
//		//ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			p[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	//������ͷţ������ڴ�й©����Ҫ�ͷŷǶ�̬�ڴ濪�ٵĿռ��ָ��
//	free(p);
//	//��ָ����Ϊ��ָ�룬��������
//	p = NULL;
//	return 0;
//}

//calloc����malloc����������Ὣ���ٵ��ڴ��ÿ���ֽڶ���ʼ��Ϊ0
//����������һ���ǿ��ٵ�λ��һ���Ǹ���
//����Ҫ��ʼ��Ϊ0ʱʹ�ã�Ч�ʵ���malloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc�������ٷ��䣬ʧ��ͬ�����ؿ�ָ��
//һ��������֮ǰ��������ά����ָ��(���Դ����ָ��,��ʱ�൱��malloc)
//��һ������Ҫ�����ֽ����������ϴο��ٵĿռ䣩
//����ԭ��������ǰ�ռ�����㹻�Ŀռ���ӵ�ǰλ����չ�����ص�ָ����Ȼ��ԭ���ĵ�ַ
//����ǰ�ռ�����㹻�ռ䣬������λ�ÿ��ٿռ�(ԭ�ռ��Զ����ͷ�)����ԭ���ݿ�����ȥ������ָ���¿ռ��ָ��
//Ϊ�����ָ��ά����Ӧʹ��ԭָ����շ���ֵ
//�����ڴ��ڿ���ʧ�ܣ���ʹԭָ��ΪNULL����ԭ���ݶ�ʧ���ķ��գ�������һ����ʱָ��

//int main(void)
//{
//	int* p = (int*)malloc(20);
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i;
//	}
//	//��ʱָ����������µ�ַ
//	int* ptr = (int*)realloc(p, 4000);//pָ����ܸı䣬Ҳ���ܲ��ı䣬ȡ�����ѿ��ٿռ���Ƿ����㹻��Ŀռ�
//	//����ʱָ�벻Ϊ������ԭָ��ָ����¿ռ�
//	if (ptr)
//	{
//		p = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			p[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	//�ͷ��¿ռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//��������
//1û�жԿ����ڴ�󷵻ص�ָ������飨malloc/calloc realloc��
//2Խ����ʣ���̬����Ŀռ�Ҫ����ע��Խ����ʣ�
//3�ͷŷǶ�̬���ٿռ��ָ��
//4�޸���ά���õ�ָ��(����ʹ��ǰ�ú���++/--),�ͷŵĿռ��Ѳ���ԭ�ռ�
//5��ͬһ��ռ����ͷ�,һ���򵥵ķ�����ÿ���ͷŶ���ָ����Ϊ��ָ��
//6�ڴ�й©,���ٿռ䵫���ͷ�
//�������,����Խ��,��ָ֤�벻��,�ͷŶ�̬�ڴ�,ָ����ΪNULL   ˭����˭�ͷ�!!!

//int main()
//{
//	//Խ�����
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	p[i] = i;
//	//}
//	//free(p);
//	//p = NULL;
//	
//	//�޸�ά��ָ��
//	//int* p = (int*)malloc(40);
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//free(p);
//	//p = NULL;
//	
//	//����ͷ�
//	//int* p = (int*)malloc(40);
//	//if (!p)
//	//	return 0;
//	//free(p);
//	//free(p);
//
//	//����ͷŵĴ�����
//	//int* p = (int*)malloc(40);
//	//if (!p)
//	//	return 0;
//	//free(p);
//	//p = NULL;
//	//free(p);//free��ָ�벻�ᱨ��
//
//	//�ڴ�й©
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//	return 0;
//}



//��ϰ

//��ָ���ֵ

//Դ����
//void GetMemory(char* p)//���η�ʽ����
//{
//	p = (char*)malloc(100);//δ���ָ��,δ�ͷſռ�
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str��Ȼ�ǿ�ָ��
//	printf(str);//����д���ǿ��Ե�
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//�޸�1
//void GetMemory(char** p)
//{
//	char* ptr = (char*)malloc(100);
//	if (ptr)
//		*p = ptr;
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//�޸�2
//char* GetMemory(void)
//{
//	char* ptr = (char*)malloc(100);
//	if (ptr)
//		return ptr;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//����ջ�ռ��ַ,�Ƿ�����

//Դ����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//�Ƿ�����,����ջ�ռ��ַ�Ǵ����
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�1
//char* GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//��̬���ɷ���
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�2
//char* GetMemory(void)
//{
//	char str[] = "hello world";
//	char* p = (char*)malloc(20);
//	if (p)
//	{
//		strcpy(p, str);
//		return p;
//	}
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//��̬���ɷ���
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�ڴ�й©

//Դ����
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�ڴ�й©
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//�޸ĺ�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//�������ͷſռ�,�Ƿ�����

//Դ����
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//�����ѱ��ͷŵĿռ�
//	if (str)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main(void)
//{
//	Test();
//	return 0;
//}

//�޸ĺ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main(void)
//{
//	Test();
//	return 0;
//} 