#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

 //在game.h函数进行声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove (char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//告诉我们四种游戏的状态
//玩家赢 - '*'
//电脑赢 - '#'
//平局   - 'Q'
//继续   - 'C'

char IsWin(char board[ROW][COL], int row, int col);
