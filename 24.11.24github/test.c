#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char getGrade(int score);
int main()
{
	int score;
	printf("请输入学生成绩(0-100)：");
	scanf("%d", &score);
	char grade = getGrade(score);
	if (grade != 'E')
		printf("成绩等级为:%c\n", grade);
	else
		printf("输入有误，请检查成绩范围。\n");
	return 0;
}
char getGrade(int score)
{
	if (90 <= score && score <= 100) {
		return 'A';
	}
	else if (80 <= score && score <= 89) {
		return 'B';
	}
	else if (70 <= score && score <= 79) {
		return 'C';
	}
	else if (60 <= score && score <= 69) {
		return 'D';
	}
	else if (score < 60) {
		return 'F';
	}
	else {
		return 'E';
	}
}