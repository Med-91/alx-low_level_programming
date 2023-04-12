#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of commeand line arguments
 * @av: array of pointer to command line arguments
 * Return: a pointer to a new string, or NULL if it fails
 *	Returns NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, n, coun = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			coun++;
	}
	n = coun + ac + 1;
	str = (char *)malloc(n * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = k = 0;
	for (j = 0; j < n - 1; j++)
	{
		if (av[i][k] != '\0')
		{
			str[j] = av[i][k];
			k++;
		}
		else
		{
			str[j] = '\n';
			i++;
			k = 0;
			if (i == ac)
				break;
		}
	}
	str[n - 1] = '\0';
	return (str);
}

