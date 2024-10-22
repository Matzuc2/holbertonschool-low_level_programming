#include "main.h"
/**
 * _abs - print the sign + or - depending of the number
 * Return: Always 0.
 * @n: int n.
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		n = 0;
		return (n);
	}
	else
	{
		return (-n);
	}
}
