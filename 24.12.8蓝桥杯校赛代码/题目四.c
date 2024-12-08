#include <stdio.h>
int chake1(int n)
{
	int tmp = n;
	int g,s,b,q;
	g = n%10;
	n = n/10;
	s = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	q = n%10;
	n = tmp;
	if(g>=3||s>=3||b>=3||q>=3)
	{
		int max = g>s?g:s;
		max = max>b?max:b;
		max = max>q?max:q;
		int a = n*2-n;
		if(a>max)
		{
			return 10;
		}
		else
		return max;
	}
	return 1;
}
int chake2(int n)
{
	int tmp = n;
	int g,s,b,q;
	g = n%10;
	n = n/10;
	s = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	q = n%10;
	n = tmp;
	if(g>=3||s>=3||b>=3||q>=3)
	{
		int max = g>s?g:s;
		max = max>b?max:b;
		max = max>q?max:q;
		return max;
	}
	return 1;
}
int main()
{
	int num = 1;
	int count = 0;
	while(num < 1824)
	{
		int i = chake1(num);
		if(i == 1)
		{
		num += 1;
		count += 1; 
		}
		if(i == 10)
		{
		num *= 2;
		count += 10;
		}
		else
		{
		num += i;
		count += 3;
		}
	}
	while(num <= 2022)
	{
		int i = chake2(num);
		if(i == 1)
		{
		num += 1;
		count += 1; 
		}
		else
		{
		num += i;
		count += 3;
	}
	}
	printf("%d %d",num,count);
	return 0; 
}
