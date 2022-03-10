#include "function_pointers.h"

/**
 *array_iterator - function for a parameter on each element of an array.
 *@size: size of the array
 *@array: pointer to the array
 *@action: pointer to the function that we want to use
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
