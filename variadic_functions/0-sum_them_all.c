#include <stdarg.h>
/**
*sum_them_all - sum all the incertain parameters of
*sumthemall function using variadic functions
*@n: parameter used to define how many parameters it will be
*Return: returning the addition of all parameters after n
*/
int sum_them_all(const unsigned int n, ...)
{
int calc = 0;
unsigned int i;
va_list args;
va_start(args, n);


	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		calc += va_arg(args, int);
	}
	va_end(args);

	return (calc);
}
