#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 *@s: pointer to the string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int idx = 0;

	if (s[idx] != '\0')
	{
		_putchar(s[idx]);
		_puts_recursion(&s[idx + 1]);
	}
	else
	_putchar('\n');
}

