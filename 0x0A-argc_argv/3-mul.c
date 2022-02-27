#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 * Return: Returns the multiplication of 2 numbers
 * if theres 3 numbers return Error
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
