#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	printf("要好好学习吗？\n");
//	printf("要就输入1，不要就输入0\n");
//	printf("无论选择如何你都会是你自己\n");
//	scanf("%d", &a);
//	if (a == 1)
//	printf("好的offer");
//	else
//	printf("去做自己喜欢的事吧，学习困不住你的");
//	return 0;
//}//if else语句使用


//while循环例子
//#include<stdio.h>
//int main()
//{
//	int day=1;
//	while(day<7)
//	{
//		printf("放假，爽！！！%d\n", day);
//		day++;
//
//	}
//	if (day == 7)
//		printf("上学，惨！！！");
//	return 0;
//}


//这是课堂的例子
//int Add(int x,int y)
//{
//	int z;
//	z = x + y;
//		return z;
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//	Add(num1,num2);
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
 
 

////这是我自己的想法,创建一个单变量函数用以解决数学问题
//#include<stdio.h>
//Add(int x)
//{
//	int y;
//	y = 2 * x + 10;
//	return y;
//
//}
//int main()
//{
//	int num1;
//	scanf("%d", &num1);
//	int m=Add(num1);
//	printf("%d", m);
//
//	return 0;
//}
//////成功 开心



//数组的概念
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	printf("%d", arr[0]);
//	return 0;
//
//}


//当我要全部打印arr的所有元素时
#include<stdio.h>
int main()
	{
	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while(i<10)//因为这里的10和数组中不同，这里是顺序，数组中的顺序就是从零开始的，arr中的只能说是元素是什么
	{
		printf("%d\n", arr[i]);
		i++;
	}
		return 0;

	}




