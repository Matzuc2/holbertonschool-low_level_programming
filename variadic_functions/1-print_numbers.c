#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - print all numbers after the n using
*variadics functions
*@separator: pointer to separator in main, destined
*to separate each number for clarity
*@n: print all arguments equal to the number of n;
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			if (i < n - 1)
			printf("%c ", *separator);
		}
	}
	printf("\n");
	va_end(args);
}
