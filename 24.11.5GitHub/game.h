#pragma once
#define _CRT_SECURE_NO_WARNINGS
//game.h

//引用库函数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 3
#define COL 3

//目录函数的声明
int content();
//初始化数组函数声明
void beginch(char ch[ROW][COL], int row, int col);

//棋盘函数的声明
void board(char ch[ROW][COL], int row, int col);

//玩家落子函数声明
void boardparyer(char ch[ROW][COL], int row, int col);


//电脑落子函数声明
void boardcom(char ch[ROW][COL], int row, int col);

//判断胜利函数声明
char iswin(char ch[ROW][COL], int row, int col);

