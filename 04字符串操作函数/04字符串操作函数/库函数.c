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

//求长度strlen
//长度不受限制的字符串函数strcpy(不安全) strcat(不安全) strcmp
//长度受限的字符串函数strncpy strncat strncmp
//字符串查找strstr strtok
//错误信息报告strerror
//字符分类函数，字符转换函数
//内存操作函数memcpy memmove memset memcmp



//strlen，没遇到\0就++，返回值为无符号整型（size_t），注意strlen的返回值的任意加减运算都为非负数

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n",len);//6
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len1 = strlen(arr);
//	printf("%d\n", len1);//未知
//
//	if (strlen("abc") - strlen("abcd") > 0)
//	{
//		printf("haha\n");//输出haha
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//strcpy，将后者的字符拷入前者中包括\0，返回值为前者的起始地址
//源字符串必须包含\0，目标字符串必须足够大，目标非常量字符串(即将常量字符串首字符地址赋予指针变量)

//int main()
//{
//	//错误使用
//	//char* p = "abcdefg";
//	//错误使用
//	//char arr[] = { 'w','o','r','l','d' };
//	char arr1[] = "abcdefgh";
//	char arr2[] = "world";
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}

//strcat，返回目标字符串的起始地址，不能自追加
//将后者拷贝到前者中，从目标字符串的\0开始到源字符串\0结束，目标空间要足够大且非常量字符串

//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = "world";
//	printf("%s\n", strcat(arr1,arr2));
//	return 0;
//}

//strcmp，前者大于后者返回大于0的数字，反之返回小于0的数字，相等则返回0
//注意不同编辑器返回值可能不同，因此不能采用1 -1 0判断

//int main()
//{
//	char arr1[20] = "abcde";
//	char arr2[] = "abcd";
//	printf("%d\n", strcmp(arr1,arr2));
//	return 0;
//}

//strncpy，拷贝指定个数的字符，是否拷贝\0由个数决定，当个数超过源字符个数时多余的补\0，超过目标字符个数则报错
//也可以拷贝0个

//int main()
//{
//	char arr1[25] = "abcdefgh\0xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", strncpy(arr1,arr2,18));
//	return 0;
//}

//strncat，追加指定个数的字符，无论追加几个都只补一个\0（即末尾只有一个\0）

//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	printf("%s\n", strncat(arr1, arr2, 1));
//	return 0;
//}

//strncmp，比较指定个数的字符，遇\0则停止，结果按停止时的

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	printf("%d\n", strncmp(arr1, arr2, 3));
//	return 0;
//}

//strstr，NULL指空指针，Null和null指\0，不存在则返回空指针，否则返回要查字符串在被查字符串首次出现的地址

//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "bce";
//	printf("%s\n", strstr(arr1, arr2));
//	return 0;
//}

//strtok，根据给定字符（放在字符串中赋给指针变量）分割字符串，每次调用会找到一个分隔符改为\0并返回指向该分割符的指针，下次分割从上次开始
//即其会修改字符串（事先拷贝备份）并记录指针，除首次调用外以后传入空指针，查找不到时返回空指针

//int main()
//{
//  //192.168.31.121
//	//192 168 31 121
//	char arr1[] = "192.168.31..121";//要分割的串，紧邻的分割字符会分割出的空串，并不打印
//	char* p = ".";//分割字符，可以为多个
//	char buf[1024] = { 0 };
//	strcpy(buf, arr1);//备份一份
//
//	//步骤
//	//char* ret = strtok(arr1, p);//首次传入字符串
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//后面只需传入空指针
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//标准用法
//	char* ret = NULL;
//	//首次传入字符串，未返回NULL则继续，调整变量（第二次及以后）传入空指针
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);//每轮输出
//	}
//	return 0;
//}

//strerror，参数为错误码，返回错误码对应的错误信息，通常配合errno使用（使用errno.h或stdlib.h）
//errno是全局的错误码变量，由库函数维护根据错误类型赋予错误码值

//int main()
//{
//	//char* str = strerror(0);//无错误
//	//str = strerror(1);//不允许的操作
//	//str = strerror(2);//没有该文件或文件夹
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//打开当前目录下(与.c文件同级)名为test格式为txt的文件
//									  //成功则返回一个文件指针，否则返回空指针
//	if (!pf)
//		printf("%s\n", strerror(errno));//输出没有该文件或文件夹
//	else
//		printf("open file successfully!\n");
//	return 0;
//}

//字符分类函数(ctype.h)，iscntrl,isspace
//控制字符，空白字符（空格' '，换页'\f'，换行'\n'，回车'\r'，制表符'\t'，垂直制表符'\v'）
//isdidgit,isxdigit
//十进制数字字符，十六进制数字字符
//islower,isupper
//大写，小写
//isalpha,isalnum
//英文字母，英文字母和数字
//ispunct,isgraph,isprint
//标点符号（不属于数字或字母的图形字符（可打印）），任何图形字符，可打印字符（图形字符和空白字符）

//int main()
//{
//	char ch = 's';
//	int ret = islower(ch);//为真返回非零值，否则返回0，其他函数同理
//	ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换函数,toupper,tolower，返回值为整型（字符型），参数也为整型，不可直接转换字符串，需要使用循环
//不使用这两个函数时需要±32

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

//内存函数，与字符操作函数不同，其可操作不同类型数据，不受\0影响

//memcpy，返回值及前两个参数都是void*，第三个参数为要拷贝的字节数，不必重叠拷贝

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
//	//strcpy(arr2, arr1);类型不兼容，会按字节拷贝并遇\0停止，导致拷贝结果只有1
//
//	//memcpy(arr2, arr1, sizeof(arr1));//拷贝指定字节数
//	struct S arr3[] = { {"zhangsan",20},{"lisi",21} };
//	struct S arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//memmove可以处理重叠拷贝的情况

//memcmp，三个参数，其他同strcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	int arr2[] = { 1,2,5,4,3 };
//	//01 00 00 00 02 00 00 00 05 00 00 00 04 00 00 00 03 00 00 00
//	int ret = memcmp(arr1, arr2, 9);//按字节比
//	printf("%d\n", ret);//输出负数
//	return 0;
//}

//memset，放指定字节个数的某字符

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);//按字节放
//
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//错误用法,每个字节都放入1
//	memset(arr, '1', 10);//错误用法，每个字节都放入1对应的ASCII码值0x31
//	return 0;
//}

