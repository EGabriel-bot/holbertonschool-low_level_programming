#include "variadic_functions.h"

/**
 * print_numbers - print
 *@separator: string separators
 *@n: number of integers passed
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt = 0;
	va_list ap;

	va_start(ap, n);


	for (cnt = 0; cnt < n; cnt++)
	{
		printf("%d", va_arg(ap, int));

		if (cnt != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
