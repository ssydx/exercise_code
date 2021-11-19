#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



//一个简单的加法函数

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



//库函数

//已经使用过的
//stdio.h    include printf scanf
//stdlib.h   include system
//math.h     include pow sqrt
//string.h   inclue strcpy strcmp strlen memset
//time.h     include  time

//strcpy and printf

//int main()
//{
//	char arr1[] = "world";
//	char arr2[] = "###########";
//	strcpy(arr2, arr1);//strcpy会将\0一同拷贝过去
//	printf("%s\n", arr2);//printf遇到\0停止打印，因此输出的只有world而没有剩余的#
//	return 0;
//}

//memset

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//首个参数为指针ptr（数组名多数时候就是该数组的首元素（下标为0）的内存地址）
//						//第二个参数为要设置的值value（可以使用字符，自动转换为对应的ASCII码值）
//						// 第三个参数为该值出现的个数num
//						//即将从ptr所指处起的num个内存块（一个内存块为一个字节）设置为value
//	printf("%s", arr);
//	return 0;
//}