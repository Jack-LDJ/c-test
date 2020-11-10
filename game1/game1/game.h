#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL],int cow,int col);
void DisplayBoard(char board[ROW][COL],int cow,int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//IsWin���Է�������״̬
//���Ӯ '*'
//����Ӯ '#'
//ƽ�� 'Q'
//���� 'C'
//
char IsWin(char board[ROW][COL],int row,int col);