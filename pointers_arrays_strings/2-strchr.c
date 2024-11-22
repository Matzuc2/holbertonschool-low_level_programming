#include "main.h"
#include <stdio.h>
/**
*_strchr - function that returns a string when pointer find c
*@s: string to search with
*@c: character to find
*Return: returns the characters found + the rest of the string
*/
char *_strchr(char *s, char c)
{
	int i;
	/*int j = 0;*/

	for (i = 0; s[i] != c ; i++)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
	}

	return (s + i);
}
