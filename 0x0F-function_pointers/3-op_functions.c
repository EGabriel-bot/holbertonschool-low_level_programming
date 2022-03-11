#include "3-calc.h"

/**
 * op_add - adds two integers
 *@a: first number
 *@b: second number
 * Return: Always 0.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 *@a: first number
 *@b: second number
 * Return: Always 0.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *@a: first number
 *@b: second number
 * Return: Always 0.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 *@a: first number
 *@b: second number
 * Return: Always 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two integers
 *@a: first number
 *@b: second number
 * Return: Always 0.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
