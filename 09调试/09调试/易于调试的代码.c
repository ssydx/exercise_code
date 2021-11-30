#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//1代码运行正常，2bug少，3效率高，4可读性好，5可维护性好，6注释齐全，7文档齐全
//coding技巧：1使用assert，2尽量使用const，3养成良好的编码风格，4添加必要的注释，5避免编码的陷阱


//assert的使用，引用头文件

//int main()
//{
//	//int num = 10;
//	int num = 20;
//	assert(num == 10);//断言成立则继续进行，否则程序中止并报错
//	printf("%d\n", num);
//}

//const的使用

//int main()
//{
//	//const int num = 10;
//	//int* p = &num;
//	//*p = 20;//虽然num被const修饰，但仍然可修改，实际是非法的
//
//	//const int num = 10;
//	//const int* p = &num;//const也修饰指针后就无法对num进行修改了（放在*的左边），即限制指针变量指向的变量的修改
//						  //也即限制*p
//	//*p = 20;
//
//	//const int num = 10;
//	//int* const p = &num;//放在*右侧不能限制对num的修改
//	//*p = 20;
//	//int n = 100;
//	//p = &n;//限制的是指针变量本身的修改，也即限制p
//	//printf("%d\n", num);
//
//	return 0;
//}



//模拟实现strcpy！！！
//1优化代码，2使用断言，3使用const，4返回值以便链式访问

//void my_strcpy(char* dest, char* src)//最原始的代码，6分
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//简化函数体
//	}
//	*dest = '\0';
//}

//void my_strcpy(char* dest, char* src)//优化循环体！！！，7分
//{
//	while (*dest++ = *src++)//集成到判断条件
//							//将*src拷贝（赋值）给*dest后再各自增
//							//被赋值后*dest非零（'\0'）则进行循环  \0的ASCII为0
//							//由于先赋值再判断，因此最后一次循环已经将\0赋值给*dest
//							//最好的地方是省略了最终单独加一个\0
//	{
//		;//循环体无
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//避免空指针导致程序崩溃，但使错误不易发现
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest, char* src)//使用断言，8分
//{
//	assert(dest !=NULL && src!=NULL);//断言指针非空，成立则无事发生，不成立则返回错误信息
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* src)//使用常量控制，9分
//{										  //避免修改源字符串
//	assert(dest != NULL && src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest, const char* src)//使用char*作为返回值类型！！！，10分
//{											//返回目的字符串的起始地址，以实现链式访问
//	char* ret = dest;//保存目的字符串的起始地址
//	assert(dest != NULL && src != NULL);
//	//把src指向的字符串拷贝进dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目的字符串起始地址
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###############";
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}



//字符串长度

//int my_strlen(const char *str)//const+int
//{
//	assert(str != NULL);//assert
//	int count = 0;
//	while (*str++ != '\0')//代码优化
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc def";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
