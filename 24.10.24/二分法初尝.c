//#define _CRT_SECURE_NO_WARNINGS
//
////��һ�����������в��������ֵn�������������������±�
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int right = sizeof(arr)/sizeof(arr[1]);
//	int left = 0;
//	int mid = 0;
//	scanf("%d", &n);
//	for (;left<=right;)
//	{
//		mid = (left + right) / 2;
//		if (n < arr[mid])
//		{
//			right = mid;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid;
//		}
//
//		else if (n = arr[mid])
//		{
//			printf("%d", mid);
//			break;
//		}
//		if (right < left)
//		{
//			printf("��������������������");
//			break;
//		}
//	}
//	return 0;
//}