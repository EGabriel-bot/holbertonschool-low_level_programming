#include "main.h"

/**
 * _abs - computes the absolute value of an int
 *@n: variable of _abs
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
		return (n);

	}
	else if (n <= 0)
	{
		n = n * (-1);
		return (n);
	}


	return (0);
}
