#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *@size: variable
 *@c: second variable
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int cnt;
	char *ptr = malloc(size * sizeof(c));

		if (size == 0)
		{
			return ('\0');
		}

		for (cnt = 0; cnt < size; cnt++)
		{
			if (ptr == NULL)
			{
				return ('\0');
			}
			ptr[cnt] = c;
		}
		return (ptr);
}
