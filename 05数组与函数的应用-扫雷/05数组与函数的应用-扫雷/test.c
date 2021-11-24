#include "game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//使实际棋盘大一圈以避免数组越界和复杂判断
	InitBoard(show, ROWS, COLS, '*');//使实际棋盘大一圈以避免数组越界和复杂判断
	DisplayBoard(show, ROW, COL);//展示玩家可见棋盘，传参小一圈，但数组仍是原数组
	SetMine(mine, ROW, COL);//设置雷
	DisplayBoard(mine, ROW, COL);//展示后台设置棋盘，传参小一圈（外围一圈初始为0后不再改变），但数组仍是原数组
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}