#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* ret = arr1;
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
//int main()
//{
//	char arr1[] = "qwer";
//	char arr2[] = "wasd";
//	printf("%s\n",my_strcpy(arr1, arr2));
//}