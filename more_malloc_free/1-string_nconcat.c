#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings but the parameter n define how many
*from s2.
*@s1: first string to copy
*@s2: second string to copy
*@n: number of bytes we want from s2
*Return: return the copy of s1 and s2 concatenated,
*plus terminated by null byte.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;

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
	if (n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	if (n >= j)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			p[i] = s2[j];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	for (j = 0; s2[j] != s2[n]; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
