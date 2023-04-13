#include <stdlib.h>
#include "main.h"

int *count_w(char *s);

/**
 * strtow - function that splits a string into words.
 * count_w - calculate number of wotrds of string and number of char
 * @str: input string
 * Return: a pointer to an array of strings (words)
 *	NULL if str == NULL or str == "" or if the function fails
 */

char **strtow(char *str)
{
	int i, j, k, b, *c;
	char **p;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);
	c = count_w(str);
	p = malloc((c[0] + 1) * sizeof(char *));
	if (p == NULL)
		return (p);
	for (i = 0; i < c[0]; i++)
	{
		p[i] = (char *)malloc((c[i + 1] + 1) * sizeof(char));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	i = j = b = 0;
	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] != ' ')
		{
			p[i][j] = str[k];
			j++;
			b++;
		}
		else if (b)
		{
			p[i][j] = '\0';
			i++;
			j = 0;
			b = 0;
		}
	}
	p[c[0]] = NULL;
	return (p);
}

/**
 * count_w - calculate the number of words in a string
 * @s: input string
 * Return: an array of integer, first element is the number of words,
 *	other elemnets are the number of character of eatch word
 */

int *count_w(char *s)
{
	int i, j, b, coun, boul;
	int *tab;

	boul = coun = 0;
	b = j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			if (boul == 0)
			{
				coun++;
				boul = 1;
			}
		}
		else if (boul)
			boul = 0;
	}
	tab = (int *)malloc((coun + 1) * sizeof(int));
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
			b++;
		else if (b)
			{
				tab[j + 1] = b;
				j++;
				b = 0;
			}
	}
	tab[0] = coun;
	return (tab);
}

