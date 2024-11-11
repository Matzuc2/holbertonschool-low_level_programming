#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
        {
                return (NULL);
        }
	char *p;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	p[0] = c;
	for (i = 0; i < size; i++)
	p[i] = c;

	return (p);
}
