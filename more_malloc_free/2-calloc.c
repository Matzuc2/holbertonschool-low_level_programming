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
	void *p = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == 0 || p == NULL)
	{
		return (NULL);
	}

	return (p);
}

