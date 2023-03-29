#include "main.h"

/**
 * reverse_array - function that reverse an array of integer
 * @a: input array of integer
 * @n: input integer
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}

