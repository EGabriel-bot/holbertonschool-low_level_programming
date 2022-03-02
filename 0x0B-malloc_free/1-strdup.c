#include <stdlib.h>
#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size = strlen(str); 

	ptr = malloc (sizeof(char) * size);

	if(ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size + 1; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
