#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - print element of an array passing
*by a pointer function
*@array: pointer to the array in main
*@size: size of the array
*@action : pointer to function which you have to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
