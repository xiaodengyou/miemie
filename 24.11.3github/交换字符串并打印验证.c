#include <stdio.h>
//编写一个函数，作用是交换一个字符串的所有字符
int my_strlen(char* str)
{
	int count = 0;
	while ( *str !='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	//先用循环的方式进行解题
	/*int left = 0;
	int right = my_strlen(str)-1;
	for (; left < right;)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}*/

	//再用递归的方式进行解题
	int left = 0;
	int right = my_strlen(str)-1;
	char tmp = str[left];
	str[left] = str[right];
	str[right] = '\0';
	if (right>1)
	{
		reverse_string(str + 1);
	}
	str[right] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	int a = my_strlen(arr);
	reverse_string(arr);
	for (int i = 0; i < my_strlen(arr);)
	{
		printf("%c\n", arr[i]);
		i++;
	}
	return 0;

}