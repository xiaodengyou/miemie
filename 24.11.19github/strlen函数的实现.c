#include <stdio.h>
#include <assert.h>
int my_strlen(const char *arr)
{
	assert(arr);
	int i = 0;
	while (*arr++)
	{
		i++;
	}
	return i;
}
int main()
{
	char a[] = "sb";
	printf("%d\n", my_strlen(&a));
	return 0;
}