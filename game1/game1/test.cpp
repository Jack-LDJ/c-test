//������������Ϸ
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
	char board[ROW][COL] = {0};//���������Ϣ
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����

	while (1)
	{
		PlayMove(board,ROW,COL);//�������
		DisplayBoard(board, ROW, COL); //��ӡ����
		ret=IsWin(board,ROW,COL);//�ж���Ӯ
		if (ret!='C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL); //��ӡ����
		ret=IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ\n");
	}
	else if (ret=='Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time (NULL));
	
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0:printf("�˳���Ϸ\n"); break;
		default:printf("����ѡ���д���\n"); break;
		}
	
	
	} while (input);

}

int main()
{
	
	test();
	

	return 0;
}