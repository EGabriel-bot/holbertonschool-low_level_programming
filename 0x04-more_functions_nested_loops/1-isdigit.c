#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 *@c: variable of _isdigit
 * Return: returns 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}
