#include "main.h"
#include <stdio.h>
/**
*_strpbrk - retourne le string s à partir du premier caractère corr
*espondant avec accept
*@s: chaîne à analyser
*@accept: chaîne contenant le premier caractère à faire corr
*-espondre à s
*Return: retourne la chaîne s dès qu'un caractère similaire à
*accept a été trouvé
*/
char *_strpbrk(char *s, char *accept)
{

	int i;
	int j = 0;
	int count = 0; /*compteur*/
	int found = 0; /*indice boolean*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			if (accept[i] ==  '\0')
			{
				return (NULL);
			}
		}
	}
}
