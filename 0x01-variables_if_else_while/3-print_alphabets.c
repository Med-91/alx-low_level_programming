#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	printf("%c", x);
	for (x = 'A'; x <= 'Z'; ++x)
	printf("%c", x);
	printf("\n");
	return (0);
}

