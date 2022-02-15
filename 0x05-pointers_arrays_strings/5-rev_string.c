#include "main.h"
/**
 * rev_string - prints a string in reverse
 *@s: variable that points to string
 * Return: Returns the string in reverse
 */
void rev_string(char *s)
{
	int counter = 0;
	int rev = 0;
	char store;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter--;
	while (rev < counter)
	{
		store = s[rev];
		s[rev] = s[counter];
		s[counter] = store;
		rev++;
		counter--;
	}
}
