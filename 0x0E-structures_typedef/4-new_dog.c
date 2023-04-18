#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @age: input age
 * @name: input name
 * @owner: input owner
 * Return: pointer to a struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(float) + 2 * sizeof(char *));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

