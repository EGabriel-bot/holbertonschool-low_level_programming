#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - prints duplicate of string
 *@str: pointer to the string that we want to duplicate
 * Return: Duplicated string if success and NULL if memory failed
 */
char *_strdup(char *str)
{
	int size;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);
	ptr = malloc((size * sizeof(char)) + 1);

	for (i = 0; i < size; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = str[i];
	}
	return (ptr);
}
