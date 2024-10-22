#include "main.h"
/**
 * print_sign - print the sign + or - depending of the number
 * Return: Always 0.
 * @n: int n.
 */
int print_sign(int n)
{


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
