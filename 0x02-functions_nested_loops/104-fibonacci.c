#include <stdio.h>
/**
 * main - fonction entry point
 * Return: always 0
 */
int main(void)
{
	int  i;
	unsigned long num, a = 1, b = 2;

	printf("1, 2, ");
	for (i = 0; i < 98; i++)
	{
		num = a + b;
		a = b;
		b = num;
		printf("%lu", num);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

