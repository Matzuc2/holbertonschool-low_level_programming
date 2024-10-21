#include <stdio.h>
/* more headers goes there */
/**
*	main - Prints "Programming is like building a multilingual
 *	puzzle, followed by a new line.
	* Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	signed char c = '0';

	for (i = 0; i < 10; i++)
	{
	putchar(c);
	putchar(',');
	putchar(' ');
	c++;
	}
putchar('\n');
return (0);
}
