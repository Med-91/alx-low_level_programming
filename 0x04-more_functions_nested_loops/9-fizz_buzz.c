#include <stdio.h>

/**
 * main - Fizz-Buzz entry point
 * Return: always 0
 */

int main(void)
{
	int i;

	printf("1 2");
	for (i = 3; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}

