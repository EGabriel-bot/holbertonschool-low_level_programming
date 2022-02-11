#include "main.h"


/**
 * print_square - prints square using #
 *@size: size variable for print_square
 * Return: if 0 or less print new line
 */
void print_square(int size)
{
	int a;
	int h;

	if (size < 0)
	{
		for (a = 0; a < size; a++)
		{
			for (h = 0; h < a; h++)
				_putchar('#');


			if (a == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

