#define _CRT_SECURE_NO_WARNINGS
//game.c
#include "game.h"


//目录函数的实现
int content()
{
	int i = 0;
	while (1)
	{
		printf("###########################\n");
		printf("######  1.开始游戏  #######\n");
		printf("######  2.退出游戏  #######\n");
		printf("请输入->");
		scanf("%d",&i);
		if (i == 1)
			return 1;
		else if (i == 2)
			return 2;
		else
			printf("输入错误\n");
		continue;
	}
}


//数组初始化的实现
void beginch(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i <row; i++)
	{
		int j = 0;
		for (j = 0; j <col; j++)
		{
			ch[i][j] = ' ';
		}
	}
}


//
void board(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i <row; i++)
	{
		int j = 0;
		for (j = 0; j <col; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j<col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j <col; j++)
		{
			printf("---");
			if (j<col - 1)
				printf("|");
		}
		printf("\n");
	}
}



//玩家落子函数
void boardparyer(char ch[ROW][COL], int row, int col)
{
	printf("行和列之间用空格分隔\n请落子->\n");
	while (1)
	{
		scanf("%d %d", & row, & col);
		if (row>= 1 &&row<= 3 &&col>= 1 &&col<= 3)
		{
			if (ch[row - 1][col - 1] == ' ')
			{
				ch[row - 1][col - 1] = '*';
				break;
			}
			if (ch[row - 1][col - 1] != ' ')
				printf("这里已有落子");
		}
		else
			printf("输入错误");
	}
}


//电脑落子函数
void boardcom(char ch[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (ch[x][y] == ' ')
		{
			ch[x][y] = '#';
			break;
		}
		if (ch[x][y] != ' ')
		{
			printf("这里已有落子\n");
				continue;
		}
	}

}
//判断胜利函数声明
//返回*玩家赢
//返回#电脑赢
//返回.平局
//返回？继续游戏
char iswin(char ch[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i<col; i++)
	{
		//判断三行
		if (ch[i][0] == ch[i][1] && ch[i][2] == ch[i][0] && ch[i][1] != ' ')
			return ch[i][1];

	}
	for (i = 0; i <row; i++)
	{
		//判断三列
		if (ch[0][i] == ch[1][i] && ch[2][i] == ch[0][i] && ch[1][i] != ' ')
			return ch[1][i];
	}
	//判断对角
	if (ch[0][0] == ch[1][1] && ch[2][2] == ch[0][0] && ch[1][1] != ' ')
		return ch[1][1];
	if (ch[0][2] == ch[1][1] && ch[2][0] == ch[0][2] && ch[1][1] != ' ')
		return ch[1][1];
	int tmp = fullboard(ch, row, col);
	if (tmp == 1)
		return '.';
	if (tmp != 1)
		return '?';
}

//判断是否棋盘满？
int fullboard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<ROW; i++)
	{
		for (j = 0; j <COL; j++)
		{
			if (ch[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}