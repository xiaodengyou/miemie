#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	printf("Ҫ�ú�ѧϰ��\n");
//	printf("Ҫ������1����Ҫ������0\n");
//	printf("����ѡ������㶼�������Լ�\n");
//	scanf("%d", &a);
//	if (a == 1)
//	printf("�õ�offer");
//	else
//	printf("ȥ���Լ�ϲ�����°ɣ�ѧϰ����ס���");
//	return 0;
//}//if else���ʹ��


//whileѭ������
//#include<stdio.h>
//int main()
//{
//	int day=1;
//	while(day<7)
//	{
//		printf("�ż٣�ˬ������%d\n", day);
//		day++;
//
//	}
//	if (day == 7)
//		printf("��ѧ���ң�����");
//	return 0;
//}


//���ǿ��õ�����
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
 
 

////�������Լ����뷨,����һ���������������Խ����ѧ����
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
//////�ɹ� ����



//����ĸ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	printf("%d", arr[0]);
//	return 0;
//
//}


//����Ҫȫ����ӡarr������Ԫ��ʱ
#include<stdio.h>
int main()
	{
	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while(i<10)//��Ϊ�����10�������в�ͬ��������˳�������е�˳����Ǵ��㿪ʼ�ģ�arr�е�ֻ��˵��Ԫ����ʲô
	{
		printf("%d\n", arr[i]);
		i++;
	}
		return 0;

	}




