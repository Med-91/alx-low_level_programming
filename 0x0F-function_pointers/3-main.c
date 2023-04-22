#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - main function
 * @ac: number of programs arguments
 * @av: array of program's arguments
 * Return: always 0 (SUCCES)
 */

int main(int ac, char **av)
{

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
	return (0);
}

