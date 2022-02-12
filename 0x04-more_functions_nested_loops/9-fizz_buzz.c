#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 *
 * Return: If the number is a multiple of 3 or 5 put FizzBuzz
 * if number is a multiple of 3 print Fizz and if its multiple of 5
 * print Buzz
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100 ; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if (n % 3 && n % 5)
		{
			printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");


	return (0);
}
