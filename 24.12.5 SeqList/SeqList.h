#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 1000
//typedef int SLDateType;//这里就是为了让这个顺序表可以直接更改存储类型
//
////构建静态顺序表
//typedef struct SeqList 
//{
//	SLDateType a[N];
//	int size;
//}SL;
////静态的有缺点，大了浪费空间，小了不够存
//
//
//动态顺序表
//构建
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a ;
	int size;      //实际有多少数据被储存
	int capacity;  //数组实际能存多少空间容量的大小
}SL;


//函数的实现
void SeqListPrint(SL* ps);
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);

void SeqListCheckCapacity(SL* ps);
void SeqListPushBack(SL* ps, SLDateType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDateType x);
void SeqListPopFront(SL* ps);
