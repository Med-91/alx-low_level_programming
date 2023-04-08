#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to the first string
 * @src: pointer to the last string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	while (src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}
