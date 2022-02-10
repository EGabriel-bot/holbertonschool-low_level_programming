#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers to 98
 *@n: variable of print_to_98
 * Return: returns all natural numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; ++n)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > 98; --n)
			printf("%d, ", n);
	}
	printf("98\n");
}
