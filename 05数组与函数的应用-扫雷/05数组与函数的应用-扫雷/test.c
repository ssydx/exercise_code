#include "game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//ʹʵ�����̴�һȦ�Ա�������Խ��͸����ж�
	InitBoard(show, ROWS, COLS, '*');//ʹʵ�����̴�һȦ�Ա�������Խ��͸����ж�
	DisplayBoard(show, ROW, COL);//չʾ��ҿɼ����̣�����СһȦ������������ԭ����
	SetMine(mine, ROW, COL);//������
	DisplayBoard(mine, ROW, COL);//չʾ��̨�������̣�����СһȦ����ΧһȦ��ʼΪ0���ٸı䣩������������ԭ����
	FindMine(mine, show, ROW, COL);
}

void menu()
{
	printf("**************************\n");
	printf("******1.play 0.exit*******\n");
	printf("**************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}