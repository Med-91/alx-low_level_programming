#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to a function used for comparaison
 * Return: index of element that muchs
 *		-1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		return (-1);
	}
	return (-1);
}

