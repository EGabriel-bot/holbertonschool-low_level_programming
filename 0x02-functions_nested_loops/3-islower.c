#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: variable for _islower
 * Return: if c is lowercase is 1 its lowercase 0 otherwise
 *
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
