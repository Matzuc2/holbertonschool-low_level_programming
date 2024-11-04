#include "main.h"
/**
*_strspn - renvoie le nombre de cacactères de accept présents
*dans s
*@s: string pour comparer accept
*@accept: string à comparer à s
*Return: retourne le nombre de caractères similaires à s dans accept
*/
unsigned int _strspn(char *s, char *accept)
{

	int i;
	int j;
	int count = 0; /*compteur*/
	int found = 0; /*indice boolean*/

	for (i = 0; s[i] != '\0'; i++)
	{
		/*Je parcours mon string accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*Je mets mon indice à zéro avant ma comparaison*/
			found = 0;
			/*condition comparant mes deux strings*/
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
				break;
				/*je sors de accept si je trouve un caractère similaire à s*/
			}
		}
	if (found == 0)
	{
		break;
		/*si mon indice est 0 je sors de s*/
	}
}
return (count);
}
