#include <stdio.h>

/**
 * print_to_98 - fonction entry point
 * @n: input integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
		printf("\n");
	}
	else
	{
		for (i = n; n >= 98; i--)
			printf("%d, ", i);
		printf("\n");
	}
}

