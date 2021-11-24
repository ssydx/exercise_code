#include "game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for(j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("  ");//避免错位
	for (i = 1; i <= row; i++)//打印列号
	{
		printf("%d ", i);
	}
	printf("\n");//打印行号后换行
	for (i = 1; i <= row; i++)//打印行
	{
		int j = 0;
		printf("%d ", i);//打印该行前先打印其行号
		for (j = 1; j <= col; j++)//打印一行的所有元素
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");//每打印一行就换行
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}



int calmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
	//ASCII码值，'1'-'0'=1，计算八个坐标处的字符分别减'0'后相加即得总雷数，化简得八个坐标字符相加减8*'0'
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)//排雷一次就让win加一，当win=非雷坐标总个数时说明排雷成功
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = 0;
				count = calmine(mine, x, y);
				show[x][y] = count + '0';//count是数字，加字符'0'转换为对应的雷个数（因为一个坐标周围最多八个雷）
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功\n");
		printf("雷的布置图如下\n");
		DisplayBoard(mine, row, col);
	}
}