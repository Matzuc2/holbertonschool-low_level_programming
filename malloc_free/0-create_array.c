#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
        	return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	p[0] = c;
	for (i = 0; i < size; i++)
	p[i] = c;

	return (p);
}
