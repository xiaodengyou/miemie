#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int num = 2024 / n;
    if(2024 % n == 0)
    {
        ;
    }
    if(2024 % n != 0)
    num++;
    printf("%d",num);
    return 0;
}
