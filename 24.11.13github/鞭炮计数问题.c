//���ұ�������ͬʱ��ʼ�ű��ڣ�
//��ÿ�� t1 ���һ�Σ�
//��ÿ�� t2 ���һ��, 
//��ÿ�� t3 ���һ�Σ�
//��ÿ�� t4 ���һ�Σ�ÿ�˸��� n�Ρ�
//��дһ������ fun��
//�˺��������Ǹ����β��ṩ��ֵ����ܹ��������ٴα�������Ϊ����ֵ���ء�
//ע�⵱��������ͬʱը�죬ֻ��һ����������һ���������ڵ�0��
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