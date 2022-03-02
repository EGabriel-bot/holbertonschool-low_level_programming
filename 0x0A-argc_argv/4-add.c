#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 *@argc: argument count
 *@argv: argument vector
 * Return: Returns the addition of numbers
 * if theres not a number in the operation return Error
 */
int main(int argc, char *argv[])
{
	int res, sum = 0;
	int a1, b1;

	for (a1 = 1; a1 < argc; a1++)
	{
		for (b1 = 0; argv[a1][b1] != '\0'; b1++)
		{
			if (argv[a1][b1] < '0' || argv[a1][b1] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res = atoi(argv[a1]);
		sum += res;
	}
	printf("%d\n", sum);
	return (0);
}
