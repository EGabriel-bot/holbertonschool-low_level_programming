#include "main.h"

/**
 * more_numbers - prints 10 numbers from 0 to 14
 *
 * Return: numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
int a;

for (a = 0; a <= 9; ++a)
{
int n;
for (n = 0; n <= 14; ++n)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
