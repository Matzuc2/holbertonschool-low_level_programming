#include "main.h"
/**
*print_rev - print the string
*@s : char str
*/
void print_rev(char *s)
{
	int len = 0;


	while (s[len] != '\0')
	len++;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
		_putchar('\n');
}
