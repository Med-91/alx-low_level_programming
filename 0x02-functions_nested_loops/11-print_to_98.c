#include <stdio.h>

/**
 * print_to_98 - fonction entry point
 * @n: input integer
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
			printf("%d, ", i);
		printf("\n");
	}
	else
	{
		for (int i = n; n > 98; i--)
			printf("%d, ", i);
		printf("\n");
	}
}

