#include "function_pointers.h"
/**
*int_index - return first position in array for a value which is true
*considering the condition
*@array: pointer to array in main
*@size: size of the pointed array
*@cmp: pointer to function in main
*Return: return 0 is nothing is true
*return index i of array if a match is found with conditon
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int v = 1;
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == v)
		{
			return (i);
		}
	}
return (-1);
}
