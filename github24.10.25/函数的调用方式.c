//���������ֵ��÷�ʽ����ֵ���úʹ�ַ����
#include <stdio.h>
//��дһ����ֵ���ã������a��b����ʱ��������һ��ֵ
int get_max(int a ,int b)
{
	int c = a < b ? b:a ;
	return c;
}
//��һ���Ǵ�ַ����
void Swap(int *x, int *y)
{
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}