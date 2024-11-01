//写一个函数用来计算第几个斐波那契数列的值
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib1(int n)
{
	if (n <= 2)
		return 1;
	else 
		return fib1(n - 1)+fib1(n - 2);
}
//递归的方式会有很多重复计算效率低下
//所以用循环的方式进行计算
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 2;
	int j = 0;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (n < 2)
		{
		j = 1;
		return j;
		}
		if (i > 2)
		{
			c = a + b;
			int d = c;
			a = b;
			b = d;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib2(n);
	printf("%d", ret);
	return 0;
}