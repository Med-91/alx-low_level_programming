#include "main.h"

int _sqrt(int i, int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer
 * Return: square root of a number (-1) if it doesn't exist
 */

int _sqrt_recursion(int n)
{
	int sq;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	sq = _sqrt(n, n);
	return (sq);
}

/**
 * _sqrt - fonction that help to find tha natural square of a number
 * @n: input integer
 * @i: input increment
 * Return: square root of a number -1 if it doesn't exist
 */

int _sqrt(int i, int n)
{
	int val = -1;

	if (i > 1)
	{
		if (i * i == n)
			val = i;
		else
			val = _sqrt(i - 1, n);
	}
	return (val);

}
