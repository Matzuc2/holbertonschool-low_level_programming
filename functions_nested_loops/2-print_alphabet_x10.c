#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i;
	char a = 'a';

		for (j = 0 ; j < 10; j++)
		{
			for (i = 0; i < 26; i++)
			{
			_putchar(a);
			a++;
			}
 			a = 'a';
		_putchar(a);
		}

}
