//计算两个数的最小公倍数 
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", & a, & b);
//	int i = 1;
//	使用取巧
//	while (1)
//	{
//		if ((b * i) % a == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", b * i);
//
//	暴力 
//	for(i = a&gt;b?a:b;;i++)
//	{
//		if(i % a == 0 && i % b == 0)
//		break;		
//	}
//	printf("%d",i);
//
//	return 0;
//}