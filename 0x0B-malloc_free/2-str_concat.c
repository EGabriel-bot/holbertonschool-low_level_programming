#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatanates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 * Return: Concatanated string if success NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, cnt, i;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);
	ptr = malloc((size1 + size2 * sizeof(char)) + 1);

	for (cnt = 0; cnt <= size1; cnt++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[cnt] = s1[cnt];
		i = cnt;
	}
	for (cnt = 0; cnt < size2; cnt++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = s2[cnt];
		i++;
	}
	return (ptr);
}
