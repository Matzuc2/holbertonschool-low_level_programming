#include "main.h"
/**
*guess - helper qui aide la fonction de base avec un nouv entier i
* @i: paramètre en plus pour vérifier quel nombre est la racine carré de n
* @n: paramètre pour lequel on doit découvrir la racine carré
* Return: retourne la recursion de guess car gues(i + 1)
*n'a pas été faite. jusqu'à ce que i * i == n
*/
int guess(int n, int i)
{
if (n < 0)
	return (-1);
if (i == n)
	return (-1);
if (n == 1)
	return (1);
if (i * i == n)
	return (i);

return (guess(n, i + 1));
}
/**
*_sqrt_recursion - donne la racine carré de n par récursion
* @n: paramètre pour lequel on veut découvrir la racine carré
* Return: retourne le résultat en partant de i = 2, en incrémentant de 1
* pour trouver si i * i fait n et donc si i est la racine carré de n
*/
int _sqrt_recursion(int n)
{
	return (guess(n, 2));
}
