#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - print a name of a pointer char by passing with (*f)
*(void) which is a pointer to the function in main
*@name: pointer to char variable in main
*@f: pointer to function in main
*Return: returns nothing if edge case is true
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
