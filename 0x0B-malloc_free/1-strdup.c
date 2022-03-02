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
	char *ptr;
	int i;
	int size = strlen(str);

	ptr = malloc(sizeof(char) * size + 1);

	if(ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
