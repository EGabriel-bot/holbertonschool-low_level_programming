#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: variable of print_diagonal
 * Return: if n is 0 or less only prints new line
 */
void print_diagonal(int n)
{
int l;
int a;

if (n > 0)
{
for (l = 0; l < n; l++)
{
for (a = 0; a < l; a++)
_putchar(' ');
_putchar('\\');
if (l == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
