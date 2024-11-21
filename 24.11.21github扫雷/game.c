//game所需的函数

#include "game.h"
//初始化棋盘的函数
void iniboard(char mine[ROW][LIN], int row, int lin,char x)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < lin; j++)
		{
			mine[i][j] = x;
		}
	}
}

//

//打印棋盘的函数
void printboard(char board[ROW][LIN], int lins, int rows)
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= rows; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(i =1 ;i <= rows;i++)
	{
		printf("%d ", i);
		for (j = 1; j <= lins; j++)
		{
			printf("%c ", board[i][j]);
	  }
		printf("\n");
	}
}

//生成随机的雷
makemine(char board[ROW][LIN], int rows, int lins,int n)
{
	int count = n;
	while (count)
	{
		int i = rand() % (rows + 1);
		int j = rand() % (lins + 1);
		if (i != 0 && j != 0)
		{
			if (board[i][j] == '0')
			{
				board[i][j] = '1';
				count--;
			}
		}
	}
}


//判断雷
int my_judge(char mine[ROW][LIN], char show[ROW][LIN], int row, int lin,int n)
{
	if (mine[row][lin] == '1')
	{
		return 9;
	}
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i < ROWS; i++)
	{
		for (j = 1; j < LINS; j++)
		{
			if (show[i][j] != '#')
				count++;
		}
	}
	if (count == n)
		return 1;
	return 2;
}

//置换mine和show
void change(char mine[ROW][LIN], char show[ROW][LIN], int row, int lin)
{
	int i = 0;
	int j = 0;
	char count = '0';
	for (i = -1; i < 2; i++)
	{
		for (j = -1; j < 2; j++)
		{
			if (mine[row + i][lin + j] == '1')
				count += 1;
		}
	}
	show[row][lin] = count;
}