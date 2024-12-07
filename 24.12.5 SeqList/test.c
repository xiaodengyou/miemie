#include "SeqList.h"

void test()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl,1);
	SeqListPushBack(&sl,2);
    
	SeqListPopBack(&sl);
	
	SeqListPrint(&sl);
	
	SeqListPushFront(&sl,6);

	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);

	SeqListPrint(&sl);
}


int main()
{
	test();
	return 0;
}