//将一句话的单词进行倒置，标点不倒置
#include <stdio.h>
#include <string.h>
void reword(char arr[], int start, int end)
{
	while (start<end)
	{
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);




	int start = 0;
	int end = strlen(arr)-1;
	reword(arr, start, end);
	int i = 0;

	while (arr[start])
	{
		end = start;
		while (arr[end] != ' ' && arr[end] != '\0')
		{
			end++;
		}
		reword(arr, start, end-1);
		start = end + 1;
	}

	for (i = 0; i <= end; i++)
	{
		printf("%c", arr[i]);
	}




	return 0;
}