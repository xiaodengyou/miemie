#include <stdio.h>
int main()
{
    char arr[1000];
    char arr1[7] = "LANQIAO";
    scanf("%s",&arr);
    int n = 0;
    for(;;n++)
    {
        if(arr[n] == '\0')
        break;
    }
    int i = 0;
    int j = 0;
    for(;i <= n;i++)
    {
        if(arr1[j] == arr[i])
        {
            j++;
        }
        if(j == 6)
        {
            printf("YES");
            break;
        }
    }
    if(j != 6)
    printf("NO");
    return 0;
}
