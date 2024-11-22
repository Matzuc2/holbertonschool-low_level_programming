#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - let the place for an array of ? type
*@nmemb: integer for define size of array
*@size: size of the type of elements for the array
*Return: return pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = nmemb * size;
	p = malloc(t);
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < t; i++)
	p[i] = 0;

	return (p);
}
