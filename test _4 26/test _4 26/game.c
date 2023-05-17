#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//game.c中进行实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	/*讲数组 board初始化成空格*/
	int i = 0;
	int j = 0;
	/*三行*/
	for (i = 0; i < row; i++)
	{   /*三列*/
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';    /*将数组初始化为空格*/
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		// 打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1) 
		{
			for (j = 0; j < col; j++) 
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{   /*玩家下棋*/
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d %d", &x, &y);
		//判断 x y 坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)  /*为什么x是大于等于呢 因为是按照正常坐标进行安排的*/
		{
			if (board[x - 1][y - 1] ==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");


		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col) 
{    /*电脑下棋*/
	int x = 0;
	int y = 0;
	printf("电脑走:>");
	printf("\n");
	while (1)
	{
		int x = rand() % row;
	;   int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
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
			if (board[i][j] == ' ')
			{
				return 0;//返回0棋盘没满
			}
		}
	}
	return 1;//返回1棋盘满了
}
	
char IsWin(char board[ROW][COL], int row, int col)
{                                                        /*判断输赢 玩家赢 '*' 电脑赢'#' 平局 'Q' 继续'C'*/
	int i = 0;
	for (i = 0; i < row; i++)
	{   /*三行的判断*/
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{  /*三列的判断*/
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[2][i];
	}
	/*两条对角线的判断*/
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL))
	{ /*判断是否平局*/
		return 'Q';
	}
	/*继续游戏 */
	return 'C';
 }