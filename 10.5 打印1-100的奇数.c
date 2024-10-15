#include<stdio.h>
int main()
{
	int a = 1;
	for (; a < 100; a++)
	{
		if (a % 2 == 1)
			printf("%d\n", a);
	}
	return 0;
}