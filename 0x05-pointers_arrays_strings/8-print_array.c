#include "main.h"
#include <stdio.h>

int _strlen(char *st);

/**
 * print_array - function that prints n elements of an array of integers
 * @a: input array
 * @n: input integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

