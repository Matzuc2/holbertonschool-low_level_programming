#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - allocates memory for uncertain amount of data
*@b: data that we want to print
*Return: return the pointer to the new memory allocated with malloc
*/
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);

}
