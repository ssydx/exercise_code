#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//goto���Ҫ���ã�������һ������������ѭ��

//int main()
//{
//again://��ǩ���ð��
//	printf("hello world\n");
//	goto again;//����again��ǩ��ִ�У�������ѭ��
//	return 0;
//}

//int main()
//{
//	printf("hello\n");
//	goto x;//����haha
//	printf("haha\n");
//x:
//	printf("world\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		printf("i=%d\n", i);
//		int j = 0;
//		for (j = 1; j < 11; j++)
//		{
//			printf("j=%d\n", j);
//			int k = 0;
//			for (k = 1; k < 11; k++)
//			{
//				printf("k=%d\n", k);
//				if (5 == k)
//				{
//					goto error;
//				}
//			}
//		}
//	}
//error:
//	printf("11\n");
//	return 0;
//}



//�ػ����򣬸��ļ��µ�debug����exeִ�г���ɼ��������˵�

//goto���

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60��Ϊ����60���ڹػ�,shutdown -a��ʾȡ���ػ�
//	system("shutdown -s -t 60");//systemΪϵͳ����⺯��������Ҫ��˫����
//again:
//	printf("Be careful, your computer will shutdown in 60 seconds!\n");
//	printf("If you input:������, the operation will be cancelled!\n ");
//	printf("Please input:>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//��goto

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60��Ϊ����60���ڹػ�,shutdown -a��ʾȡ���ػ�
//	system("shutdown -s -t 60");//systemΪϵͳ����⺯��������Ҫ��˫����
//	while (1)//����while��ѭ��
//	{
//		printf("Be careful, your computer will shutdown in 60 seconds!\n");
//		printf("If you input:������, the operation will be cancelled!\n ");
//		printf("Please input:>");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}