#include <stdio.h>
int IaPrime(int n)
{
	int i = 3;
	for (i = 2; i < n;)
	{
		if (n % i == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
int main()
{
	int i = 2024;
	for (; i > 0; i--)
	{
		int IP = IaPrime(i);
		if (IP == 1)
		{
			if (2024%i == 0)
			{
				printf("%d", i);
				break;
			}
		}
	}


	return 0;
}