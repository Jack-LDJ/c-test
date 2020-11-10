#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL],int cow,int col);
void DisplayBoard(char board[ROW][COL],int cow,int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//IsWin可以返回四种状态
//玩家赢 '*'
//电脑赢 '#'
//平局 'Q'
//继续 'C'
//
char IsWin(char board[ROW][COL],int row,int col);