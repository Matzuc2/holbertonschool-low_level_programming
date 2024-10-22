#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 * Return: Always 0.
 */
void print_alphabet_10x(void)
{
	int i;
	char a = 'a';

	for (i = 0 ; i < 42; i++)
	{
	_putchar(a);
	a++;
	}
_putchar('\n');
}
