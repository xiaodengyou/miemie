#define _CRT_SECURE_NO_WARNINGS
//game的流程主体

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
	//初始化数组
	iniboard(mine, ROW,LIN,'0');
	iniboard(show, ROW, LIN, '#');
	

	//设置雷
	int n = 0;
	printf("请输入要多少雷>>\n");
	scanf("%d", &n);
	makemine(mine, ROWS, LINS,n);


	//打印棋盘
	printboard(show,ROWS,LINS);

	while (1)
	{
		//用户点击
		int row = 0;
		int lin = 0;
		printf("请输入坐标，行和列之间用空格分开\n");
		scanf("%d %d", &row, &lin);

		//判断雷
		int x = my_judge(mine,show, row, lin,n);
		if (x == 9)
		{
			printf("踩到雷了，游戏结束\n");
			printboard(show, ROWS, LINS);
			break;
		}
		//将附近雷的个数放入show中
		change(mine, show, row, lin);
		printboard(show, ROWS, LINS);
		//判断赢
		if(x == 1)
		{
			printf("恭喜获胜\n");
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
		printf("请输入>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}