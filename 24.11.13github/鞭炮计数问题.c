//甲乙丙丁四人同时开始放鞭炮，
//甲每隔 t1 秒放一次，
//乙每隔 t2 秒放一次, 
//丙每隔 t3 秒放一次，
//丁每隔 t4 秒放一次，每人各放 n次。
//编写一个函数 fun，
//此函数功能是根据形参提供的值求出总共听到多少次鞭炮声作为函数值返回。
//注意当几个鞭炮同时炸响，只算一次响声，第一次响声是在第0秒
#include <stdio.h>
int fun(int n)
{
	int count = 0;
	int t = 0;
	for (t = 1; t <= 4*n; t++)
	{
		if (t <= n)
		{
			count++;
			continue;
		}
		else if (t % 2 == 0)
		{
			if (t % 4 == 0)
			{
				count++;
				continue;
			}
			count++;
			continue;
		}
		else if (t % 3 == 0)
		{
			count++;
			continue;
		}
	}
	return count;
}
int main()
{
	int n = 3;
	int count = fun(n);
	printf("%d", count);
	return 0;
}