#include "SeqList.h"

void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		SLDateType* tmp = realloc(ps->a, newcapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* ps, SLDateType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}



void SeqListPopBack(SL* ps)
{
	if(ps->size == 0)
	{
		printf("请先存放，才可以进行删除\n");
		assert(ps->size > 0);
	}
	else
	{
		//ps->a[ps->size - 1] = NULL;//可以不用，因为这个顺序表有效数字是size决定的。
		ps->size--;
	}
}


void SeqListPushFront(SL* ps, SLDateType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}



void SeqListPopFront(SL* ps)
{
	if (ps->size == 0)
	{
		printf("没有储存数据");
		assert(ps->size > 0);
	}

	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}