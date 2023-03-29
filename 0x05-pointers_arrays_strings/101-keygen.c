#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: always 0
 */

int main(void)
{
	int n = 0, cum = 0;

	srand(time(NULL));
	while (cum + '0' < 2772)
	{
		n = rand() % 91;
		cum += n + '0';
		printf("%c", n + '0');
	}
	n = 2772 - (cum - n);
	printf("%c", n + '0');
	printf(" \\0");
	return (0);
}
