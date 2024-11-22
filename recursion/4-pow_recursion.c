#include "main.h"
/**
*_pow_recursion - calcule la puissance de x^y;
*@x: int à power
*@y: int qui powe
*Return: retourne le int x powé par y
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
