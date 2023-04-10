#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * _atoi: converts string to integer
 * @argc: The number of command line arguments
 * @argv: array containing the program command line arguments.
 * Return: 0 if succes,	1 if error
 */

int main(int argc, char **argv)
{
	int mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}

