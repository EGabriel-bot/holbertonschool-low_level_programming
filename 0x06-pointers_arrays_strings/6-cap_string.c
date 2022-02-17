#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@c:pointer of a string
 * Return: c
 */
char *cap_string(char *c)
{
	int in;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if ((c[i - 1] >= 0 && c[i - 1] <= 47) || (c[i - 1] >= 58 && c[i - 1] <= 63))
			{
				if (!(c[i - 1] == 45))
				{
					c[i] = c[i] - 32;
				}
			}
			else if (c[i - 1] == 123 || c[i - 1] == 125)
			{
				c[i] = c[i] - 32;
			}


		}
	}
	return (c);
}
