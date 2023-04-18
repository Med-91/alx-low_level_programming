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
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("age: %0.6f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
	exit(1);
	printf("name: (nil)\n");
	printf("age: 0.000000\n");
	printf("owner: (nil)\n");
}

