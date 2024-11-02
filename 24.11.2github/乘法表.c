#define _CRT_SECURE_NO_WARNINGS
//写一个函数输入行和列，打印对应的乘法表
#include<stdio.h>

void print_table(int n)
{
	 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);

		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}