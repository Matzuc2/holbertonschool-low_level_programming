#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * jack_bauer - print the sign + or - depending of the number
 */
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	while (hour < 24)
	{
	min = 0;
	while (min < 60)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		min++;
	}
	hour++;
	}
}
