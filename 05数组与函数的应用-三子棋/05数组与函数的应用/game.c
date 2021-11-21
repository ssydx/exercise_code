#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)//��ά������������ʡ��
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)//��ӡ������
		{
			printf(" %c ", board[i][j]);//��ӡ����
			if (j < col - 1)
			{
				printf("|");//��ӡ���ָ��������һ�в���ӡ
			}
		}
		printf("\n");//��ӡһ�����ݺ���
		if (i < row - 1)//ÿ��ӡһ�����ݺ��ӡ�ָ��У������һ�в���ӡ
		{
			for (j = 0; j < col; j++)//��ӡ�ָ���
			{
				printf("---");//��ӡ��ָ�
				if (j < col - 1)
				{
					printf("|");//��ӡ���ָ��������һ�в���ӡ
				}
			}
			printf("\n");//��ӡһ�зָ�����
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//������δ��ռ��
			{
				board[x - 1][y - 1] = '*';
				break;//���������ѭ��
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')//������δ��ռ��
		{
			board[x][y] = '#';
			break;//���������ѭ��
		}
	}
}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')//�пո�
			{
				return 0;//û��
			}
		}
	}
	return 1;//����
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}