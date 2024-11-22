#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
*puts_half - prints the second half of a string
*@str : char str (pointer)
*/
void puts_half(char *str)
{
	int len = 0;
	int len2 = 0;
	int i;


	while (str[len] != '\0')
	{
		len++;
		len2++;
	}


	for (i = 1; i < len; i++)
	{
		len--;
		if (len == i)
		{
			break;
		}
	}
	while (i < len2)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
