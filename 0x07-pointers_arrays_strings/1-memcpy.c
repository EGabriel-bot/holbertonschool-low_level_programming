#include "main.h"

/**
 *_memcpy - copies the memory area
 *@dest: pointer to our destination value
 *@src: pointer to our source value
 *@n: number of times to be executed
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt = 0;

	while (cnt < n)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	return (dest);
}
