#include <stdio.h>

/**
 * main - Print single digit numbers
 *
 * Return: numbers print = success
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '8'; ++c)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}

	putchar('9');

	return (0);
}
