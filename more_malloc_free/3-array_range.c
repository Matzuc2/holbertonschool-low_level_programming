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
	int *p;
	int i;
	int j;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = min + j;
	}
	return (p);
}

