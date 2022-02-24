#include "main.h"

/**
 * sqr_check - checks for a square number
 *@n: variable for our input number
 *@num: variable for the number that is to be checked
 * Return: if the number is squared return that number
 */
int sqr_check(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		return (sqr_check(n, num + 1));
	}
}

/**
 * _sqrt_recursion - checks for natural square root
 *@n: variable for our input number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqr_check(n, 1));
}
