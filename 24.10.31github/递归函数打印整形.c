//输入一个整形一个一个把他的数字打印出来
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int x)
{
	if (x % 10 != 0)
	{
		print(x / 10);
		printf("%d ", x % 10);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}