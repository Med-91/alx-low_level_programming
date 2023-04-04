#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @to: input pointer
 * @s: input pointer to pointer
 */

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
		*(*s + i) = to[i];
	*(*s + i) = '\0';
}
