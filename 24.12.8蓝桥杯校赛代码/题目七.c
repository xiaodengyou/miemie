#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n = 0;
  scanf("%d",&n);
  printf("\n");
  int* arr = (int*)malloc(n*sizeof(int));
  int i = 0;
  for(;i<n;i++)
  {
      scanf("%d ",&arr[i]);
  }
  printf("\n");
  int max = 0;
  for(i = 0;i < n;i++)
  {
      if(arr[i] % 2 == 0)
      {
          max = max > arr[i]?max:arr[i];
      }
  }
  printf("%d",max);
  return 0;
}
