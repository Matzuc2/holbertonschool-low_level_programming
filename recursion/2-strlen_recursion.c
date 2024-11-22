#include "main.h"
/**
*_strlen_recursion - compte le nombre de charactères dans un string.
*@s: string pour lequel on doit retourner la valeur
*Return: on retourne le résulat de la fonction elle-même.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
