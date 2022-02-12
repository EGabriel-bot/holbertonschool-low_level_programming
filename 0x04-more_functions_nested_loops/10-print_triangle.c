#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: variable of print_triangle
 * Return: Returns a triangle depending on input size
 */
void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
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
