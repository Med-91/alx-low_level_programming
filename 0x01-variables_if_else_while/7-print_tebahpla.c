#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}

