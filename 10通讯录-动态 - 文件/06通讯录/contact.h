#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//���ú�
#define DEFAULT_SIZE 1//Ĭ�ϳ�ʼ������Ĭ�ϳ�ʼ������Ҫ����Ĭ�ϸı���
#define DEFAULT_CHANGE 2//Ĭ��ÿ�θı���
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//��ϵ��
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;//������
//ͨѶ¼
typedef struct Contact
{
	PeoInfo* data;//MAX����ϵ��
	int size;//������ϵ�˵ĸ���
	int capacity;//���Ӽ�¼��ǰͨѶ¼�����ı���
}Contact;

void LoadContact(Contact* ps);
void InitContact(Contact* ps);
void AddContact(Contact* ps);
void ShowContact(const Contact* ps);
void DelContact(Contact* ps);
void SearchContact(const Contact* ps);
void ModifyContact(Contact* ps);
void SortContact(Contact* ps);
void DestoryContact(Contact* ps);
void SaveContact(Contact* ps);