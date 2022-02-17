#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@t: pointer
 * Return: t.
 */
char *string_toupper(char *t)
{
	int i = 0;

	while (t[i] != '\0')
	{
		if (t[i] >= 'a' && t[i] <= 'z')
		{
			t[i] = t[i] - 32;
		}
		i++;
	}
	return (t);

}
