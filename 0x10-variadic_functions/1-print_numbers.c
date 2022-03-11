#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt = 0;
	va_list ap;

	va_start (ap, n);

	if(separator == NULL)
	{
		return;
	}

	for (cnt = 0; cnt < n; cnt++)
	{
		printf ("%s, %d",separator, va_arg(ap, int));
	}
	
	va_end(ap);
	printf("\n");
}
