#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: pointer to first string
 *@src: pointer to second string
 *@n: null byte variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int len = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	for (len = 0 ; len < n && src[len] != '\0' ; len++)
	{
		dest[count + len] = src[len];
	}
	dest[len + count] = '\0';

	return (dest);
}
