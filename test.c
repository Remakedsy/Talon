#include <stdio.h>
void LeapYear(int a)
{
	if ((0 == a % 4 && a % 100 != 0) || (0 == a % 400))
	{
		printf("%d�������꣡\n", a);
	}
	else
	{
		printf("%d�겻�����꣡\n", a);
	}
	return;
}

int main()
{
	int Year = 0;
	printf("��������ݣ�");
	scanf_s("%d", &Year);

	LeapYear(Year);

	return 0;
}
