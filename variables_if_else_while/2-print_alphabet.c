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
	char z = 'z';
	char a;

	for (a = 'a' ; a <= z ; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
