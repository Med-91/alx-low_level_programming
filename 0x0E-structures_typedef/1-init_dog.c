#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: input pointer
 * @age: input age
 * @name: input name
 * @owner: input owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

