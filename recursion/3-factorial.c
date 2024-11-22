#include "main.h"
/**
*factorial - retourne le facteur d'un nombre entier
*@n: variable int passée en paramètre.
*Return: retourne le facteur du int passé en paramètre
*/

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
