#include<stdio.h>
int main()
{
	int a = 1024;
	int b = 2024;
	int i = 0;
	for(i = 1;;i++)
	{
		if((2024*i)%1024 == 0)
		{
			printf("%d",2024*i);
			break;
		}
	}
	return 0;
}
