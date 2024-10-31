//写一个计算字符串的函数用递归写
#include <string.h>
#include <stdio.h>
int str(char* x)
{
	if (*x == '\0')
		return 0;
	if (*x != '\0')
		return 1 + str(x + 1);
}
int main()
{
	char arr[] = "soaidowi";
	int longth = str(arr);
	printf("%d", longth);
	return 0;
}