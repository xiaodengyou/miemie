#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int hanoi(int n, char a, char b, char c, int step)
{
	if (n == 1)
	{
		printf("%c->%c\n", a, c);
		return step + 1;
	}
	step = hanoi(n - 1, a, c, b, step);
	printf("%c->%c\n", a, c);
	step++;
	step = hanoi(n - 1, b, a, c, step);
	return step;
}
int main()
{
	int n = 0;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	int step = 0;
	scanf("%d", &n);
	int i = hanoi(n, a, b, c, step);
	printf("%d", i);

	return 0;

}