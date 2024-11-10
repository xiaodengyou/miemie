//爬一个楼梯可以一次上一层也可以一次上两层，求爬到第n个台阶要的步骤
#include<stdio.h>
int stairs(int n)
{
	int arr[20] = {1,1};
	if (n == 1 && n == 0)
	{
		return 1;
	}
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}
int main()
{
	int n = 6;
	printf("%d\n", stairs(n));
	return 0;
}