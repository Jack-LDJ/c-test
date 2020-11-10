#define _CRT_SECURE_NO_WARNINGS 1
#include"threegame.h"
#include<stdio.h>

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i=0;i<ROW;i++)
	{
		for (j=0;j<COL;j++)
		{
			board[i][j] = ' ';
		}
	}


}




void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i=0;i<ROW;i++)
	{
		for (int j=0;j<COL;j++)
		{
			printf("%c",board[i][j]);
			if (j<COL-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<ROW-1)
		{
			printf("------");
		}
		printf("\n");
	}


}

void PlayMove(char board[ROW][COL], int row, int col)
{
	int x;
	int y;
	
	while (1)
	{
		printf("玩家请下>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占\n");
				
			}
		}
		else
		{
			printf("坐标输入有误\n");
			
		}

	}


}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下>\n");
	int x;
	int y;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;

		}
	}
}
	int IsFull(char board[ROW][COL], int row, int col)
	{ for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
	
	}


	char IsWin(char board[ROW][COL], int row, int col)
	{
		
		for (int i = 0; i < ROW; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
			}

		}
		for (int j = 0; j < COL; j++)
		{
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			{
				return board[1][j];
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
		if (IsFull(board,ROW,COL)==1)
		{
			return 'Q';
		}
		return 'C';

	}