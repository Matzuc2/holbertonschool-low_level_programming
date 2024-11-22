#include "main.h"
/**
 * _isupper - returns 1 if the character is in uppercase
 * @c: int n.
 * Return: Always 1 or 0.
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
