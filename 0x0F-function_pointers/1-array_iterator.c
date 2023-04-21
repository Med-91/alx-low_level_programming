#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - prints array's elements according to a function
 * @array: input array
 * @size: size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}

