//计算1-100之间9的个数
#include <stdio.h>
int main()
{
	int b = 0;
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 10 == 9)
			b++;
		if (a / 10 == 9)
			b++;
	}
	printf("%d", b);
	return 0;
}