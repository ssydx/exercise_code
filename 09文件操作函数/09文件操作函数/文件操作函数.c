#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//�����ļ���Դ�����ļ�.c  Ŀ���ļ�.obj  ��ִ�г���.exe��
//�����ļ��������ļ�����Ҳ�ɵ��������ļ�������ǰ��ָ��������ʱ��д���ļ�������������
//�ļ��������ļ�·��+�ļ���+�ļ���ʽ��׺
//�����ļ���Ϊ�ı��ļ��Ͷ������ļ�
//�������ڴ����Զ�������ʽ�洢��������ת������������Ƕ������ļ�����ASCII��ֵ��ʽ��������ı��ļ�
//�������ڴ��У��ַ�һ����ASCII����ֵ������ASCIIҲ����ʹ�ö�����
//����10000��������ռ4���ֽڣ����ݻ�����ͬ���ı䣩��ASCIIռ5���ֽ�

//�ļ���������ϵͳ�Զ����ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ���ļ����������ڴ�ʹ���ͨ���ļ�����������
//��������������������������������������̣�������Ȼ���ж��ֲ�ͬ�Ļ���ģʽ��

//�ļ�ָ�룺�ļ����͵�ָ�룬ÿ����ʹ�õ��ļ������ڴ��п��ٶ�Ӧ���ļ���Ϣ��������������Ϣ���ļ������ļ�״̬
//��ǰλ�õȣ�����Щ��Ϣ�������ڽṹ������У��ýṹ����ϵͳ����FILE

//��غ�����
//fopen fclose 
//getchar putchar getc putc fputc fgetc puts gets fgets fgets 
//print scanf fprintf fscanf sprintf sscanf
//����f�����ļ���أ�����ֱ����Ա�׼�������

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//10 27 00 00��00002710ʮ��������
//	fclose(pf);
//	pf = NULL;
//	//Դ�ļ����������������򿪷�ʽ���������Ʊ༭��
//	return 0;
//}

//fopen��������,һ�����ļ���,һ���Ǵ򿪷�ʽ
//ע��򿪾�Ҫ�ر�(fcloseһ���������ļ�ָ��)����ָ����Ϊ��ָ��
//r  ֻ��					û�������
//w  ֻд(����ԭ����)		����
//a  ׷��					û�������
//rb ������ֻ��				û�������
//wb ������ֻд(ͬ��)		����
//ab ������׷��				û�������
//r+ ��д					û�������
//w+ ��д					����
//a+ ��д(���ļ�β)			����
//rb+ wb+ ab+

//int main(void)
//{
//	//���ļ�ʱ�᷵��һ��FILE*��ָ��,ʧ���򷵻ؿ�ָ��
//	//��ǰ·��
//	//FILE* pf = fopen("text.txt", "r");
//	//FILE* pf = fopen(".\\text.txt", "r");
//	//��һ��·��
//	//FILE* pf = fopen("..\\text.txt", "r");
//	//����·��
//	//FILE* pf = fopen("D:\\VS2019FILE\\09�ļ���������\\09�ļ���������\\text.txt", "r");
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


//������������ַ�Ϊ��λ��
//��������Ļ�Ǳ�׼��������豸,ϵͳĬ�ϴ�

//�ַ���д  fputc��������,��һ��Ϊ�ַ��ڶ���Ϊ�ļ�ָ��  fgetcһ���������ļ�ָ��

//д

//int main()
//{
//	FILE* pf = fopen("TEST.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('w', pf);
//	fputc('o', pf);
//	fputc('r', pf);
//	fputc('l', pf);
//	fputc('d', pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//��

//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��׼�������stdin stdout

//int main()
//{
//	int ch = fgetc(stdin);//�Ӽ��̶���
//	fputc(ch, stdout);//�������Ļ
//	return 0;
//}

//�ַ���������Ϊ��λ����д fputs��һ����Ҫд����ַ������ڶ�����д��λ��
//fgets��һ�������Ǵ��λ�ã��ڶ����Ǹ������������Ǵ��Ķ�

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
//	//printf("%s", buf);//�Ὣ���з�����
//	puts(buf);//���Զ���ӻ��з�������ԭ�ļ���û��
//	fgets(buf, 1024, pf);
//	//printf("%s\n", buf);//�˴�ԭ�ļ�û�л��з�
//	puts(buf);//���Զ���ӻ��з�������ԭ�ļ���û��
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
//	//д�ļ�
//	fputs("hello\n", pf);//���ӻ��з�������
//	fputs("world", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main(void)
//{
//	char buf[1024] = { 0 };
//	//�ӱ�׼�����
//	fgets(buf, 1024, stdin);
//	//����׼���д
//	fputs(buf, stdout);
//
//	gets(buf);//�ȼ�
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
//	//��ʽ��д
//	//FILE* pf = fopen("test.txt", "w");
//	//if (!pf)
//	//{
//	//	return 0;
//	//}
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//��ʽ����
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
//	//д
//	//S s = { "zhangsan",20,56.6 };
//	//FILE* pf = fopen("test.txt", "wb");
//	//if (!pf)
//	//	return 0;
//	//fwrite(&s, sizeof(s), 1, pf);
//
//	//��
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


//fseek��һ���������ļ�ָ�룬�ڶ�����ƫ�������������ǻ��㣨SEEK_CUR,SEEK_SET,SEEK_END��,ע�ⷶΧ

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

//ftell�������ļ�ָ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);//��ȡ��ָ���Զ��ƶ�
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
//	fgetc(pf);//��ȡ��ָ���Զ��ƶ�
//	fgetc(pf);//��ȡ��ָ���Զ��ƶ�
//	rewind(pf);//ָ��ص���ʼλ��
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//EOF���ļ���β��־��ֵΪ-1
//����ʹ��feof�ķ���ֵ�ж��ļ��Ƿ����
//Ӧ�����ļ���ȡ����ʱ�ж��Ƕ�ȡʧ�ܻ��Ƕ������ļ�β
//fgetc����ֵΪEOF����fgets����ֵ��NULL
//�������ļ���ȡ��ʵ�ʶ�ȡ����С��Ҫ������

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
//		perror("haha");//ͬ���Ǳ�������ʱʵ�ʴ�ӡ��haha:����ԭ��
//						   //���������Ӽ�
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putc(ch,stdout);
//	}
//	if (ferror(pf))//û����0�������ط���ֵ
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))//������β���ط���ֵ��û������������β����0
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}