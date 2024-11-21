#pragma once
//用来放置调用的函数
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 11
#define LIN 11

#define ROWS ROW-2
#define LINS LIN-2


//初始化数组
void iniboard(char board[ROW][LIN], int lin, int row, char x);
//设置雷函数
makemine(char board[ROW][LIN], int rows, int lins,int n);
//打印棋盘函数
void printboard(char board[ROW][LIN], int lins, int rows);
//判断雷
int my_judge(char mine[ROW][LIN],char show[ROW][LIN],int row,int lin,int n);
//置换mine和show
void change(char mine[ROW][LIN], char show[ROW][LIN], int row, int lin);