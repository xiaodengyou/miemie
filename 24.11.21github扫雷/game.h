#pragma once
//�������õ��õĺ���
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 11
#define LIN 11

#define ROWS ROW-2
#define LINS LIN-2


//��ʼ������
void iniboard(char board[ROW][LIN], int lin, int row, char x);
//�����׺���
makemine(char board[ROW][LIN], int rows, int lins,int n);
//��ӡ���̺���
void printboard(char board[ROW][LIN], int lins, int rows);
//�ж���
int my_judge(char mine[ROW][LIN],char show[ROW][LIN],int row,int lin,int n);
//�û�mine��show
void change(char mine[ROW][LIN], char show[ROW][LIN], int row, int lin);