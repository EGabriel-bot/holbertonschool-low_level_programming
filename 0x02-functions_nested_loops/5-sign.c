#include "main.h"

/**
 * print_sign - check the code.
 * @n: variable of our fuction.
 * Return: 1 if is greater than 0, 0 if its equal to 0
 * and -1 if its less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	return (0);
}
