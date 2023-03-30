#include "main.h"


/**
 * rot13 - function that encodes a string using rot13.
 * @str: input pointer to string
 * Return: pointer to the modified string
 */

char *rot13(char *str)
{
	int i, j;
	char tab_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (str[i] == tab_1[j])
			{
				str[i] = tab_2[j];
				break;
			}
	}
	return (str);
}

