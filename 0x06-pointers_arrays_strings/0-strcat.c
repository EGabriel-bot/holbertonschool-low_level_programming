#include "main.h"

/**
 * _strcat - check the code
 *@dest: pointer to first string
 *@src: pointer to second string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int len = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	for (len = 0; len < count && src[len] != '\0'; len++)
	{
		dest[count] = src[len];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
