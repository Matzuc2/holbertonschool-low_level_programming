#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	int i;
	char a = 'a';

	for (i = 0 ; i < 26; i++)
	{
	putchar(a);
	a++;
	}
}
