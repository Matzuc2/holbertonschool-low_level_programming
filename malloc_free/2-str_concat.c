#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings.
*@s1: first string to copy
*@s2: second string to copy
*Return: return the copy of s1 and s2 concatenated,
*plus terminated by null byte.
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	len = j += i;
	len++;
	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
