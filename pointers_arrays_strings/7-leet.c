#include "main.h"
/**
*leet - Mozart composed his music not for the elite, but for everybody ?
*@str: return of pointer toward the original string in main
*Return: return value for leet
*/

char *leet(char *str)
{

	int i;

	for (i = 0;  str[i] != '\0'; i++)
	{
		str[i] = (str[i] == 'a' || str[i] == 'A') ? '4' : str[i];
		str[i] = (str[i] == 'e' || str[i] == 'E') ? '3' : str[i];
		str[i] = (str[i] == 'o' || str[i] == 'O') ? '0' : str[i];
		str[i] = (str[i] == 't' || str[i] == 'T') ? '7' :  str[i];
		str[i] = (str[i] == 'l' || str[i] == 'L') ? '1' : str[i];
	}
return (str);
}

