#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int grade;

	printf("�п�J���Z:");
	scanf_s("%d", &grade);

	if (grade >= 60)
	{
		printf("Passed\n");
	}
	else
	{
		printf("Failed\n");
	}

	system("pause");
	return 0;
}