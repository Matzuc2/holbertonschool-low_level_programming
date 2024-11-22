#include "main.h"
/**
 * print_last_digit - print the sign + or - depending of the number
 * Return: return the last digit of n and assign it to r in 7-main.c.
 * @n: int n.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -(n % 10);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
