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
	if (ps->size == ps->capacity)//�����ϵ�˸�������ͨѶ¼��������������
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity + DEFAULT_CHANGE) * sizeof(PeoInfo));
		if (ptr)
		{
			ps->data = ptr;
			ps->capacity += DEFAULT_CHANGE;//����������ֵ
			printf("���������ɹ�\n");
		}
		else
		{
			printf("��������ʧ��\n");
		}
	}
	else if (ps->capacity - ps->size == DEFAULT_CHANGE)
	{
		PeoInfo* ptr = realloc(ps->data, (ps->capacity - DEFAULT_CHANGE) * sizeof(PeoInfo));
		if (ptr)
		{
			ps->data = ptr;
			ps->capacity -= DEFAULT_CHANGE;//����������ֵ
			printf("���������ɹ�\n");
		}
		else
		{
			printf("��������ʧ��\n");
		}
	}
}

void AddContact(Contact* ps)
{
	//���ͨѶ¼������������
	ChangeCapacity(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);//psָ��ĳ�Աdata�ĵ�ps->size����ϵ�˵����֣��Ž����鲻��Ҫȡ��ַ
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));//ע��˴������֣���Ҫȡ��ַ
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;//��ϵ�˸�����һ
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "סַ");//�˴������ַ���
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);//�˴���age������
		}
	}
}

static int FindByName(const Contact* ps, const char* pname)//�ú���ֻ���ڱ��ļ�ʹ�ã�����֧���������ܺ���
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
	printf("������Ҫɾ������ϵ�˵�����;>");
	scanf("%s", name);
	//����Ҫɾ������ϵ�˵�λ��
	int pos = FindByName(ps, name);
	//ɾ������ϵ�˻�û�в��ҵ�
	if (-1 == pos)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < (ps->size - 1); j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
		ChangeCapacity(ps);
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", name);
	FindByName(ps, name);
	int pos = FindByName(ps, name);
	if (-1 == pos)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

int cmp_by_name(const void* e1, const void* e2)//������
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)//������
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;//�����ҽṹ���Ա�ķ���������
														   //��Ҫע��.��->�����ȼ�����*
														   //��˽���������
}

int cmp_by_sex(const void* e1, const void* e2)//������
{
	return strcmp(((PeoInfo*)e1)->sex, ((PeoInfo*)e2)->sex);
}

int cmp_by_tele(const void* e1, const void* e2)//������
{
	return strcmp(((PeoInfo*)e1)->tele, ((PeoInfo*)e2)->tele);
}

int cmp_by_addr(const void* e1, const void* e2)//������
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
	printf("����ģʽ: 1.����  2.����  3.�Ա�  4.�绰  5.��ַ  0.�˳�\n");
	printf("�����밴ʲô����:>");
	scanf("%d", &mode);
	if (!mode)
	{
		printf("�˳�����\n");
	}
	else
	{
		bubble_sort_plus(ps->data, ps->size, sizeof(ps->data[0]), pfa[mode]);//����ṹ�����飬��ϵ�˸������ṹ���С������ָ��
		printf("����ɹ�\n");
	}
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
