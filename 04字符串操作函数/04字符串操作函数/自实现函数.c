#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>

//strlen，int也可改为size_t

//int my_strlen(const char* str)//常规实现
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(const char* str)//不创建临时变量的递归写法
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

//strcpy，连\0一同拷贝，返回目的字符串的地址

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//先把src指向的字符拷入dest指向的空间再判断dest指向的字符是否为真，连\0一块拷贝进去
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//将起始地址返回
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
//	//当dest指向的字符不为\0则++，最终会多加一次
//	while (*dest++)
//	{
//		;
//	}
//	//减去多加的一次
//	dest--;
//	//与strcpy相同
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
//	//相等时循环
//	while (*str1 == *str2)
//	{
//		//其中一个为\0则返回0，实际两者都为\0
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	//不相等时返回差值
//	return (*str1 - *str2);
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//当地址指向都不为\0时循环
//	while (*str1 && *str2)
//	{
//		if (*str1 != *str2)
//			//某两个字符不相等时返回差值
//			return *str1 - *str2;
//		str1++;
//		str2++;
//	}
//	//当其中有地址指向\0时不再比较，返回两者相减的值
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
//	//共拷贝n个
//	while (n--)
//	{
//		//当*src不为\0时将其拷入*dest
//		if (*src)
//			//拷贝完毕后分别++
//			*dest++ = *src++;
//		//当*src为\0时，剩余个数都拷入\0
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
//	//找到目标字符串\0所在地址
//	while (*dest++);
//	dest--;
//	//正常时拷贝n次，n个字符
//	while (n--)
//	{
//		//当*src为\0时跳出循环
//		if (!*src)
//			break;
//		//否则把src内容拷入dest并都移向下一字符
//		else
//			*dest++ = *src++;
//	}
//	//更简洁的代码
//	//while (n--)
//	//	if (!(*dest++ == *src++))
//	//		return ret;
//
//
//	//末尾补\0
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

//strncmp如何实现？

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

//strstr，复杂

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//设置两个临时指针和一个偏移指针
//	char* s1;
//	char* s2;
//	char* start = (char*)str1;
//	//起始查找不为\0时则循环
//	while (*start)
//	{
//		//起始位置偏移
//		s1 = start;
//		//s2回到开头
//		s2 = (char*)str2;
//		//字符串到\0时停止循环，两者不同也退出循环
//		while (*s1 && *s2 && !(*s1 - *s2))
//		{
//			s1++;
//			s2++;
//		}
//		//s2指向\0说明匹配成功
//		if (!*s2)
//			return start;
//		//s1指向\0但s2不指向\0时匹配失败
//		if (!*s1)
//			return NULL;
//		//其他情况下次循环偏移一个字符查找
//		start++;
//	}
//	//两者不同
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
//	//强制转换为char*
//	char* d = (char*)dest;
//	char* s = (char*)src;
//	//按字节拷贝
//	while (count--)
//		*d++ = *s++;
//	return dest;
//}

//void* my_memcpy_plus(void* dest, const void* src, size_t count)//即memmove
//{
//	assert(dest && src);
//	char* d = (char*)dest;
//	char* s = (char*)src;
//	//源大于目的时从前向后拷贝
//	if (s > d)
//		while (count--)
//			*d++ = *s++;
//	//源小于等于目的时从后向前拷贝
//	else
//		while (count--)
//			//count此时已减一
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
//	my_memcpy_plus(arr + 2, arr, 5*sizeof(int));//自重叠拷贝需要对函数做修改
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

