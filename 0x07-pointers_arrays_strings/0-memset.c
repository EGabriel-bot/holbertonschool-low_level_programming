#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 *@s: pointer to buffer
 *@b: variable for our new value
 *@n: number of times executed
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt = 0;

	while (cnt < n)
	{
		s[cnt] = b;
		cnt++;
	}
	return (s);
}
