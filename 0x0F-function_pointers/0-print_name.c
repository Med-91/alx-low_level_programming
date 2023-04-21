#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: input name
 * @f: input pointer to function
 *
 */

void print_name(char *name, void(*f)(char *))
{
	if (f)
		f(name);
}

