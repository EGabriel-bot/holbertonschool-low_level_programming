#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory to an array using malloc
 *@nmemb: elements
 *@size: size of bytes
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	return (ptr);
}
