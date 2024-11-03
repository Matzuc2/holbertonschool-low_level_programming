#include "main.h"
/**
*string_toupper - convert any lowcase characters to uppercase characters
*@s: pointeur vers le char string d'origine
*Return: Retourne le pointeur passé en paramètre, s.
*/

char *string_toupper(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
