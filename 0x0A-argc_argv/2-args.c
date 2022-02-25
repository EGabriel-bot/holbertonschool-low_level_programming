#include <stdio.h>

/**
 * main - print all arguments it receives
 *@argc: argument count
 *@argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
