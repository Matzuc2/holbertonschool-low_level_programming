#include "main.h"
/**
*_strcmp - returns the difference of ASCII value of two strings
*@s1: first string variable to put in comparaison
*@s2: second string variable to put in comparaison
*Return: return the difference in ASCII of two differents characters in strings
*laisse moi écrire la description de la fonction sale pute
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		result = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			break;
		}
	}
return (result);
}
