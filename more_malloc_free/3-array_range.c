#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - allocate and create space for an array of min value
*and max
*@min: minimum value for array
*@max: maximum value for array
*Return: return the array
*/

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
	}
	p = malloc(sizeof(int) * i);
	if (p == NULL)
		return (NULL);
	for (i = min ; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}

