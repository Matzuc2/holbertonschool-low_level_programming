#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
*_puts - print the string
*@str : char str
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

