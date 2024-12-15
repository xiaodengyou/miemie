#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef int SLtype;

typedef struct SList
{
	struct SList* next;
	SLtype date;
}SL;

void SLPrint(SL* plist);

void SLPushBack(SL** pplist, SLtype x);

void SLPushFount(SL** pplist, SLtype x);

SL* CreateSL(SLtype x);

void SLPopBack(SL** pplist);
void SLPopFount(SL** pplist);