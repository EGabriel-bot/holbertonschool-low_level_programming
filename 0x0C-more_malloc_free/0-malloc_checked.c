#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory
 *@b: unsigned int
 * Return: pointer to allocated memory
 * if malloc fails terminates process with value 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
