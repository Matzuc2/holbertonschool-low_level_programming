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
	char hexa = 'a';
	char decimal = '0';
	char g = 'g';
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(decimal);
	decimal++;
	}
	for (hexa = 'a'; hexa < g; hexa++)
	{
	putchar(hexa);
	}
putchar('\n');
return (0);
}
