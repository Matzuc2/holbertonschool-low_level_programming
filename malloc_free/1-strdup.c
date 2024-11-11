#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*which contains a copy of the string given as a parameter
*@str: string to copy
*Return: the ponter with copy of parameter str
*/

char *_strdup(char *str)
{
	char *p;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (; str[length] != '\0'; length++)
	{
	}
	length++;
	p = malloc(sizeof(char) * length);
	if (p == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
