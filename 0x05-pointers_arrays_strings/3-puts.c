#include "main.h"

/**
 * _puts - check the code
 *@str: pointer to the variable that contains the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
