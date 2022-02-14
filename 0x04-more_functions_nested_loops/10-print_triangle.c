#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: variable of print_triangle
 * Return: Returns a triangle depending on input size
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');

	}
}
