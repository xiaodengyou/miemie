#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b = 1;
int ncheng(int a)
{
	if (a != 1)
	{
		ncheng(a - 1);
		return b = b * a;
	}
	return 1;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int x = ncheng(n);
	printf("%d", x);

	//int b = 1;
	//for(b=1;b&lt;=n;b++)
	//{
	//   b=b*n;
	//}
	return 0;
}