#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *@d: pointer to struct
 * Return: NULL if fails
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
