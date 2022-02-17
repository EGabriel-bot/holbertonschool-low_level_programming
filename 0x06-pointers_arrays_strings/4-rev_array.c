#include "main.h"

/**
 *reverse_array - reverse the content of an array of integers
 *@a: variable that points to array
 *@n: variable that defines the last position of array
 * Return: Returns the string in reverse
 */
void reverse_array(int *a, int n)
{
	int store;
	int counter = 0;
	int rev = n - 1;

	while (counter < rev)
	{
		store = a[counter];
		a[counter] = a[rev];
		a[rev] = store;
		rev--;
		counter++;
	}
}
