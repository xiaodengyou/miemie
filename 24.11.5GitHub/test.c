#define _CRT_SECURE_NO_WARNINGS
//test.c

#include "game.h"


void game()
{
	int row = ROW;
	int col = COL;
	char tmp = '0';
	//����һ����ά������������
	char ch[ROW][COL];
	//���г�ʼ��
	beginch(ch,ROW,COL);
	//��ӡ����
	board(ch, ROW, COL);
	while (1)
	{
		//�������
		boardparyer(ch, ROW, COL);
		board(ch, ROW, COL);
		tmp = iswin(ch, ROW, COL);
		if (tmp != '?')
			break;

		//��������
		boardcom(ch, row, col);
		board(ch, row, col);
		tmp = iswin(ch, row, col);
		if (tmp != '?')
			break;

	}
	if (tmp == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (tmp == '#')
	{
		printf("�˻�\n");
	}
	else if (tmp == '.')
	{
		printf("�͵���ƽ�֣���Ҳ���˻���\n");

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