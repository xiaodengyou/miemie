#include <stdio.h>
void print()
{
	char arr[9] = { 0 };
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		arr[i] = ' ';
	}
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int  mid = (left + right) / 2;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		int  i1 = i;
		for(; i1 >= 0; i1--)
		{
			arr[mid] = 'A';
			arr[mid + i1] = 'A';
			arr[mid - i1] = 'A';
		}


		int i2 = i;
		for(; i2 > 0; i2--)
		{
			int j1 = 0;
			for (j1 = 0; j1 < 9; j1++)
			{
				if (arr[j1] != ' ')
					arr[j1]++;
			}
		}


		for (j = 0; j < 9; j++)
		{
			printf("%c", arr[j]);
		}
		printf("\n");
	}
}
int main()
{
	print();
	return 0;
}