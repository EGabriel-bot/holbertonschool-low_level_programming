#include "main.h"

/**
 * print_alphabet - function to print the alphabet
 *
 *
 * Return: Si sale el alfabeto esta bien
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		_putchar(a);
	}

	_putchar('\n');

}
