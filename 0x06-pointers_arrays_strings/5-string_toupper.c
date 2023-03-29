#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @str: input pointer to string
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}
	return (str);
}

