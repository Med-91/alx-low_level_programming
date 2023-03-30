#include "main.h"
#include <stdio.h>
/**
 * str_len - function that return the lenght of a string
 * @str: input string
 * Return: lenght of the string
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * infinite_add - function that adds two numbers.
 * @n1: pinter to the first string
 * @n2: pinter to the first string
 * @r: pinter to the first string
 * @size_r: size of the result string
 * Return: pointer to the result string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, l1, l2, num1, num2, c = 0;

	l1 = str_len(n1);
	l2 = str_len(n2);
	r[size_r - 1] = '\0';
	if (l1 >= size_r || l2 >= size_r)
		return (NULL);
	for (i = 0; i < size_r - 1; i++)
	{
		if (l1 - 1 - i >= 0)
			num1 = n1[l1 - 1 - i] - '0';
		else
			num1 = 0;
		if (l2 - 1 - i >= 0)
			num2 = n2[l2 - 1 - i] - '0';
		else
			num2 = 0;
		if (!num1 && !num2 && !c)
			return (&(r[size_r - 2 - i + 1]));
		r[size_r - 2 - i] = (num1 + num2 + c) % 10 + '0';
		c = (num1 + num2 + c) / 10;
	}
	if (c != 0)
		return (NULL);
	return (r);
}

