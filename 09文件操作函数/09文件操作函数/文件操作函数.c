#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//程序文件（源程序文件.c  目标文件.obj  可执行程序.exe）
//数据文件（程序文件本身也可当作数据文件，但当前仅指程序运行时读写的文件，输入和输出）
//文件名包括文件路径+文件名+文件格式后缀
//数据文件分为文本文件和二进制文件
//数据在内存中以二进制形式存储，若不加转换输出到外存就是二进制文件，以ASCII码值形式输出则是文本文件
//数据在内存中：字符一律用ASCII，数值可以用ASCII也可以使用二进制
//例如10000，二进制占4个字节（根据环境不同而改变），ASCII占5个字节

//文件缓冲区：系统自动在内存中为程序中每一个正在使用的文件开辟一块文件缓冲区，内存和磁盘通过文件缓冲区过度
//输出：先输出到缓冲区，缓冲区满再输出到磁盘，输入亦然（有多种不同的缓冲模式）

//文件指针：文件类型的指针，每个被使用的文件都在内存中开辟对应的文件信息区，存放其相关信息（文件名，文件状态
//当前位置等），这些信息被保存在结构体变量中，该结构体由系统声明FILE

//相关函数：
//fopen fclose 
//getchar putchar getc putc fputc fgetc puts gets fgets fgets 
//print scanf fprintf fscanf sprintf sscanf
//带有f的与文件相关，其他直接针对标准输入输出

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//10 27 00 00→00002710十六进制数
//	fclose(pf);
//	pf = NULL;
//	//源文件——添加现有项——打开方式——二进制编辑器
//	return 0;
//}

//fopen两个参数,一个是文件名,一个是打开方式
//注意打开就要关闭(fclose一个参数即文件指针)并把指针置为空指针
//r  只读					没有则出错
//w  只写(销毁原内容)		建立
//a  追加					没有则出错
//rb 二进制只读				没有则出错
//wb 二进制只写(同理)		建立
//ab 二进制追加				没有则出错
//r+ 读写					没有则出错
//w+ 读写					建立
//a+ 读写(在文件尾)			建立
//rb+ wb+ ab+

//int main(void)
//{
//	//打开文件时会返回一个FILE*的指针,失败则返回空指针
//	//当前路径
//	//FILE* pf = fopen("text.txt", "r");
//	//FILE* pf = fopen(".\\text.txt", "r");
//	//上一级路径
//	//FILE* pf = fopen("..\\text.txt", "r");
//	//绝对路径
//	//FILE* pf = fopen("D:\\VS2019FILE\\09文件操作函数\\09文件操作函数\\text.txt", "r");
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//		printf("%s\n",strerror(errno));
//	else
//	{
//		;
//		fclose(pf);
//	}
//	return 0;
//}


//输入输出（以字符为单位）
//键盘与屏幕是标准输入输出设备,系统默认打开

//字符读写  fputc两个参数,第一个为字符第二个为文件指针  fgetc一个参数即文件指针

//写

//int main()
//{
//	FILE* pf = fopen("TEST.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('w', pf);
//	fputc('o', pf);
//	fputc('r', pf);
//	fputc('l', pf);
//	fputc('d', pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//读

//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//标准输入输出stdin stdout

//int main()
//{
//	int ch = fgetc(stdin);//从键盘读入
//	fputc(ch, stdout);//输出到屏幕
//	return 0;
//}

//字符串（以行为单位）读写 fputs第一个是要写入的字符串，第二个是写入位置
//fgets第一个参数是存放位置，第二个是个数，第三个是从哪读

//int main(void)
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);//会将换行符读入
//	puts(buf);//会自动添加换行符，无论原文件有没有
//	fgets(buf, 1024, pf);
//	//printf("%s\n", buf);//此处原文件没有换行符
//	puts(buf);//会自动添加换行符，无论原文件有没有
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main(void)
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);//不加换行符不换行
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main(void)
//{
//	char buf[1024] = { 0 };
//	//从标准输入读
//	fgets(buf, 1024, stdin);
//	//往标准输出写
//	fputs(buf, stdout);
//
//	gets(buf);//等价
//	puts(buf);
//
//	return 0;
//}

//typedef struct S
//{
//	int n;
//	float score;
//	char arr[10];
//}S;
//
//int main()
//{
//	S s = { 100,3.14f,"world" };
//	S s1 = { 0 };
//	//格式化写
//	//FILE* pf = fopen("test.txt", "w");
//	//if (!pf)
//	//{
//	//	return 0;
//	//}
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//格式化读
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %f %s", &(s1.n), &(s1.score), &(s1.arr));
//	printf("%d %.2f %s", s1.n, s1.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct
//{
//	char name[20];
//	int age;
//	double score;
//}S;
//
//int main()
//{
//	//写
//	//S s = { "zhangsan",20,56.6 };
//	//FILE* pf = fopen("test.txt", "wb");
//	//if (!pf)
//	//	return 0;
//	//fwrite(&s, sizeof(s), 1, pf);
//
//	//读
//	S tmp = { 0 };
//	FILE* pf = fopen("test1.txt", "r");
//	if (!pf)
//		return 0;
//	fread(&tmp, sizeof(tmp), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fseek第一个参数是文件指针，第二个是偏移量。第三个是基点（SEEK_CUR,SEEK_SET,SEEK_END）,注意范围

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell参数是文件指针
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);//读取后指针自动移动
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);//读取后指针自动移动
//	fgetc(pf);//读取后指针自动移动
//	rewind(pf);//指针回到起始位置
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//EOF是文件结尾标志，值为-1
//不能使用feof的返回值判断文件是否结束
//应该在文件读取结束时判断是读取失败还是读到了文件尾
//fgetc返回值为EOF，或fgets返回值是NULL
//二进制文件读取是实际读取个数小于要读个数

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("haha");//同样是报错，错误时实际打印出haha:错误原因
//						   //用起来更加简单
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putc(ch,stdout);
//	}
//	if (ferror(pf))//没错返回0，出错返回非零值
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))//读到结尾返回非零值，没有正常读到结尾返回0
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}