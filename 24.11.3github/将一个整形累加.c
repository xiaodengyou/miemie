//дһ�����������ǣ���һ��������ÿһ������ۼ�
//��������1569������1+5+6+9=21
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