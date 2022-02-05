#include <stdio.h>

/**
 * main - Print single digit numbers
 *
 * Return: numbers print = success
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; ++c)
	{
		putchar(c);
		putchar(',');
	}

	putchar('\n');

	return (0);
}
