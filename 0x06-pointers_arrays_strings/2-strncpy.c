#include "main.h"

/**
 * _strncpy - function that copies a string
 *@dest: variable for the first string
 *@src: variable for the second string
 *@n: n variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
