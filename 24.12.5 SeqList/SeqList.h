#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 1000
//typedef int SLDateType;//�������Ϊ�������˳������ֱ�Ӹ��Ĵ洢����
//
////������̬˳���
//typedef struct SeqList 
//{
//	SLDateType a[N];
//	int size;
//}SL;
////��̬����ȱ�㣬�����˷ѿռ䣬С�˲�����
//
//
//��̬˳���
//����
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a ;
	int size;      //ʵ���ж������ݱ�����
	int capacity;  //����ʵ���ܴ���ٿռ������Ĵ�С
}SL;


//������ʵ��
void SeqListPrint(SL* ps);
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);

void SeqListCheckCapacity(SL* ps);
void SeqListPushBack(SL* ps, SLDateType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDateType x);
void SeqListPopFront(SL* ps);
