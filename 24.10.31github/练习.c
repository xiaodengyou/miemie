//����1-100֮��9�ĸ���
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