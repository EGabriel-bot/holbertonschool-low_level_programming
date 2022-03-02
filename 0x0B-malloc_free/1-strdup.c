#include <stdlib.h>
#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size = strlen(str); 

	ptr = malloc (sizeof(char) * size);

	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	if(ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
