//��һ���������һ��һ�����бȶԣ����ǰ��������ں���Ľ��н���
#include<stdio.h>
int max(int a, int b)
{
	if (a& gt; b)
		return a;
	else
		return b;
}
void change(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int i = 0;
	int j = 0;
	int f = 0;
	int arr[5] = { 1,2,3,5,4 };
	for (i = 0; i<4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[j]< arr[j + 1])
				continue;
			else
			{
				change( &arr[j], &arr[j + 1]);
				continue;
			}
		}
	}
	for (f = 0; f <5; f++)
	{
		printf("%d\n", arr[f]);
	}
	return 0;
}