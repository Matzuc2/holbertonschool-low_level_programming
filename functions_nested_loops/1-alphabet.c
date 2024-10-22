#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char a = 'a';

	for (i = 0 ; i < 26; i++)
	{
	_putchar(a);
	a++;
	}

}
