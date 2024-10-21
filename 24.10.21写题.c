#define _CRT_SECURE_NO_WARNINGS
//写出n！
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int njc = 1;
//	scanf("%d", &n);
//	for (m = 1; m <= n; m++)
//	{
//		njc *= m;
//	}
//	printf("%d", njc);
//	return 0;
//}



//写出1！+2！...10！
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//    int m = 0;
//	int njc = 1; 
//		int sum = 0;
//	for (int a = 1; a <= 3; a++)
//	{
//		njc = 1;
//		for (m = 1; m <= a; m++)
//		{
//			njc *= m;
//		}
//		sum += njc;
//	}
//	printf("%d", sum);
//	return 0;
//}


//第二种优化方案,基于当要算3！时，可以用2！*3完成
#include<stdio.h>
int main()
{
	int m = 0;
	int njc = 1;
	int sum = 0;
	for (m = 1; m <= 3; m++)
	{
		njc *= m;
		sum += njc;
	}
	printf("%d", sum);
	return 0;
}