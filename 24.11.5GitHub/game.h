#pragma once
#define _CRT_SECURE_NO_WARNINGS
//game.h

//���ÿ⺯��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 3
#define COL 3

//Ŀ¼����������
int content();
//��ʼ�����麯������
void beginch(char ch[ROW][COL], int row, int col);

//���̺���������
void board(char ch[ROW][COL], int row, int col);

//������Ӻ�������
void boardparyer(char ch[ROW][COL], int row, int col);


//�������Ӻ�������
void boardcom(char ch[ROW][COL], int row, int col);

//�ж�ʤ����������
char iswin(char ch[ROW][COL], int row, int col);

