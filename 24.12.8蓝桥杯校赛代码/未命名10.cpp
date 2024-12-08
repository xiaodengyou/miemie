#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int seqmax = 0;
int count = 0;

typedef struct SeqList
{
    int* a;
    int size;
    int capacity;
} SL;

void SeqInit(SL* ps)
{
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 100;
    ps->a = (int*)malloc(ps->capacity * sizeof(int)); 
}

void check(SL* ps)
{
    if(ps->size == ps->capacity)
    {
        ps->capacity = ps->capacity * 2;
        int* tmp = (int*)realloc(ps->a, ps->capacity * sizeof(int));
        ps->a = tmp;
    }
}

void SeqPush(SL* ps, int x, int y)
{
    check(ps);
    
    ps->a[ps->size] = x;
    ps->a[ps->size + 1] = y;
    ps->size += 2;
}

void walk(int* x, int* y, char* seq)
{
    *x = 0;
    *y = 0;
    int i = 0;
    for(; i < seqmax; i++)
    {
        if(seq[i] == 'F')
            *x = *x + 1;
        if(seq[i] == 'L')
            *y = *y - 1;
        if(seq[i] == 'R')
            *y = *y + 1;
    }
}

int judge(int x, int y, SL* ps)
{
    int i = 0;
    for(; i < ps->size; i += 2) 
    {
        if(x == ps->a[i])
        {
            if(ps->a[i + 1] == y)
                return 0;
        }
    }
    count++;
    return 1;
}

int main()
{
    SL sl;
    SeqInit(&sl);
    char seq[1000];
    int n = 0;
    scanf("%d", &n);
    scanf("%s", seq);
    seqmax = strlen(seq) + 1; 
    int x = 0;
    int y = 0;
    int num = 0;
    for(num = 0; num < seqmax; num++)
    {
        char tmp = seq[num];
        if(seq[num] == 'F')
        {
            seq[num] = 'L';
            walk(&x, &y, seq);
            int j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = 'R';
            walk(&x, &y, seq);
            j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = tmp;
        }
        if(seq[num] == 'L')
        {
            seq[num] = 'F';
            walk(&x, &y, seq);
            int j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = 'R';
            walk(&x, &y, seq);
            j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = tmp;
        }
        if(seq[num] == 'R')
        {
            seq[num] = 'L';
            walk(&x, &y, seq);
            int j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = 'F';
            walk(&x, &y, seq);
            j = judge(x, y, &sl);
            if(j == 1)
            {
                SeqPush(&sl, x, y);
            }
            seq[num] = tmp;
        }
    }

    printf("%d", count);


    free(sl.a);
    return 0;
}
