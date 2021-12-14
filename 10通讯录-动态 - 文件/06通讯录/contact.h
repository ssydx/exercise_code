#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>
#include <errno.h>

//利用宏
#define DEFAULT_SIZE 1//默认初始容量，默认初始容量不要大于默认改变量
#define DEFAULT_CHANGE 2//默认每次改变量
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//联系人
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;//重命名
//通讯录
typedef struct Contact
{
	PeoInfo* data;//MAX个联系人
	int size;//已有联系人的个数
	int capacity;//增加记录当前通讯录容量的变量
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