#include "Á´±í.h"


void test1()
{
	SL* phead = NULL;
	SLPushBack(&phead, 1);
	SLPushBack(&phead, 2);
	SLPushBack(&phead, 3);
	SLPushBack(&phead, 4);

	SLPopBack(&phead);
	SLPopBack(&phead);
	SLPopBack(&phead);
	SLPrint(phead);
}

int main()
{
	test1();
	return 0;
}