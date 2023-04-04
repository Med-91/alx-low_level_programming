#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: input substring
 * Return: the pointer of the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	if (!needle[0])
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (needle[j] == haystack[i] && needle[j])
		{
			j++;
			i++;
		}
		if (!needle[j])
			return (haystack + i - j);
		i++;
		j = 0;
	}
	return (0);
}

