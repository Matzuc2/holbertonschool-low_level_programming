#include "main.h"
/**
 * print_diagonal - print __ in function of imput n
 * @n:int n
*/
void print_diagonal(int n)
{

	char j = '\\';
	int h;
	int i;
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (i = 0; i < n; i++)
		{
			for (h = 0; h < i; h++)
			{
				_putchar(' ');
			}
		_putchar(j);
		_putchar('\n');
		}

}
