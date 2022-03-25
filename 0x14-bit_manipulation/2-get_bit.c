#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index given to get the bit
 * Return: bit at that given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	val = (((n >> index) & 1));

	return (val);
}
