#include "main.h"
/**
 * print_square - print __ in function of imput n
 * @size:int size
*/
void print_square(int size)
{
	char j = '#';
	int i;
	int h;

		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				for (h = 0; h < size; h++)
				{
					_putchar(j);
				}
			_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
