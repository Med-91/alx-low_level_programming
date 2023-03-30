#include "main.h"
#include <stdio.h>
/**
 * low_to_up - function that convert a character to uppercas.
 * @c: input char
 * Return: uppercase character
 */

char low_to_up(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: input pointer to string
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i, j;
	char tab[] = " \n\t,;.!?\"(){}";

	str[0] = low_to_up(str[0]);
	for (i = 1; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(tab + j) != '\0'; j++)
			if (*(str + i - 1) == *(tab + j))
				*(str + i) = low_to_up(*(str + i));
	}
	return (str);
}

