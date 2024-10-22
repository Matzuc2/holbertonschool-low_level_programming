#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * _print_alphabet - writes the alphabet
 * _print_alphabet_x10 - writes the alphabet ten times
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		}

_putchar('\n');
}
