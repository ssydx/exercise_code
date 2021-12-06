#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//strlen��intҲ�ɸ�Ϊsize_t

//int my_strlen(const char* str)//����ʵ��
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(const char* str)//��������ʱ�����ĵݹ�д��
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return my_strlen(++str) + 1;
//}

//int main()
//{
//	int ret = my_strlen("abcdef");
//	printf("%d\n", ret);
//	return 0;
//}

//strcpy����\0һͬ����������Ŀ���ַ����ĵ�ַ

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//�Ȱ�srcָ����ַ�����destָ��Ŀռ����ж�destָ����ַ��Ƿ�Ϊ�棬��\0һ�鿽����ȥ
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����ʼ��ַ����
//	return ret;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//strcat

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//��destָ����ַ���Ϊ\0��++�����ջ���һ��
//	while (*dest++)
//	{
//		;
//	}
//	//��ȥ��ӵ�һ��
//	dest--;
//	//��strcpy��ͬ
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1,arr2));
//	return 0;
//}

//strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//���ʱѭ��
//	while (*str1 == *str2)
//	{
//		//����һ��Ϊ\0�򷵻�0��ʵ�����߶�Ϊ\0
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	//�����ʱ���ز�ֵ
//	return (*str1 - *str2);
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//����ַָ�򶼲�Ϊ\0ʱѭ��
//	while (*str1 && *str2)
//	{
//		if (*str1 != *str2)
//			//ĳ�����ַ������ʱ���ز�ֵ
//			return *str1 - *str2;
//		str1++;
//		str2++;
//	}
//	//�������е�ַָ��\0ʱ���ٱȽϣ��������������ֵ
//	return (*str1 - *str2);
//}

//int main()
//{
//	char arr1[20] = "abcda";
//	char arr2[] = "abcd";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}

//strncpy

//char* my_strncpy(char* dest, const char* src, int n)
//{
//	assert(*dest && *src);
//	char* ret = dest;
//	//������n��
//	while (n--)
//	{
//		//��*src��Ϊ\0ʱ���俽��*dest
//		if (*src)
//			//������Ϻ�ֱ�++
//			*dest++ = *src++;
//		//��*srcΪ\0ʱ��ʣ�����������\0
//		else
//			*dest++ = '\0';
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "abcdefgh";
//	char arr2[] = "hello";
//	printf("%s\n", my_strncpy(arr1, arr2, 9));
//	return 0;
//}

//strncat

//char* my_strncat(char* dest, const char* src, int n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//�ҵ�Ŀ���ַ���\0���ڵ�ַ
//	while (*dest++);
//	dest--;
//	//����ʱ����n�Σ�n���ַ�
//	while (n--)
//	{
//		//��*srcΪ\0ʱ����ѭ��
//		if (!*src)
//			break;
//		//�����src���ݿ���dest����������һ�ַ�
//		else
//			*dest++ = *src++;
//	}
//	//�����Ĵ���
//	//while (n--)
//	//	if (!(*dest++ == *src++))
//	//		return ret;
//
//
//	//ĩβ��\0
//	*dest = '\0';
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	printf("%s\n", my_strncat(arr1, arr2, 15));
//	return 0;
//}

//strncmp���ʵ�֣�

//int my_strncmp(const char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	if (!count)
//		return 0;
//	while (--count)
//		if (*str1++ != *str2++)
//			return *str1-*str2;
//	return *str1-*str2;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	printf("%d\n", my_strncmp(arr1, arr2, 3));
//	return 0;
//}

//strstr������

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//����������ʱָ���һ��ƫ��ָ��
//	char* s1;
//	char* s2;
//	char* start = (char*)str1;
//	//��ʼ���Ҳ�Ϊ\0ʱ��ѭ��
//	while (*start)
//	{
//		//��ʼλ��ƫ��
//		s1 = start;
//		//s2�ص���ͷ
//		s2 = (char*)str2;
//		//�ַ�����\0ʱֹͣѭ�������߲�ͬҲ�˳�ѭ��
//		while (*s1 && *s2 && !(*s1 - *s2))
//		{
//			s1++;
//			s2++;
//		}
//		//s2ָ��\0˵��ƥ��ɹ�
//		if (!*s2)
//			return start;
//		//s1ָ��\0��s2��ָ��\0ʱƥ��ʧ��
//		if (!*s1)
//			return NULL;
//		//��������´�ѭ��ƫ��һ���ַ�����
//		start++;
//	}
//	//���߲�ͬ
//	return NULL;
//}

//int main()
//{
//	char arr1[] = "abbc";
//	char arr2[] = "abc";
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}

//memcpy+memmove

//void* my_memcpy(void* dest, const void* src, int count)
//{
//	assert(dest && src);
//	//ǿ��ת��Ϊchar*
//	char* d = (char*)dest;
//	char* s = (char*)src;
//	//���ֽڿ���
//	while (count--)
//		*d++ = *s++;
//	return dest;
//}

//void* my_memcpy_plus(void* dest, const void* src, size_t count)//��memmove
//{
//	assert(dest && src);
//	char* d = (char*)dest;
//	char* s = (char*)src;
//	//Դ����Ŀ��ʱ��ǰ��󿽱�
//	if (s > d)
//		while (count--)
//			*d++ = *s++;
//	//ԴС�ڵ���Ŀ��ʱ�Ӻ���ǰ����
//	else
//		while (count--)
//			//count��ʱ�Ѽ�һ
//			*(d + count) = *(s + count);
//	return dest;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"zhangsan",20},{"lisi",21} };
//	struct S arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy_plus(arr + 2, arr, 5*sizeof(int));//���ص�������Ҫ�Ժ������޸�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

