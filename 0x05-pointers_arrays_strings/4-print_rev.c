#include "main.h"
/**
 * print_rev - prints a string in reverse
 *@s: variable that points to string
 * Return: Returns the string in reverse
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	while (counter)
	{
		_putchar (s[--counter]);
	}
	_putchar ('\n');
}
