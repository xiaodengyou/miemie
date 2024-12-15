#include "Á´±í.h"

SL* CreateSL(SLtype x)
{
	SL* newlist = (SL*)malloc(sizeof(SL));
	newlist->date = x;
	newlist->next = NULL;
	return newlist;
}


void SLPrint(SL* plist)
{
	SL* cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->date);
		cur = cur->next;
	}
}

void SLPushBack(SL** pplist, SLtype x)
{
	SL* newlist = CreateSL(x);
	if (*pplist == NULL)
	{
		*pplist = newlist;
	}
	else
	{
		SL* cur = *pplist;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newlist;
	}

}


void SLPushFount(SL** pplist, SLtype x)
{
	SL* newlist = CreateSL(x);
	newlist->next = *pplist;
	*pplist = newlist;
}



void SLPopBack(SL** pplist)
{
    if (pplist == NULL || *pplist == NULL) 
    {
        printf("Á´±íÎª¿Õ\n");
        return;
    }

    if ((*pplist)->next == NULL) 
    {
        free(*pplist);
        *pplist = NULL;
        return;
    }

    SL* cur = *pplist;
    SL* prev = NULL;
    while (cur->next) 
    {
        prev = cur;
        cur = cur->next;
    }
    free(cur);
    prev->next = NULL;
}




void SLPopFount(SL** pplist)
{

}