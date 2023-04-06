#include "main.h"

int _prime(int i, int n);

/**
 * is_prime_number - determins if a number is prime
 * @n: input integer
 * Return: 1 if the input integer is a prime number
 *		0 otherwise return
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(2, n));
}

/**
 * _prime - fonction that help to determine if a number is prime
 * @n: input integer
 * @i: input increment
 * Return: 1 if prime number
 */

int _prime(int i, int n)
{
	int val = 1;

	if (i < n)
	{
		if (n % i == 0)
			return (0);
		val = _prime(i + 1, n);
	}
	return (val);

}
