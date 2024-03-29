#include <stdio.h>
#include <stdbool.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value:  is the value to search for
 * Return: return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int cert = false;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			cert = true;
			return (i);
		}
	}
	if (cert == false)
	{
		return (-1);
	}
	return (0);
}
