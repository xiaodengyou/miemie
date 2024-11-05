#define _CRT_SECURE_NO_WARNINGS
//test.c

#include "game.h"


void game()
{
	int row = ROW;
	int col = COL;
	char tmp = '0';
	//构建一个二维数组用来落子
	char ch[ROW][COL];
	//进行初始化
	beginch(ch,ROW,COL);
	//打印棋盘
	board(ch, ROW, COL);
	while (1)
	{
		//玩家落子
		boardparyer(ch, ROW, COL);
		board(ch, ROW, COL);
		tmp = iswin(ch, ROW, COL);
		if (tmp != '?')
			break;

		//电脑落子
		boardcom(ch, row, col);
		board(ch, row, col);
		tmp = iswin(ch, row, col);
		if (tmp != '?')
			break;

	}
	if (tmp == '*')
	{
		printf("玩家获胜\n");
	}
	else if (tmp == '#')
	{
		printf("人机\n");
	}
	else if (tmp == '.')
	{
		printf("和电脑平局，你也是人机！\n");

	}
	board(ch, row, col);
}




int main()
{
	int row = ROW;
	int col = COL;
	srand((unsigned int)time(NULL));
	while (1)
	{
		int a = content();
		if (a == 2)
			break;
		if (a == 1)
		{
			game();
		}
	}
}