#include "main.h"

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
			num = s[i] - '0';
			val = val * 10 + num;
			dig = 1;
		}
		else if (dig == 0 && s[i] == '-')
			sign++;
		if (dig == 1 && (s[i] > 57 || s[i] < 48))
			break;
		i++;
	}
	if (s[i] == '\0' && dig == 0)
		return (0);
	if (sign % 2 == 0)
		return (val);
	else
		return (-val);
}

