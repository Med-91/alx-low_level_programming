#include <stdio.h>
/**
 * main - fonction entry point
 * Return: always 0
 */
int main(void)
{
	int  i;
	long num, a = 1, b = 2;

	printf("1, 2, ");
	for (i = 3; i <= 50; i++)
	{
		num = a + b;
		a = b;
		b = num;
		printf("%ld", num);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

