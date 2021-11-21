#include "game.h"

//三子棋



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
	DisplayBoard(board, ROW, COL);//数组实参仅需要数组名
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//加分号
}

int main()
{
	test();
	return 0;
}