#include "contact.h"


void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SIZE * sizeof(PeoInfo));
	if (!(ps->data))
	{
		;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SIZE;
}

static void ChangeCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)//如果联系人个数等于通讯录容量则增加容量
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + DEFAULT_CHANGE) * sizeof(PeoInfo));
		if (ptr)
		{
			ps->data = ptr;
			ps->capacity += DEFAULT_CHANGE;//容量加扩充值
			printf("增加容量成功\n");
		}
		else
		{
			printf("增加容量失败\n");
		}
	}
	else if (ps->capacity - ps->size == DEFAULT_CHANGE)
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity - DEFAULT_CHANGE) * sizeof(PeoInfo));
		if (ptr)
		{
			ps->data = ptr;
			ps->capacity -= DEFAULT_CHANGE;//容量加扩充值
			printf("减少容量成功\n");
		}
		else
		{
			printf("减少容量失败\n");
		}
	}
}

void AddContact(Contact* ps)
{
	//检测通讯录容量，满则增
	ChangeCapacity(ps);
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);//ps指向的成员data的第ps->size个联系人的名字，放进数组不需要取地址
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));//注意此处是数字，需要取地址
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;//联系人个数加一
	printf("添加成功\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "住址");//此处都是字符串
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);//此处数age是数字
		}
	}
}

static int FindByName(const Contact* ps, const char* pname)//该函数只能在本文件使用，用于支持其他功能函数
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, pname))
			return i;
	}
	return -1;
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的联系人的名字;>");
	scanf("%s", name);
	//查找要删除的联系人的位置
	int pos = FindByName(ps, name);
	//删除该联系人或没有查找到
	if (-1 == pos)
	{
		printf("联系人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < (ps->size - 1); j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
		ChangeCapacity(ps);
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex, 
			ps->data[pos].tele, 
			ps->data[pos].addr);
	}
}

void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人的名字:>");
	scanf("%s", name);
	FindByName(ps, name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}

int cmp_by_name(const void* e1, const void* e2)//按名字
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)//按年龄
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;//两种找结构体成员的方法都可以
														   //但要注意.和->的优先级高于*
														   //因此将其括起来
}

int cmp_by_sex(const void* e1, const void* e2)//按名字
{
	return strcmp(((PeoInfo*)e1)->sex, ((PeoInfo*)e2)->sex);
}

int cmp_by_tele(const void* e1, const void* e2)//按名字
{
	return strcmp(((PeoInfo*)e1)->tele, ((PeoInfo*)e2)->tele);
}

int cmp_by_addr(const void* e1, const void* e2)//按名字
{
	return strcmp(((PeoInfo*)e1)->addr, ((PeoInfo*)e2)->addr);
}

void swap(char* buf1, char* buf2, int width)
{
	int k = 0;
	for (k = 0; k < width; k++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort_plus(void* base, int sz, int width, int(*pf)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int count = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (pf((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
			count = 0;
		}
		if (count)
		{
			break;
		}
	}
}

void SortContact(Contact* ps)
{
	int mode = 0;
	int (*pfa[6])(const void*, const void*) = { 0,cmp_by_name,cmp_by_age,cmp_by_sex,cmp_by_tele,cmp_by_addr };
	printf("排序模式: 1.名字  2.年龄  3.性别  4.电话  5.地址  0.退出\n");
	printf("请输入按什么排序:>");
	scanf("%d", &mode);
	if (!mode)
	{
		printf("退出排序\n");
	}
	else
	{
		bubble_sort_plus(ps->data, ps->size, sizeof(ps->data[0]), pfa[mode]);//传入结构体数组，联系人个数，结构体大小，函数指针
		printf("排序成功\n");
	}
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
