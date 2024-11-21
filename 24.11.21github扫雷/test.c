#define _CRT_SECURE_NO_WARNINGS
//game����������

#include "game.h"
void menu()
{
	printf("########################\n");
	printf("###      1.play      ###\n"); 
	printf("###      0.exit      ###\n"); 
	printf("########################\n");
}


void play()
{
	char mine[ROW][LIN] = {0};
	char show[ROW][LIN] = {0};
	//��ʼ������
	iniboard(mine, ROW,LIN,'0');
	iniboard(show, ROW, LIN, '#');
	

	//������
	int n = 0;
	printf("������Ҫ������>>\n");
	scanf("%d", &n);
	makemine(mine, ROWS, LINS,n);


	//��ӡ����
	printboard(show,ROWS,LINS);

	while (1)
	{
		//�û����
		int row = 0;
		int lin = 0;
		printf("���������꣬�к���֮���ÿո�ֿ�\n");
		scanf("%d %d", &row, &lin);

		//�ж���
		int x = my_judge(mine,show, row, lin,n);
		if (x == 9)
		{
			printf("�ȵ����ˣ���Ϸ����\n");
			printboard(show, ROWS, LINS);
			break;
		}
		//�������׵ĸ�������show��
		change(mine, show, row, lin);
		printboard(show, ROWS, LINS);
		//�ж�Ӯ
		if(x == 1)
		{
			printf("��ϲ��ʤ\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	do {
		srand((unsigned int)time(NULL));
		menu();
		printf("������>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}