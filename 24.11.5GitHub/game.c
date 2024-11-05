#define _CRT_SECURE_NO_WARNINGS
//game.c
#include "game.h"


//Ŀ¼������ʵ��
int content()
{
	int i = 0;
	while (1)
	{
		printf("###########################\n");
		printf("######  1.��ʼ��Ϸ  #######\n");
		printf("######  2.�˳���Ϸ  #######\n");
		printf("������->");
		scanf("%d",&i);
		if (i == 1)
			return 1;
		else if (i == 2)
			return 2;
		else
			printf("�������\n");
		continue;
	}
}


//�����ʼ����ʵ��
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



//������Ӻ���
void boardparyer(char ch[ROW][COL], int row, int col)
{
	printf("�к���֮���ÿո�ָ�\n������->\n");
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
				printf("������������");
		}
		else
			printf("�������");
	}
}


//�������Ӻ���
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
			printf("������������\n");
				continue;
		}
	}

}
//�ж�ʤ����������
//����*���Ӯ
//����#����Ӯ
//����.ƽ��
//���أ�������Ϸ
char iswin(char ch[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i<col; i++)
	{
		//�ж�����
		if (ch[i][0] == ch[i][1] && ch[i][2] == ch[i][0] && ch[i][1] != ' ')
			return ch[i][1];

	}
	for (i = 0; i <row; i++)
	{
		//�ж�����
		if (ch[0][i] == ch[1][i] && ch[2][i] == ch[0][i] && ch[1][i] != ' ')
			return ch[1][i];
	}
	//�ж϶Խ�
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

//�ж��Ƿ���������
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