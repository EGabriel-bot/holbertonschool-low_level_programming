#include "main.h"

/**
 * print_line - prints a straight line
 *@n: variable of print_line
 * Return: if n is 0 or less, print new line
 */
void print_line(int n)
{
int l;

if (n > 0)
{
for (l = 0; l < n; l++)
{
_putchar('_');
}
}
_putchar('\n');
}
