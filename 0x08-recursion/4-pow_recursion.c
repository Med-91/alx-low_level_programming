#include "main.h"

/**
 * _pow_recursion - function that returns the value of x the power of y
 * @x: input integer
 * @y: input power integer
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);
	if (y >= 1)
		pow = x * _pow_recursion(x, y - 1);
	return (pow);
}

