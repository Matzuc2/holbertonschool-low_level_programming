#include "main.h"
/**
*leet - Mozart composed his music not for the elite, but for everybody mdr
*@str: return of pointer toward the original string in main
*Return: return value for leet
*/

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j = 0;

	for (i = 0;  str[i] != '\0'; i++)
	{

		for (j = 0; letters[j] != '\0'; j++)
		{
			if (letters[j] == str[i])
			{
				str[i] = numbers[j];
			}
		}
	}
return (str);
}

