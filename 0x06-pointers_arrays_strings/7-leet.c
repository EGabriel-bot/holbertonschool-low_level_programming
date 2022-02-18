#include "main.h"

/**
 * leet - encodes string into 1337
 *@l: pointer to string
 * Return: l
 */
char *leet(char *l)
{
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int cnt = 0;
	int cntC = 0;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (l[cnt] != '\0')
	{
		for (cntC = 0; c[cntC] != '\0'; cntC++)
		{
			if (l[cnt] == c[cntC])
			{
				l[cnt] = n[cntC];
			}
		}
		cnt++;
	}
	return (l);
}
