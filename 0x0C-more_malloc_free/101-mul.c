#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two positive numbers.
 * _puts - function that prints a string, followed by a new line
 * @ac: number of pragram's arguments
 * @av: array of program's arguments
 * Return: 0 if success
 */

int  main(int ac, char *av[])

{
	int c1, i, c2;
	char *p;

	if (ac != 3)
	{
		_puts("Error");
		exit(98);
	}
	c1 = is_all_digit(av[1]);
	c2 = is_all_digit(av[2]);
	if (c1 == 0 || c2 == 0)
	{
		_puts("Error");
		exit(98);
	}
	p = str_mul(av[1], av[2]);
	for (i = 0; p[i] != '\0'; i++)
		if (p[i] != '0')
		{
			printf("%s\n", &(p[i]));
			free(p);
			return (0);
		}
	free(p);
	printf("0\n");
	return (0);
}

/**
 * str_mul - multiply tow infinite number (string)
 * @s1: input first string
 * @s2: input second string
 * Return: pointer to resolt string
 */

char *str_mul(char *s1, char *s2)
{
	int i, j, c, num1 = 0, num2 = 0;
	int n1 = _strlen(s1), n2 = _strlen(s2);
	char *p1, *sum;

	p1 = malloc((n1 + n2 + 1) * sizeof(char));
	sum = malloc((n1 + n2 + 1) * sizeof(char));
	if (p1 == NULL || sum == NULL)
	{
		_puts("Error");
		exit(98);
	}
	_memset(p1, '0', n1 + n2);
	_memset(sum, '0', n1 + n2);
	p1[n1 + n2] = '\0';
	sum[n1 + n2] = '\0';
	for (i = 0; i < n2; i++)
	{
		c = 0;
		_memset(p1, '0', n1 + n2);
		num2 = s2[n2 - 1 - i] - '0';
		for (j = 0; j < n1; j++)
		{
			num1 = s1[n1 - 1 - j] - '0';
			p1[n1 + n2 - 1 - j - i] = ((num2 * num1 + c) % 10) + '0';
			c = (num2 * num1 + c) / 10;
		}
		p1[0] = c + '0';
		sum = infinite_add(p1, sum, sum, n1 + n2);
	}
	free(p1);
	return (sum);
}

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * _putchar: prints character
 * @str: input pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * is_all_digit - function that checks if a string is only composed by digits
 * @s: input string
 * Return: Returns 1 if all characters are digits
 *	Returns 0 otherwise
 */

int is_all_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 57 || s[i] < 48)
			return (0);
	}
	return (1);
}

/**
 * _strlen - function that calculate the number of character of string
 * @str: input string
 * Return: number of character of the string
 *	0 if str is NULL
 */

int _strlen(char *str)
{
	int i, coun = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		coun++;
	return (coun);
}

/**
 * infinite_add - function that adds two numbers of the same size of byte.
 * @n1: pointer to the first sitring
 * @n2: pointer to the second string
 * @r: pointer to the result string
 * @size_r: size of the result string
 * Return: pointer to the result string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, l1, l2, num1, num2, c = 0;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	for (i = 0; i < size_r; i++)
	{
		num1 = n1[l1 - 1 - i] - '0';
		num2 = n2[l2 - 1 - i] - '0';
		r[size_r - 1 - i] = (num1 + num2 + c) % 10 + '0';
		c = (num1 + num2 + c) / 10;
	}
	return (r);
}
/**
 * _memset - function that fills memory with a constant byte.
 * @s: input string
 * @b: input character
 * @n: input number of byte to fill
 * Return: pointer to the output string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
