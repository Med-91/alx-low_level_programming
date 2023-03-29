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
	while (cum < 2772)
	{
		n = rand() % 128;
		cum += n + '0';
		if (cum >= 2772)
			break;
		printf("%c", n + '0');
	}
	n = 2772 - (cum - n - '0');
	printf("%c\n", n);
	return (0);
}
