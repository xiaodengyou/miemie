//写一个函数作用是，将一个整形中每一项进行累加
//例：输入1569，返回1+5+6+9=21
#include <stdio.h>
int Digitsum(int n)
{
	if (n == 0)
		return 0;
	int sum = n % 10 + Digitsum(n / 10);
	return sum;
}
int main()
{
	int n = 1569;
	int sum = Digitsum(n);
	printf("%d", sum);
}