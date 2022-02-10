#include "main.h"

/**
 * print_last_digit - prints the last number
 *@l: variable of print_last_digit
 * Return: is the last digit
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
		l = l * (-1);

	_putchar(l + '0');

	return (l);
}
