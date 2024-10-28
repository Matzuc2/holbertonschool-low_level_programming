#include "main.h"


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
			for(h = 0; h < n; h++)
			{
				if(h == i)
				{
					_putchar(j);
				}
				else
				{
					_putchar(' ');
				}
			}
		_putchar('\n');
		}

}
