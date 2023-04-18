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
	int i, s1, s2;
	char *str1, *str2;
	dog_t *d;

	s1 = s2 = 0;
	for (i = 0; name[i] != '\0'; i++)
		s1++;
	for (i = 0; owner[i] != '\0'; i++)
		s2++;
	d = malloc(sizeof(float) + 2 * sizeof(char *));
	if (d == NULL)
		return (NULL);
	str1 = malloc((s1 + 1) * sizeof(char));
	str2 = malloc((s2 + 1) * sizeof(char));
	if (str1 == NULL || str2 == NULL)
	{
		free(str1);
		free(str2);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		str1[i] = name[i];
	str1[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		str2[i] = owner[i];
	str2[i] = '\0';
	d->name = str1;
	d->age = age;
	d->owner = str2;
	return (d);
}

