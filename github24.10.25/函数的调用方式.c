//函数有两种调用方式，传值调用和传址调用
#include <stdio.h>
//先写一个传值调用，这里的a和b输入时都是输入一个值
int get_max(int a ,int b)
{
	int c = a < b ? b:a ;
	return c;
}
//下一个是传址调用
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