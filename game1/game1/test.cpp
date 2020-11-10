//测试三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include"game.h"
void menu()
{
	printf("**************************************\n");
	printf("*********1: play     0 :exit**********\n");
	printf("**************************************\n");

}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//存放棋盘信息
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘

	while (1)
	{
		PlayMove(board,ROW,COL);//玩家下棋
		DisplayBoard(board, ROW, COL); //打印棋盘
		ret=IsWin(board,ROW,COL);//判断输赢
		if (ret!='C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL); //打印棋盘
		ret=IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢\n");
	}
	else if (ret=='Q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time (NULL));
	
	do 
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("您的选择有错误\n"); break;
		}
	
	
	} while (input);

}

int main()
{
	
	test();
	

	return 0;
}