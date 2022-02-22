#include "main.h"

/**
 * _strchr - locates the character in a string
 *@s: pointer to string
 *@c: character ocurrence
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
		if (s[cnt] == c)
		{
			return (s + cnt);
		}
	}
	return ('\0');
}
