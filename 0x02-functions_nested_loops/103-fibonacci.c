#include <stdio.h>
/**
 * main - fonction entry point
 * Return: always 0
 */
int main(void)
{
	int  i;
	long sum = 2, num = 0, a = 1, b = 2;

	while (num <= 4000000)
	{
		num = a + b;
		a = b;
		b = num;
		if (num % 2 == 0)
			sum += num;
	}
	printf("%ld\n", sum);
	return (0);
}

