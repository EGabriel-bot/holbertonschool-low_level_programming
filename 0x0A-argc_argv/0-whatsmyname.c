#include <stdio.h>

/**
 * main - check the code
 *@argc: argument count
 *@argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	return (0);
}
