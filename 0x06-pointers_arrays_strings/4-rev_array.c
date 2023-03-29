#include "main.h"

/**
 * _strcmp - function that compares two strings.
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

