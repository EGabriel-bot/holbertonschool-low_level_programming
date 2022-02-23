#include "main.h"

/**
 * _strlen_recursion - get length of a string using recursion
 *@s: pointer to string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (s[cnt] == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(&s[cnt] + 1));
}
