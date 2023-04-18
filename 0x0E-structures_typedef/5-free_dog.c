#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: input pointer
 */

void free_dog(dog_t *d)
{
	free(d);
}

