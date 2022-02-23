#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *@s: pointer to first string
 *@accept: pointer to prefix
 * Return: the number of letters that match the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int cnt = 0;
	int cnt2 = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
		while (accept[cnt2] != '\0')
		{
			cnt2++;
			if (s[cnt2] == accept[cnt])
			{
				cnt2++;
				break;
			}
		}
	}
	return (cnt2);
}
