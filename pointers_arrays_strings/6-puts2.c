#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
*puts2 - prints every two numbers in a string
*@str : char str (pointer)
*/
void puts2(char *str)
{
	int len = 0;
	int i;


	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
