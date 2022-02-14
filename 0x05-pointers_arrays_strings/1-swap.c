#include "main.h"
/**
 * swap_int - swaps the value of a and b
 *@a: pointer to variable a
 *@b: pointer to variable b
 * Return: Returns the value of b as a and a as b
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
