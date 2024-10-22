#include <stdio.h>
#include "main.h"
/**
 * _isalpha - print the alphabet ten times
 * Return: Always 0.
 * @c: int c.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
