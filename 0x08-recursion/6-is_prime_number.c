#include "main.h"

/**
 * is_prime_number - checks if input int is prime number
 *@n: variable for input number
 * Return: 1 if its a prime otherwise return 0
 */
int is_prime_number(int n)
{

	if (n < 0)
	{
		return (0);
	}
	else if ((n % 2 != 0) && (n / 3 != 0) && (n % 5 != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
