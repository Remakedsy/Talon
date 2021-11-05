#include <stdio.h>
void LeapYear(int a)
{
	if ((0 == a % 4 && a % 100 != 0) || (0 == a % 400))
	{
		printf("%d年是闰年！\n", a);
	}
	else
	{
		printf("%d年不是闰年！\n", a);
	}
	return;
}

int main()
{
	int Year = 0;
	printf("请输入年份：");
	scanf_s("%d", &Year);

	LeapYear(Year);

	return 0;
}
