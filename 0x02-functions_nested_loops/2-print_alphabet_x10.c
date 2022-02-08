#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: si printea 10 veces esta bien
 */
void print_alphabet_x10(void)
{
	char a;
	int c = 0;

	while (c <= 9)
	{
		c++;


		for (a = 'a'; a <= 'z'; ++a)
		{
			_putchar(a);


		}
		_putchar('\n');
	}

}
