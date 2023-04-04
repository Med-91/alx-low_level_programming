#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: input string
 * @needle: input substring
 * Return: the pointer of the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, boul;

	i = j = boul = 0;
	if (!needle[0] || !haystack[0])
		return (NULL);
	while (haystack[i])
	{
		if (needle[j] == haystack[i])
		{
			boul = 1;
			j++;
		}
		else
		{
			j = 0;
			boul = 0;
		}
		if (!needle[j] && boul)
			return (haystack + i - j + 1);
		i++;
	}

	return (0);
}

