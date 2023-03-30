#include "main.h"


/**
 * leet - function that encodes a string into 1337.
 * @str: input pointer to string
 * Return: pointer to the modified string
 */

char *leet(char *str)
{
	int i, j;
	char tab_1[] = "aeotl";
	char tab_2[] = "AEOTL";
	char tab_3[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == tab_1[j] || str[i] == tab_2[j])
				str[i] = tab_3[j];
	}
	return (str);
}

