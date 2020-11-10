
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"threegame.h"
void menu()
{
	printf("*****************************************\n");
	printf("***********1:play    0:exit**************\n");
	printf("*****************************************\n");
}

void game()
{
	char ret = 0;
	char board[3][3] = {0};//3 3棋盘数组
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘s
	while (1)
	{
		
		PlayMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
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
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'Q')
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
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:game(); break;
			case 0:printf("您已退出游戏\n"); break;
			default:printf("您输入有误"); break;
		}
	} while (input);


}





int main()
{
	test();
	return 0;
}