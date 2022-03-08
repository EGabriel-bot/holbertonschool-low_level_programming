#include "dog"
#include <stdlib>

/**
 * free_dog - frees dogs
 *@d: pointer
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
