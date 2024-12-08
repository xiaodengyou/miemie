#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for(;i<=2024;i++)
	{
		if((i^2024)<2024)
		count++;
	}
	printf("%d",count);
	return 0;
}
