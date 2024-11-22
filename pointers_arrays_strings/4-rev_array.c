#include "main.h"
#include <stdio.h>
/**
*reverse_array - reverse an array of int by the parameter n.
*@a: array of integers
*@n: number limit for an array of integers.
*/
void reverse_array(int *a, int n)
{

	int i;
	int len = 0;
	int temp;

	while (len < n)
	{
		len++;
	}
	len--;
	for (i = 0; i < len; i++)
	{
		temp = a[len];
		a[len] = a[i];
		a[i] = temp;
		len--;

	}
}

