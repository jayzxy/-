#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
		printf("*******************************\n");
		printf("******1. play  ****************\n");
		printf("******0. exit  ****************\n");
		printf("*******************************\n");
}
//游戏的实现
void game()
{
	//   数组——存放走出的棋盘信息
	char board[ROW][COL] = { 0 };  /*先初始化使得棋盘全为空格*/
	//初始化棋盘
	InitBoard(board, ROW, COL); /*initboard 初始化函数*/
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	/*下棋*/
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		/*判断玩家是否赢*/
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	/*电脑下棋*/
	ComputerMove(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	/*判断电脑是否赢*/
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
	{
		break;
	}
}
	if(ret=='*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()   /*游戏界面*/
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误,请从新选择!\n");
				break;
		}
	} 
	while (input);
}
int main()
{
 	test();
			
	return 0;
}