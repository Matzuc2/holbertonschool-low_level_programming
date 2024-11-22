#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - print the alphabet ten times
 * Return: Always 0.
 * @c: int c.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

