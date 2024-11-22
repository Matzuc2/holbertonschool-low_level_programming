#include "main.h"
/**
 * _isdigit - returns 1 if the character is a digit
 * @c: int c.
 * Return: Always 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
