#include <stdio.h>
/**
 * main - main fonction
 * Return: always 0
 * combination ( ij km)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{

			for (m = 0; m < 10; m++)
			{
			if ((i * 10 + j) < (k * 10 + m))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(m + '0');
				if ((i != 9) || (j != 8) || (k != 9) || (m != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}

