#include "main.h"
#include <unistd.h>
/**
 * times_table - print the sign + or - depending of the number
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				if (b != 0)
				_putchar(' ');
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
