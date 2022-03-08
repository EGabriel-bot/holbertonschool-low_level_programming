#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  creates a new dog.
 *@name: name of dog
 *@age: age of god
 *@owner: owner of dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(new));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * strlen(name));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * strlen(owner));

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;


	strcpy(new->name, name);
	strcpy(new->owner, owner);

	return (new);
}
