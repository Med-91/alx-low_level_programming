#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: input pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}

