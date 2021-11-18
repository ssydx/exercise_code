#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>


//while循环，具有一些缺陷，推荐for循环

//int main()
//{
//	//while (1)//非零死循环
//	//	printf("hehe\n");
//
//	//int i = 1;
//	//while (i < 11)
//	//{
//	//	if (5 == i)//当i=5时，跳出当前循环
//	//		break;
//	//	if (4 == i)
//	//		continue;//当i=4时，结束本轮循环，进入下轮循环
//	//	//程序无法结束，因为i不再自增始终保持为4，陷入死循环
//	//	printf("%d ", i);//打印出1-3
//	//	i++;
//	//}
//
//	//int i = 0;
//	//while (i < 11)
//	//{
//	//	i++;
//	//	if (6 == i)//当i=5时，跳出当前循环
//	//		break;
//	//	if (4 == i)
//	//		continue;//当i=4时，结束本轮循环，进入下轮循环
//	//	printf("%d ", i);//打印出1-3，5
//	//}
//
//	//int ch = getchar();//获得一个字符
//	//putchar(ch);//输出ch存储的字符
//	//printf("%c\n", ch);//同上
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//ctrl+z表示EOF，才能跳出循环
//	//{
//	//	putchar(ch);
//	//}
//
//	//int ret = 0;
//	//char password[20] = { 0 };
//	//printf("please enter your password:>");
//	//scanf("%s", password);//输入密码，回车确认(\n)，取走密码，但留下了\n
//	//printf("please verify your password(Y/N):>");
//	//ret = getchar();//直接读走\n，导致ret!="Y"
//	//if (ret == "Y")//双引号应改成单引号
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
//	//scanf("%s", password);//输入密码，回车确认(\n)，取走密码，但留下了\n
//	//while ((ch = getchar()) != '\n')//未遇到\n前一直读取，直到把缓冲区读空
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
//	//while ((ch = getchar()) != EOF)//getchar也将\n作为结束输入的标志，在回车前可持续输入，返回值为整型
//	//{
//	//	if (ch < '0' || ch > '9')
//	//		continue;
//	//	putchar(ch);//一直读取到缓冲区为空再进行下次循环
//	//}
//
//
//	return 0;
//}



//for循环

//int main()//不要在循环体内修改调整变量
//{
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//以分号分隔，第一个是初始化，第二个是判断条件，第三个是调整
//	//	printf("%d ", i);
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//尽量不要在for语句中声明控制变量
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d ", i);
//	//}
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)//与while不同，并不会陷入死循环
//	//{
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d ", i);
//	//}
//
//	//int i = 0;
//	//for (i = 1; i < 11; i++)
//	//{
//	//	if (i = 5)//赋值导致死循环
//	//		printf("haha\n");
//	//	printf("hehe\n");
//	//}
//
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//for (i = 0; i < 10; i++)//建议采用左闭右开区间，便于看出循环次数
//	//	printf("%d ", arr[i]);
//
//	//for (;;)//三个部分都可省略，但会陷入死循环（判断条件默认为真），不要随意省略某部分
//	//	printf("haha\n");
//
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)//由于j的初始化在外侧，首轮循环j变为10后不再重置为0，导致内层循环仅在第一轮打印
//	//		printf("haha\n");
//	//}
//
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//支持多变量
//	//{
//	//	printf("haha\n");
//	//}
//
//	//int i = 1;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)//不循环，因为判断条件初始即为假（k赋值为了0）
//	//	k++;
//
//	return 0;
//}



//do while循环

//int main()
//{
//	//int i = 1;
//	//do//先执行一次再判断，用得少
//	//{
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)//输出1-4
//	//		break;
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//	//int i = 1;
//	//do
//	//{
//	//	if (5 == i)//输出1-4后同样死循环
//	//		continue;
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i < 11);
//
//
//	return 0;
//}




//小练习


//计算n的阶乘

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


//计算1-10的阶乘之和（注意）

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
//			ret = ret * n;//ret产生累积，把上次的遗留下来参与计算，从而造成错误
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
//		ret = 1;//重置则不会出错
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
//			ret = ret * n;//不会造成错误，为什么？
//			n++;          //因为n也未重置，每次都是在原基础乘n（内层除首次外仅循环一次），反而减少了运算，更加高效
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
//	for (n = 1; n <= 3; n++)//与前一种写法效果相同但更清晰明了
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//在有序数组中查找某元素的位置（重点）

//int main()//顺序查找，效率低下，O(n)
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
//			break;//查找到则跳出循环
//		}
//	}
//	if (i == sz)
//		printf("not found");
//	return 0;
//}

//int main()//折半查找，重要算法，O(log2(n))
//{
//	int arr[] = { 1,2,4,5,7,9,14,15,16,17 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int f = 12;
//	int left = 0, right = sz-1;//元素个数减一
//	while (left <= right)//注意判断条件
//	{
//		int mid = (right + left) / 2;//写在内侧
//		if (arr[mid] > f)
//			right = mid-1;//必须减一
//		else if (arr[mid] < f)
//			left = mid+1;//必须加一
//		else
//		{
//			printf("found:%d", mid);
//			break;//跳出
//		}
//	}
//	if (left > right)
//		printf("not found");
//	return 0;
//}


//字符串从两侧向中间汇聚

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "***********";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr2[0]) - 2;//减二，因为字符串最后有一个\n
//	int right1 = strlen(arr1) - 1;//此方法更好
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒，库函数，头文件为<windows.h>
//		system("cls");//清空屏幕，库函数，头文件为<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//由于最后一次被清屏，所以补充上
//	return 0;
//}


//密码输入

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)//字符串不能直接比较，要采用库函数
//		{                                   //相同返回0，前大于后则返回正数，否则返回负数
//			printf("输入正确");
//			break;
//		}
//	}
//	if (3 == i)
//		printf("三次均错误");
//	return 0;
//}