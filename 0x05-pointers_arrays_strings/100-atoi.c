#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 * Return: return an integer
 */

int _atoi(char *s)
{
	int val = 0, i = 0;
	int dig = 0, sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 57 && s[i] >= 48)
		{
			val = val * 10 + (-1 ^ sign) * s[i];
			sign = 0;
			dig = 1;
		}
		else if (s[i] == '-')
			sign++;
		i++;
		if (dig == 1 && s[i] > 57 && s[i] < 48)
			return (val);
	}
	if (s[i] == '\0' && dig == 0)
		val = 0;

	return (val);
}
