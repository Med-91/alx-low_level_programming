#include <stdio.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * _atoi: converts string to integer
 * @argc: The number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: 0 if succes,	1 if error
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
			if (*(argv[i] + j) > 57 || *(argv[i] + j) < 48)
			{
				printf("Error\n");
				return (1);
			}
	}
	for (i = 1; i < argc; i++)
	{
		sum += _atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}


/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 * Return: return an integer
 */

int _atoi(char *s)
{
	int num, val = 0, i = 0;
	int dig = 0, sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 57 && s[i] >= 48)
		{
			if (sign % 2)
			{
				num = -(s[i] - '0');
				val = val * 10 + num;
			}
			else
			{
				num = s[i] - '0';
				val = val * 10 + num;
			}
			dig = 1;
			if (s[i + 1] > 57 || s[i + 1] < 48)
				break;
		}
		else if (dig == 0 && s[i] == '-')
			sign++;
		i++;
	}
	if (s[i] == '\0' && dig == 0)
		return (0);
	return (val);
}

