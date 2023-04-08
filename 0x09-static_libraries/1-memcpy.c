# include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: output pointer
 * @src: input poiter
 * @n: number of bytes to copy
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

