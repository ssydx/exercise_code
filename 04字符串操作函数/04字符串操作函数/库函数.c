#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>
#include <ctype.h>

//�󳤶�strlen
//���Ȳ������Ƶ��ַ�������strcpy(����ȫ) strcat(����ȫ) strcmp
//�������޵��ַ�������strncpy strncat strncmp
//�ַ�������strstr strtok
//������Ϣ����strerror
//�ַ����ຯ�����ַ�ת������
//�ڴ��������memcpy memmove memset memcmp



//strlen��û����\0��++������ֵΪ�޷������ͣ�size_t����ע��strlen�ķ���ֵ������Ӽ����㶼Ϊ�Ǹ���

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n",len);//6
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len1 = strlen(arr);
//	printf("%d\n", len1);//δ֪
//
//	if (strlen("abc") - strlen("abcd") > 0)
//	{
//		printf("haha\n");//���haha
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//strcpy�������ߵ��ַ�����ǰ���а���\0������ֵΪǰ�ߵ���ʼ��ַ
//Դ�ַ����������\0��Ŀ���ַ��������㹻��Ŀ��ǳ����ַ���(���������ַ������ַ���ַ����ָ�����)

//int main()
//{
//	//����ʹ��
//	//char* p = "abcdefg";
//	//����ʹ��
//	//char arr[] = { 'w','o','r','l','d' };
//	char arr1[] = "abcdefgh";
//	char arr2[] = "world";
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}

//strcat������Ŀ���ַ�������ʼ��ַ��������׷��
//�����߿�����ǰ���У���Ŀ���ַ�����\0��ʼ��Դ�ַ���\0������Ŀ��ռ�Ҫ�㹻���ҷǳ����ַ���

//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = "world";
//	printf("%s\n", strcat(arr1,arr2));
//	return 0;
//}

//strcmp��ǰ�ߴ��ں��߷��ش���0�����֣���֮����С��0�����֣�����򷵻�0
//ע�ⲻͬ�༭������ֵ���ܲ�ͬ����˲��ܲ���1 -1 0�ж�

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "abcd";
//	printf("%d\n", strcmp(arr1,arr2));
//	return 0;
//}

//strncpy������ָ���������ַ����Ƿ񿽱�\0�ɸ�������������������Դ�ַ�����ʱ����Ĳ�\0������Ŀ���ַ������򱨴�
//Ҳ���Կ���0��

//int main()
//{
//	char arr1[25] = "abcdefgh\0xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", strncpy(arr1,arr2,18));
//	return 0;
//}

//strncat��׷��ָ���������ַ�������׷�Ӽ�����ֻ��һ��\0����ĩβֻ��һ��\0��

//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	printf("%s\n", strncat(arr1, arr2, 1));
//	return 0;
//}

//strncmp���Ƚ�ָ���������ַ�����\0��ֹͣ�������ֹͣʱ��

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	printf("%d\n", strncmp(arr1, arr2, 3));
//	return 0;
//}

//strstr��NULLָ��ָ�룬Null��nullָ\0���������򷵻ؿ�ָ�룬���򷵻�Ҫ���ַ����ڱ����ַ����״γ��ֵĵ�ַ

//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "bce";
//	printf("%s\n", strstr(arr1, arr2));
//	return 0;
//}

//strtok�����ݸ����ַ��������ַ����и���ָ��������ָ��ַ�����ÿ�ε��û��ҵ�һ���ָ�����Ϊ\0������ָ��÷ָ����ָ�룬�´ηָ���ϴο�ʼ
//������޸��ַ��������ȿ������ݣ�����¼ָ�룬���״ε������Ժ����ָ�룬���Ҳ���ʱ���ؿ�ָ��

//int main()
//{
//  //192.168.31.121
//	//192 168 31 121
//	char arr1[] = "192.168.31..121";//Ҫ�ָ�Ĵ������ڵķָ��ַ���ָ���Ŀմ���������ӡ
//	char* p = ".";//�ָ��ַ�������Ϊ���
//	char buf[1024] = { 0 };
//	strcpy(buf, arr1);//����һ��
//
//	//����
//	//char* ret = strtok(arr1, p);//�״δ����ַ���
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//����ֻ�贫���ָ��
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//��׼�÷�
//	char* ret = NULL;
//	//�״δ����ַ�����δ����NULL������������������ڶ��μ��Ժ󣩴����ָ��
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);//ÿ�����
//	}
//	return 0;
//}

//strerror������Ϊ�����룬���ش������Ӧ�Ĵ�����Ϣ��ͨ�����errnoʹ�ã�ʹ��errno.h��stdlib.h��
//errno��ȫ�ֵĴ�����������ɿ⺯��ά�����ݴ������͸��������ֵ

//int main()
//{
//	//char* str = strerror(0);//�޴���
//	//str = strerror(1);//������Ĳ���
//	//str = strerror(2);//û�и��ļ����ļ���
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//�򿪵�ǰĿ¼��(��.c�ļ�ͬ��)��Ϊtest��ʽΪtxt���ļ�
//									  //�ɹ��򷵻�һ���ļ�ָ�룬���򷵻ؿ�ָ��
//	if (!pf)
//		printf("%s\n", strerror(errno));//���û�и��ļ����ļ���
//	else
//		printf("open file successfully!\n");
//	return 0;
//}

//�ַ����ຯ��(ctype.h)��iscntrl,isspace
//�����ַ����հ��ַ����ո�' '����ҳ'\f'������'\n'���س�'\r'���Ʊ��'\t'����ֱ�Ʊ��'\v'��
//isdidgit,isxdigit
//ʮ���������ַ���ʮ�����������ַ�
//islower,isupper
//��д��Сд
//isalpha,isalnum
//Ӣ����ĸ��Ӣ����ĸ������
//ispunct,isgraph,isprint
//�����ţ����������ֻ���ĸ��ͼ���ַ����ɴ�ӡ�������κ�ͼ���ַ����ɴ�ӡ�ַ���ͼ���ַ��Ϳհ��ַ���

//int main()
//{
//	char ch = 's';
//	int ret = islower(ch);//Ϊ�淵�ط���ֵ�����򷵻�0����������ͬ��
//	ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת������,toupper,tolower������ֵΪ���ͣ��ַ��ͣ�������ҲΪ���ͣ�����ֱ��ת���ַ�������Ҫʹ��ѭ��
//��ʹ������������ʱ��Ҫ��32

//int main()
//{
//	char arr[] = "abdJKL";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		if(isupper(arr[i]))
//			printf("%c\n", tolower(arr[i]));
//	}
//	return 0;
//}

//�ڴ溯�������ַ�����������ͬ����ɲ�����ͬ�������ݣ�����\0Ӱ��

//memcpy������ֵ��ǰ������������void*������������ΪҪ�������ֽ����������ص�����

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[5] = { 0 };
//	//strcpy(arr2, arr1);���Ͳ����ݣ��ᰴ�ֽڿ�������\0ֹͣ�����¿������ֻ��1
//
//	//memcpy(arr2, arr1, sizeof(arr1));//����ָ���ֽ���
//	struct S arr3[] = { {"zhangsan",20},{"lisi",21} };
//	struct S arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//memmove���Դ����ص����������

//memcmp����������������ͬstrcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,2,5,4,3 };
//	//01 00 00 00 02 00 00 00 05 00 00 00 04 00 00 00 03 00 00 00
//	int ret = memcmp(arr1, arr2, 9);//���ֽڱ�
//	printf("%d\n", ret);//�������
//	return 0;
//}

//memset����ָ���ֽڸ�����ĳ�ַ�

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);//���ֽڷ�
//
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//�����÷�,ÿ���ֽڶ�����1
//	memset(arr, '1', 10);//�����÷���ÿ���ֽڶ�����1��Ӧ��ASCII��ֵ0x31
//	return 0;
//}

