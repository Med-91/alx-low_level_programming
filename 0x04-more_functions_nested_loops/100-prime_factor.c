#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	long int i = 2;
	long int c = 1231952, large = 1;

	while (i < c)
	{
		if (c % i == 0)
		{
			if (i >= large)
				large = i;
			c = c / i;
		}
		else
			i++;
	}
	printf("%ld\n", large);
	return (0);
}

