//дһ��������������ڼ���쳲��������е�ֵ
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib1(int n)
{
	if (n <= 2)
		return 1;
	else 
		return fib1(n - 1)+fib1(n - 2);
}
//�ݹ�ķ�ʽ���кܶ��ظ�����Ч�ʵ���
//������ѭ���ķ�ʽ���м���
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