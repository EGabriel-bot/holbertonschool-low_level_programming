#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@array: pointer to an array
 *@size: size of the array
 *@cmp: pointer to function to compare elemnts in array
 * Return: return -1 if no elemnt matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}

	return (i);
}



