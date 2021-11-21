#include "game.h"

//������



void menu()
{
	printf("**************************************\n");
	printf("**************1.play 0.exit***********\n");
	printf("**************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = ' ';
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);//����ʵ�ν���Ҫ������
	while (1)
	{
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
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
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//�ӷֺ�
}

int main()
{
	test();
	return 0;
}