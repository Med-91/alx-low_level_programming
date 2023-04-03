# include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: input character
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	s = NULL;
	return (s);
}


