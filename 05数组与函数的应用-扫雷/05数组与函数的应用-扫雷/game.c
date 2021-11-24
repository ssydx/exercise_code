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
	printf("  ");//�����λ
	for (i = 1; i <= row; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");//��ӡ�кź���
	for (i = 1; i <= row; i++)//��ӡ��
	{
		int j = 0;
		printf("%d ", i);//��ӡ����ǰ�ȴ�ӡ���к�
		for (j = 1; j <= col; j++)//��ӡһ�е�����Ԫ��
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");//ÿ��ӡһ�оͻ���
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
	//ASCII��ֵ��'1'-'0'=1������˸����괦���ַ��ֱ��'0'����Ӽ���������������ð˸������ַ���Ӽ�8*'0'
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)//����һ�ξ���win��һ����win=���������ܸ���ʱ˵�����׳ɹ�
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը��\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = 0;
				count = calmine(mine, x, y);
				show[x][y] = count + '0';//count�����֣����ַ�'0'ת��Ϊ��Ӧ���׸�������Ϊһ��������Χ���˸��ף�
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n");
		printf("�׵Ĳ���ͼ����\n");
		DisplayBoard(mine, row, col);
	}
}