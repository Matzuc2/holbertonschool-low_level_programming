#include "main.h"
/**
*prime - helper pour rajouter le paramètre i qui se compare à n
*@n: variable n passé en paramètre pour savoir s'il est premier ou pas
*@i: variable pour comparer n
*Return: prime s'appelle récursivement pour tester tous les i jusqu'à n
* sauf si n % i = 0
*/
int prime(int n, int i)
{
	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0 && n / i != n)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
/**
* is_prime_number - function qui utilise prime
* pour déterminer si n est premier ou non
* @n: variable n passé en paramètre pour savoir s'il est premier ou pas
* Return: prime s'appelle récursivement pour tester tous les i jusqu'à n
* sauf si n % i = 0
*/
int is_prime_number(int n)
{

	return (prime(n, 1));
}
